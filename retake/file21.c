#include<stdio.h>
//Գրեք ծրագիր, որը օգտվողին թույլ է տալիս մուտքագրել 12-ից մեծ ամբողջ թիվ և տպել այդ թիվը թվանշանների հակառակ հերթականությամբ։
int main(){
int number;
int revers = 0;
printf("Print number\n");
scanf("%d", &number);
if(number <=12){
printf("Number must be greader 12\n");
}
while(number != 0){
int digit = number % 10;
revers = revers * 10 + digit;
 number /= 10;
}
printf("%d", revers);
}
