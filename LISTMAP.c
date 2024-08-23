//Implentação de mapas a partir de arrays
#define rangetype char
#define domaintype int
typedef MAPPING = rangetype[domaintype];

typedef struct elementype{
  domaintype domain;
  rangetype range;
}elementype;

void MAKENULL(MAPPING *M){
  domaintype i;
  for(i = firstvalue;i <= lastvalue; i++){
    M[i] = NULL;
  }
}

void ASSIGN(MAPPING *M, domaintype d, rangetype r){
  elementype x;
  int p;
  x.domain = d;
  x.range = r;
  p = FIRST(M);
  while(p != END(M)){
    if(RETRIEVE(p,M).domain = d){
      DELETE(p,M)
    }else{
      p = NEXT(p,M);
    }
  }
  INSERT(x, FIRST(M), M);
}

int COMPUTE(MAPPING *M,domaintype d,rangetype r){
  int p;
  p = FIRST(M);
  while(p != END(M)){
    if(RETRIEVE(p,M).domain = d){
      r = RETRIEVE(p,M).range;
      return 1;
    }
    p = NEXT(p,M);
  }
  return 0;
}
