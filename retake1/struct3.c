#include<stdio.h>
#include<stdlib.h>

int main(){

const int size = 10;
int newsize = 0;

int*arr=(int*)malloc(size * sizeof(int));
for(int i = 0; i < size; ++i){
scanf("%d", &arr[i]);
}

for(int i = 0; i < size; ++i){
if(arr[i] % 2 == 0){
newsize++;
}

}
int* ptr = (int*)malloc(newsize * sizeof(int));



int index = 0;
for(int i = 0; i < size; ++i){
if(arr[i] % 2 == 0){
ptr[index++]= arr[i];
}
}
for(int i = 0; i < newsize; ++i){
printf("%d",ptr[i]);
}
free(arr);
free(ptr);
}
