#include<stdio.h>
//Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թիվ, 
//եթե թվի հինգերորդ բիթը եղավ 0 սարքում է մեկ և տպում էկրանին, հակառակ դեպքում թիվը պարզապես տպել էկրանին։
int main(){
int num;
printf("Print a number\n");
scanf("%d",&num);
int result = num |(1<<5);
printf("%d\n", result);
}
