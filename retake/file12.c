#include<stdio.h>
//Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել թիվ, ստուգել և տպել՝ արդյոք թիվը զույգ է, թե կենտ։
int main(){
int number;
printf("Print some number\n");
scanf("%d", &number);
if(number % 2 == 0){
printf("Number is even\n");
}else{
printf("Number is odd\n");
}
}
