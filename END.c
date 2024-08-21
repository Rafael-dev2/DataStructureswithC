//Implementação de Lista ligada simples
#include <stdlib.h>
typedef struct LINKEDLIST {
  int element;
  struct LINKEDLIST *next;
}LINKEDLIST;

LINKEDLIST* END(LINKEDLIST *L){
  LINKEDLIST *q;
  q = L;
  while(q->next != NULL){
    q = q->next;
  }
  return q;
}
void INSERT(int x, LINKEDLIST *p){
  LINKEDLIST *temp;
  temp = p->next;
  p->next = (LINKEDLIST*)malloc(sizeof(LINKEDLIST*));
  p->next->element = x;
  p->next->next = temp;
}
void DELETE(LINKEDLIST *p){
  p->next = p->next->next;
}
LINKEDLIST* LOCATE(int x, LINKEDLIST *L){
  LINKEDLIST *p;
  p = L;
  while(p->next != NULL){
    if(p->next->element== x){
      return p;
    }else{
      p = p->next;
    }
  }
  return p;
}
LINKEDLIST* MAKENULL(LINKEDLIST *L){
  L = (LINKEDLIST*)malloc(sizeof(LINKEDLIST));
  L->next = NULL;
  return L;
}

int main(){
  return 0;
}
