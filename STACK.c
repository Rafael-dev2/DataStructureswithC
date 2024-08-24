//Implementação da Pilha
#include<stdio.h>
#define type int
#define maxlength 100

typedef struct STACK{
  int top;
  type elements[maxlength];
}STACK;

void MAKENULL(STACK *S){
  S->top = maxlength;
}

int EMPTY (STACK *S){
  if(S->top >= maxlength){
    return 1;
  }else{
    return 0;
  }
}

type TOP(STACK *S){
  if(EMPTY(S)){
    printf("Stack is empty");
  }else{
    return S->elements[S->top];
  }
}

void POP(STACK *S){
  if(EMPTY(S)){
    printf("Stack is empty");
  }else{
    S->top += 1;
  }
}

void PUSH(type element, STACK *S){
  if(S->top == 0){
    printf("Stack is full");
  }else{
    S->top -= 1;
    S->elements[S->top] = element;
  }
}


