#include<stdio.h>
#include<stdlib.h>
//Դինամիկ զանգվածից զույգ թվերի պատճենուm
int main(){
const int size = 10;
int* arr=(int*)malloc(size * sizeof(int));
for(int i = 0; i < size; ++i){
scanf("%d", &arr[i]);
}
int count = 0;
for(int i = 0; i < size; ++i){
if((arr[i] % 2) == 0){
count++;
}
}
int index = 0;
int* arr2=(int*)malloc(count * sizeof(int));
for(int i = 0; i < size; ++i){
if(arr[i] % 2 == 0){
arr2[index++] = arr[i];
}
}
for(int i = 0; i < count; ++i){
printf("%d", arr2[i]);
}


free(arr);
free(arr2);
}
