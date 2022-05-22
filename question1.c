#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c, d, k, x;
  printf("Enter the values of a, b, c, d, k, x : \n" );
  scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &k, &x );

  if (x  > k) {
    printf("ax^3 - bx^2 + cx - d = ");
    int tmp = a*x*x*x - b*x*x + c*x - d;
    printf("%d\n", tmp);
  } else if (x==k) {
    printf("0\n");
  }
  else {
    printf("-ax^3 + bx^2 - cx + d = ");
    int tmp1 = -a*x*x*x + b*x*x - c*x + d;
    printf("%d\n", tmp1);
  }

  return 0;
}
