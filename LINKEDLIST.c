//Implementação de lista ligada simples
#include <stdio.h>
#include <stdlib.h>
#define type int

typedef struct LINKEDLIST{
  type element;
  struct LINKEDLIST *next;
}LINKEDLIST;

LINKEDLIST *END(LINKEDLIST *L){
  LINKEDLIST *aux;
  aux = L;
  while(aux->next != NULL){
    aux = aux->next;
  }
  return aux;
}

void INSERT(type element, LINKEDLIST *L){
  LINKEDLIST *temp;
  temp = L->next;
  LINKEDLIST *cell;
  cell = (LINKEDLIST*)malloc(sizeof(LINKEDLIST));
  L->next = cell;
  L->next->element = element;
  L->next->next = temp;
}

void DELETE(LINKEDLIST *L){
  LINKEDLIST *temp = L->next;
  L->next = L->next->next;
  free(temp);
}

LINKEDLIST *LOCATE(type element,LINKEDLIST *L){
  LINKEDLIST *aux;
  aux = L;
  while(aux->next != NULL){
    if(aux->next->element == element){
      return aux;
    }else{
      aux = aux->next;
    }
  }
  return aux;
}

LINKEDLIST *MAKENULL(LINKEDLIST *L){
  L = (LINKEDLIST*)malloc(sizeof(LINKEDLIST));
  L->next = NULL;
  return L;
}

type RETRIEVE(LINKEDLIST *L){
  return L->element;
}

LINKEDLIST *NEXT(LINKEDLIST *L){
  if(L == NULL){
    printf("NULL pointer");
  }else if(L->next != NULL){
    L = L->next;
  }else if (L->next == NULL){
    return NULL;
  }
  return L;
}
void PRINTLIST(LINKEDLIST *L){
  LINKEDLIST *temp;
  temp = NEXT(L);
  while(NEXT(temp) != NULL){
    printf("%d ",temp->element);
    temp = NEXT(temp);
  }
}
int main(){
  LINKEDLIST *L;
  L = (LINKEDLIST*)malloc(sizeof(LINKEDLIST));
  MAKENULL(L);
  INSERT(0,L);
  INSERT(1,L);
  INSERT(2,L);
  INSERT(3,L);
  PRINTLIST(L);
}


