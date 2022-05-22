#include <stdio.h>

int main() {
  float mil_purch, hand_purch;
  printf("Enter your purchase of mill cloth:\n");
  scanf("%f", &mil_purch);
  printf("Enter your purchase of handloom items:\n");
  scanf("%f", &hand_purch);

  float mil_dis, hand_dis;
  if (mil_purch > 300) {
    mil_dis = 5.0;
  } else if (mil_purch > 200) {
    mil_dis = 7.5;
  } else if (mil_purch > 100) {
    mil_dis = 5.0;
  } else {
    mil_dis = 0;
  }

  if (hand_purch > 300) {
    hand_dis = 15.0;
  } else if (hand_purch > 200) {
    hand_dis = 10.0;
  } else if (hand_purch > 100) {
    hand_dis = 7.5;
  } else {
    hand_dis = 5.0;
  }
  double amt = mil_purch*mil_dis/100 + hand_purch*hand_dis/100;
  printf("Total Amount : %f\n", (mil_purch+hand_purch-amt) );

  return 0;
}
