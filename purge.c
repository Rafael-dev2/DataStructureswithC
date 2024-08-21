#Implementação da função PURGE para listas

void PURGE(LIST L){
  int p,q;
  p = FIRST(L);
  while (p != LAST(L)){
    q = NEXT(p, L);
    while(q != LAST(L)){
      if(same(RETRIEVE(p, L),RETRIEVE(q, L))){
        DELETE(q,L);
      }else{q = NEXT(q, L)}
    }
    p = NEXT(p, L);
  }

}

int main(){

}
