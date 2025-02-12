#include<stdio.h>
//Ստեղծել num անունով ամբողջ թվային փոփոխական։ 
//Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել num անունով փոփոխականի արժեքը։ 
//Տպել էկրանին true մուտքագրված թվի զույգության դեպքում, հակառակ դեպքում՝ false։
int main(){
int num = 0;
printf("Print sum number\n");
scanf("%d", &num);
if(num % 2 == 0){
printf("true\n");
}else{
printf("false\n");
}
}
