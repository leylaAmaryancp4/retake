#include<stdio.h>
//Գրեք ծրագիր, որը օգտվողին թույլ է տալիս մուտքագրել տարի և տպում է՝ տարին նահանջ տարի է, թե ոչ։
int main(){
int year;
printf("Enter year\n");
scanf("%d", &year);
if(year % 4 == 0 || year % 400 == 0 && year % 100 != 0){
printf("Year is leap year\n");
}else{
printf("Year is not leap year\n");
}
}
