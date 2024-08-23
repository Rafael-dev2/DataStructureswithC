//Versão iterativa de knapsack
#define maxlength 15
#include <stdio.h>
#include <stdlib.h>

typedef enum statues{
    none = 0,
    included = 1,
    excluded = 2
}statues;

typedef struct STACK{
  int top;
  statues stats[maxlength];
}STACK;

typedef int weights[maxlength];

void MAKENULL(STACK *s){
  s->top = maxlength+1;
}
int EMPTY (STACK *s){
  if (s->top > maxlength){
    return 1;
  }else{
    return 0;
  }
}

statues TOP(STACK *s){
  if(EMPTY(s)){
    printf("Stack is empty");
  }else{
    return(s->stats[s->top]);
  }
}

void POP(STACK *s){
  if(EMPTY(s)){
    printf("Stack is empty");
  }else{
    s->top = s->top+1;
  }
}

void PUSH(statues x,STACK *s){
  if(s->top == 0){
    printf("Stack is full");
  }else{
    s->top = s->top - 1;
    s->stats[s->top] = x;
  }
}

void knapsack(int target, weights weights){
    int candidate;
    int winflag;
    STACK* S;
    S = (STACK*)(malloc(sizeof(STACK)));
    candidate = 1;
    winflag = 0;
    MAKENULL(S);
    PUSH(none, S);
    while(EMPTY(S) != 1){
      if(winflag){
        while(EMPTY(S) != 1){
          if (TOP(S) == included){
            printf("%d ",weights[candidate]);            
            }
          candidate -= 1;
          POP(S);        
        }
      }
      else if (target == 0){
        winflag = 1;
        candidate -= 1;
        POP(S);
      }
      else if (((target < 0)&&(TOP(S)== none)) || (candidate > maxlength)){
        candidate = candidate - 1;
        POP(S);
      }else if (TOP(S)==none){
        target = target - weights[candidate];
        candidate += 1;
        POP(S);
        PUSH(included,S);
        PUSH(none,S);
      }else if(TOP(S)==included){
        target = target + weights[candidate];
        candidate += 1;
        POP(S);
        PUSH(excluded,S);
        PUSH(none,S);
      }else{
        POP(S);
        candidate -= 1;
        }
      
    }
}

int main(){
  weights mochila = {0,1,2,4,8,16,32,64};
  printf("Digite um número: ");
  int n = 0;
  scanf("%d",&n);
  knapsack(n,mochila);
  printf("Olá mundo!");
}
