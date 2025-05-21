#include <stdio.h>

void main() {
  int n, i, a;
  int sum = 0;
 
  printf("starting no.i=\n");
  scanf("%d", &i);

  printf("ending no.n=\n");
  scanf("%d", &n);
  
  while (i <= n) {
    printf("%d\n", i);  
    sum += i;           
    i++;
  }
  for (a = 1; a <= 10; a++) {
    printf("%d * %d = %d\n", n, a, n * a);
  }
  
}
