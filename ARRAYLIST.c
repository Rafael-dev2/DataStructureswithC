//Criação da estrutura lista com array
#DEFINE maxlength 100
#DEFINE type int

typedef struct LIST{
  type* elements;
  int last;
}LIST;


//Inserção:
void INSERT(type x, int p, LIST *L){
  int q;
  if (L->last >= maxlength){
    printf("list is full");
  }else if( p > (END(L)) || p < 0){
    printf("position does not exist");
  }else{
    for(q = L->last; q > p;q--){
      L->elements[q+1] = L->elements[q];
    }
    L->last = END(L);
    L->elements[p] = x;
  }
}


//DELETAR
void DELETE(int p, LIST L){
  int q;
  if(p > END(L) || p < 0){
    printf("position does not exist");
  }else{
    L.last = L.last - 1;
    for(q = p; q < END(L);q++){
      L.elements[q] = L.elements[q+1];
    }
  }
}
//Localizar
int LOCATE(type x, LIST *L){
  int q;
  for(q = 0; q < END(L); q++){
    if (L->elements[q] == x){
      return q;
    }
    return (END(L) + 1);
  }
}
//Recuperar
type RETRIEVE(int p, LIST *L){
  if(p == END(L)){
    return NULL;
  }else{
    return L->elements[p];
  }
}
//Próximo
int NEXT(int p, LIST *L){
  if(p != END(L)){
    return p+1;
  }
}
//Anterior
int PREVIOUS(int p, LIST *L){
  if(p != 0){
    return p-1;
  }else{
    return maxlength+1;
  }
}
//Fim
int END(LIST *L){
  return L->last+1;
}
//Vazio
int EMPTY(LIST *L){
  if(END(L) == 0){
    return 1;
  }else{
    return 0;
  }
}
//Tornar Nulo
int MAKENULL(LIST *L){
  L->elements = (int*)(malloc(sizeof(int)*100));
  L->last = 0;
  return END(L);
}
//Exibir
void PRINTLIST(LIST *L){
  int p = 0;
  while(p != L->last){
    
    printf("%d ",L->elements[p]);
    p = NEXT(p,L);
  }
}

int main(){
  return 0;
}
