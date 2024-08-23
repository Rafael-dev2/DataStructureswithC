//Implementação problema da mochila
#include <stdio.h>
#define maxsize 10

typedef int weights[maxsize];

int knapsack(int target, int candidate,weights weights);

int main(){
  int n;
  printf("Digite um número: ");
  scanf("%d",&n);
  weights mochila = {1,2,4,8,16,32,64};
  printf("%d\n",knapsack(n,0,mochila));
}


int knapsack(int target,int candidate,weights weights){
  if(target == 0){
    return 1;
  }else if(target < 0 || candidate > maxsize){
    return 0;
  } else if(knapsack(target-weights[candidate],candidate+1,weights)) {
    printf("%d ",weights[candidate]);
    return 1;
  }else{
    return (knapsack(target, candidate + 1,weights));
  }
}


