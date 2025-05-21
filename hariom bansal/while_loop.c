#include <stdio.h>

void main() {
  int n,i,a;
  int sum=0;

  printf("starting no.i=\n");
  scanf("%d",&i);

  printf("ending no.n=\n");
  scanf("%d",&n);
  
  while (i<=n) {
    printf("%d\n",i);
    sum+=i;
    i++;
        // printf("%d*%d=%d\n",i,a,i*a);
    
  }
  printf("%d",sum);
  }