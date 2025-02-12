#include<stdio.h>
//Գրեք ծրագիր, որը օգտագործողին թույլ է տալիս մուտքագրել ամբողջ թիվ և տպում է դրա ֆակտորիալը։
int main(){
int num;
int factorial = 1;
scanf("%d", &num);
for(int i = 1; i <= num; ++i){
factorial *= i;
}
printf("%d", factorial);
}
