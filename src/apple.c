#include <stdio.h>

int n;
int k;
int A[100000];



int main(){
  long long int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
  while (ub - lb > 1) {
    long long int m = (lb + ub) / 2;
    long long int BagsSum = 0;
    for(i = 0; i < n; i++){
      BagsSum = BagsSum + (A[i] + m - 1)/m;
    }
    if(BagsSum > k){
      lb = m;
    }
    else {
      ub = m;
    }
  }
  printf("%lld\n", ub);



  return 0;
}

