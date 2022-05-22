#include <stdio.h>
int main() {
  int marks;
  printf("Enter your marks\n");
  scanf("%d", &marks);
  if (marks > 100 || marks < 0) {
    printf("Enter valid marks between 0 and 100.\n");
  } else {
    if (marks >= 80) {
      printf("Distinction\n");
    } else if (marks >= 60) {
      printf("First Class\n" );
    } else if (marks >= 35) {
      printf("Second Class\n");
    } else {
      printf("Fail\n");
    }
  }

  return 0;
}
