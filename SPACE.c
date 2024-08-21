//Implementação de listar com cursor
#DEFINE type int
typedef struct CELL{
  type element;
  int next;
} CELL;

int move(int p, int q){
  int temp;
  if(p == 0){
    printf("cell does not exist");
    return 1;
  }else{
    temp = q;
    q = p;
    p = space[q].next;
    space[q].next = temp;
    return 0;
  }

}
void INSERT(type x, int p, LIST L){
  if(p == 0){
    if (move(available,L)){
      space[L].element = x;
    }else{
      if (move(available,space[p].next)){
        space[space[p].next].element = x;
      }
    }
  }
}

void DELETE(int p, LIST L){
  if(p == 0){
    move(L,available);
  }else{
    move(space[p].next,available);
  }
}

void initialize{
  int i;
  for(i == maxsize-1;i > 0; i++){
    space[i].next = i+1;
  }
  available = 1;
  space[maxsize].next = 0
}

int main(){}
