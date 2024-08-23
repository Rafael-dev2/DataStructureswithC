//Implentação fila circular

typedef struct cell {
  struct cell *next;
  type element;
}cell;

typedef struct QUEUE{
  cell* front;
  cell* back;
}QUEUE; 

void MAKENULL(QUEUE *Q){
  Q->front = (cell*)(malloc(sizeof(cell)));
  Q->front->next = NULL;
  Q->back = Q->front;
}

int EMPTY(QUEUE *Q){
  if(Q->front==Q->rear){
    return 1;
  }else{
    return 0;
  }
}

type FRONT(QUEUE *Q){
  if (EMPTY(Q)){
    printf("A fila está vazia");
  }else{
    return(Q->front->next->element);
  }
}

void ENQUEUE(type x, QUEUE *Q){
  Q->rear->next = (cell*)(malloc(sizeof(cell)));
  Q->rear = Q->rear->next;
  Q->rear->element = x;
  Q->rear->next = null;
}

void DEQUEUE(QUEUE *Q){
  if(EMPTY(Q)){
    printf("A fila está vazia");
  }else{
    Q->front = Q->front->next;
  }
}


