#include<stdio.h>
//Գրեք ծրագիր, որը օգտվողին թույլ է տալիս մուտքագրել թիվ և էկրանին տպում է այդ թվի թվանշանների գումարի արդյունքը։
int main(){
int num;
int sum = 0;
printf("Print a number\n");
scanf("%d",&num);
while(num != 0){
int digit = num % 10;
sum +=digit;
num/=10;
}
printf("%d",sum);
}
