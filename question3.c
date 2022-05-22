#include <stdio.h>
int main() {
  float a = 4.6;
  float b = 2.3;
  int ans = a/b;
  printf("a=%f b=%f\n", a, b);
  printf("%d\n\n", ans);

  int x = -9;
  float y = 4.5;
  int ans1 = x/y;
  printf("a=%d b=%f\n", x, y);
  printf("%d\n\n", ans1);

  float m = 4.6;
  int n = -2;
  float ans2 = m/n;
  printf("a=%f b=%d\n", m, n);
  printf("%f\n\n", ans2);
  return 0;
}
