#include <stdio.h>

int n;
int k;
int A[100000];

int q(int m){
  int i;
  int workers = 0;
  int sum = 0;
  for(i = 0; i < n; i++){
      if(A[i] > m) return 0;
      if (sum + A[i] <= m){
        sum += A[i];
      }
      else{
        sum = A[i];
        workers += 1;
      }
    }
  return workers;
}


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
    
    if(q(m) < k){
      ub = m;
    }
    else {
      lb = m;
    }
  }
  printf("%d\n", lb);





  return 0;
}


