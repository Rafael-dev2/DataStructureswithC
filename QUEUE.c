//Implementação de filas
#define type int
#include <stdio.h>
#include <stdlib.h>
typedef struct cell{
  type element;
  struct cell *next;
}cell;

typedef struct QUEUE{
  cell *front;
  cell *rear;
}QUEUE;

void MAKENULL(QUEUE *Q){
  Q->front = (cell*)malloc(sizeof(cell));
  Q->front->next = NULL;
  Q->rear = Q->front;
}

int EMPTY(QUEUE *Q){
  if(Q->front == Q->rear){
    return (1);
  }else{
    return (0);
  }
}

type FRONT(QUEUE *Q){
  if(EMPTY(Q)){
    printf("A fila está vazia");
  }else{
    return(Q->front->next->element);
  }
}

void ENQUEUE(type x,QUEUE *Q){
  Q->rear->next = malloc(sizeof(cell));
  Q->rear = Q->rear->next;
  Q->rear->element = x;
  Q->rear->next = NULL;
}

void DEQUEUE(QUEUE *Q){
  if(EMPTY(Q)){
    printf("A fila está vazia");
  }else{
    Q->front = Q->front->next;
  }
}

int main(){
  QUEUE* fila;
  fila = (QUEUE*)malloc(sizeof(QUEUE));
  MAKENULL(fila);
  DEQUEUE(fila);
  printf("Olá Mundo!");
  return 0;
}


