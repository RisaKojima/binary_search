#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
  while (ub - lb > 1) {
    long long int m = (lb + ub) / 2;
    long long int Sum = 0;
    for(i = 0; i < n; i++){
      Sum = Sum + (A[i] /m);
    }
    if(Sum < k){
      ub = m;
    }
    else {
      lb = m;
    }
  }
  printf("%d\n", lb);





  return 0;
}
