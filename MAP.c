//Implementação de mapas
#define type int
#define maxsize 100

typedef MAPPING domaintype[rangetype];

typedef struct elementtype{
  domaintype domain;
  rangetype range;
}elementtype;

void MAKENULL (MAPPING *M){
  domaintype i;
  for(i = firstvalue;i <= lastvalue; i++){
    M[i] = NULL;
  }
}

void ASSIGN (MAPPING *M,domaintype d, rangetype r){
  M[d] = r;
}

int COMPUTE(MAPPING *M, domaintype d, rangetype *r){
  if(M[d] == NULL){
    return 0;
  }else{
    *r = M[d];
    return 1;
  }
}
