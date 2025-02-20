#include<stdio.h>
int foo(int num, int exp){
int result = 1;
if(exp <= 0){
printf("exponent mas be positiv number");
return 1;
}
for(int i = 0; i < exp; ++i){
result *= num;
}
return result;
}
int main(){
int num;
int exp;
printf("Print a number\n");
scanf("%d", &num);
printf("Print exponent\n");
scanf("%d", &exp);
int result = foo(num, exp);
printf("%d", result);
}
