#include <stdio.h>
int main() {
  /*int num;
  printf("Number of policies sold :\n");
  scanf("%d", &num);

  double arr[num];
  printf("Enter the policy amount separated by space: \n");
  for (int i=0; i<num; ++i) {
    scanf("%lf", &arr[i]);
  }
  double amount = 0;
  for (int i=0; i<num; ++i) {
    if (arr[i] >= 25000) {
      amount += 140 + 0.75*arr[i];
    } else if (arr[i] >=10000) {
      amount += 50 + 0.6*arr[i];
    } else  {
      amount += 0.5*arr[i];
    }
  }
  printf("The commission due is %lf\n", amount/100);*/

  double num;
  printf("Total amount of policies sold:\n" );
  scanf("%lf", &num);

  double amount;
  if (num >= 25000) {
    amount =(0.0075*num) + 140;
  } else if (num >= 10000) {
    amount = 0.006*num + 50;
  } else {
    amount = 0.005*num;
  }

  printf("The commission due is %lf\n", amount);

  return 0;
}
