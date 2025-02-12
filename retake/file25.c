#include<stdio.h>
//Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքները,
//և տպում է դրանցից առավելագույնի արժեքը։
 int main(){
const int size = 5;
int arr[size];
for(int i = 0; i < size; ++i){
scanf("%d", &arr[i]);
}
int max = arr[0];
for(int i = 0; i < size; ++i){
if(max < arr[i]){
max = arr[i];
}
}
printf("%d", max);
}
