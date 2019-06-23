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
    int workers = 0;
    int sum = 0;
    for(i = 0; i < n; i++){
      if (sum + A[i] < m){
        sum += A[i];
      }
      else{
        workers += 1;
        sum = 0;
      }
    }
    if(workers < k){
      ub = m;
    }
    else {
      lb = m;
    }
  }
  printf("%d\n", lb);





  return 0;
}


