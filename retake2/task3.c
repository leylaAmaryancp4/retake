#include<stdio.h>
#include<stdlib.h>
//Գրել ֆունկցիա, որը ստանում է ամբողջ թվերի զանգված, ստեղծում է նոր զանգված, որի i-րդ էլեմենտը սկզբնական զանգվածի մինչև i-րդ էլեմենտի արժեքների գումարն է, 
//թարմացնում է ցուցչի արժեքը, որպեսզի այն հղվի նոր զանգվածի վրա։
//void leftSum(int** arr, int size);
//Օրինակ։
//Array: {1, 2, 3, 4}, Size: 4
//	Արդյունք։
//Array: {0, 1, 3, 6}, Size: 4
void leftSum(int** arr, int size){
int* new_arr = (int*)malloc(size * sizeof(int));
if(arr == NULL){
printf("Allocation faild\n");
return ;
}
new_arr[0] = 0;
for(int i = 1; i < size; ++i){
new_arr[i] = new_arr[i - 1] + (*arr)[i - 1];
}
for(int i = 0; i < size; ++i){
printf("%d,", new_arr[i]);
}
free(*arr);
*arr = new_arr;
}


int main(){
const int size = 4;
int* arr = (int*)malloc(size * sizeof(int));
for(int i = 0; i < size; ++i){
scanf("%d", &arr[i]);
}
leftSum(&arr, size);
free(arr);

}

