#include<stdio.h>
//Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել չորս թիվ, եթե չորս թվերի գումարը հավասար է 0-ի տպել ամենափոքր թիվը։
int main(){
int num1;
int num2;
int num3;
int num4;
printf("Print 4 numbers\n");
scanf("%d %d %d %d", &num1,&num2, &num3,&num4);
 if(num1 + num2 + num3 + num4 == 0){
int min = num1;
if(num2 < min) min = num2;
if(num3 < min) min = num3;
if(num4 < min) min = num4;
printf("%d\n", min);
}else{
printf("Sum is not equal to 0\n");
}
}
