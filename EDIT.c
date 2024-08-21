//função de editar para textos
#include <stdio.h>
#define type char
#define maxlength 100
typedef struct STACK{
  int top;
  type elements[maxlength];
}STACK;
void MAKENULL(STACK s){
  s.top = maxlength;
}
int EMPTY (STACK s){
  if (s.top >= maxlength){
    return 1;
  }else{
    return 0;
  }
}

type TOP(STACK s){
  if(EMPTY(s)){
    error("Stack is empty");
  }else{
    return(s.elements[s.top]);
  }
}

void POP(STACK s){
  if(EMPTY(s)){
    error("Stack is empty");
  }else{
    s.top = s.top+1;
  }
}

void PUSH(type x,STACK s){
  if(s.top == 0){
    error("Stack is full");
  }else{
    s.top = s.top - 1;
    s.elements[s.top] = x;
  }
}
void error(char* erro){
  printf("%s\n",erro);
}
void EDIT(char* t){
  STACK s;
  char c;
  MAKENULL(s);
  while(c!='\0'){
    c = getc(t);
    if(c == '#'){
      POP(s);
    }else if(c == '@'){
      MAKENULL(s);
    } else{
      PUSH(c, s);
    }
  }
  while(s.top < maxlength){
    putchar(s.elements[s.top]);
    s.top += 1;
  }
}

int main(){
  char texto[50];
  scanf("%s",&texto);
  EDIT(texto);
}
