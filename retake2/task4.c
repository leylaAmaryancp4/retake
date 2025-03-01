#include<stdio.h>
//Իրականացնել  ֆունկցիա, որը ստանում է թիվ և վերադարձնում թվի թվանշանների արտադրյալը։
int mul_of_digit(int num){
int mul = 1;
while(num != 0){
int digit = num % 10;
mul *= digit;
num /= 10;
}
return mul;
}
int main(){
int num = 234;
int res = mul_of_digit(num);
printf("%d", res);
}
