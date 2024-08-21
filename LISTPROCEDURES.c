//Criando procedimentos para manipulação de listas
//Inserção:
void INSERT(type x, int p, LIST L){
  int q;
  if (L.last >= maxlength){
    error("list is full");
  }else if( p > (L.last + 1) || p < 1){
    error("position does not exist")
  }else{
    for(q = L.last; q > p;q--){
      L.elements[q+1] = L.elements[q];
    }
    L.last = L.last + 1;
    L.elements[p] = x;
  }
}
//DELETAR
void DELETE(int p, LIST L){
  int q;
  if(p > L.last || p < 1){
    error("position does not exist")
  }else{
    L.last = L.last - 1;
    for(q = p; q < L.last;q++){
      L.elements[q] = L.elements[q+1];
    }
  }
}

int LOCATE(type x, LIST L){
  int q;
  for(q = 0; q < L.last; q++){
    if (L.elements[q] == x){
      return q;
    }
    return (L.last + 1);
  }
}

int main(){}
