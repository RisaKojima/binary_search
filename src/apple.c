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
  ub = n;
  while (ub - lb > 1) {
    int m = (lb + ub) / 2;
    i = lb;
    int BagsSum = 0;
    while(i < ub){
      BagsSum = BagsSum + (A[i] + m - 1)/m;
    }
    if(BagsSum < k){
      lb = m;
    }
    else {
      ub = m;
    }
  }
  printf("%d\n", ub);



  return 0;
}
