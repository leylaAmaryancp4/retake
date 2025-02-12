#include<stdio.h>
//Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր, եթե երեք թվերից 2-ը հավասար են տպել՝ այդ երեքից ամենամեծ թիվը
int main(){
int num1;
int num2;
int num3;
int max = 0;
printf("Enter 3 numbers\n");
scanf("%d %d %d", &num1, &num2, &num3);
if(num1 == num2 || num1 ==  num3 || num2 == num3 ){
int max = num1;
if(num2 > max) max = num2;
if(num3 > max) max = num3;
printf("%d", max);
}else{
printf("Not equal numbers is found\n");
}
}
