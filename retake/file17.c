#include<stdio.h>
//Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել երկու ամբողջ թիվ, ստուգեք թվերը կարող են իրար վրա բաժանվել թե ոչ։
int main(){
int num1;
int num2;
scanf("%d %d", &num1, &num2);
if( num1 > num2 && num1 % num2 == 0){
printf("numbers can be divide\n");
}else{
printf("Numbers can not be divided\n");
}
}
