#include<stdio.h>

int power(int num){
    int power = num * num;
    return power;
}

int comprehensive(int num1,int num2,int num3){
    int avg= (num1 + num2 + num3) / 3;
    int variance = (power(avg - num1) + power(avg - num2) + power(avg - num3))/3;
    int comprehensive = 3 * avg - variance / 3;
return comprehensive;
}

void compare(int num1,int num2,int num3){
    if (num1 >= num2 && num2 >= num3) {
      printf("小明 > 小强 > 小林");
  } else if (num1 >= num3 && num3 >= num2) {
      printf("小明 > 小林 > 小强");
  } else if (num2 >= num1 && num1 >= num3) {
      printf("小强 > 小明 > 小林");
  } else if (num2 >= num3 && num3 >= num1) {
      printf("小强 > 小林 > 小明");
  } else if (num3 >= num1 && num1 >= num2) {
      printf("小林 > 小明 > 小强");
  } else {  
      printf("小林 > 小强 > 小明");
  }  
}

int main(){
    int x1, x2, x3;
    int y1, y2, y3;
    int z1, z2, z3;
    int comprehensive_x;
    int comprehensive_y;
    int comprehensive_z;

    printf("请输入小明的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("请输入小强的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &y1, &y2, &y3);
    printf("请输入小林的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &z1, &z2, &z3);

    comprehensive_x = comprehensive(x1, x2, x3);
    comprehensive_y = comprehensive(y1, y2, y3);
    comprehensive_z = comprehensive(z1, z2, z3);

    compare(comprehensive_x,comprehensive_y,comprehensive_z);

    return 0;
}