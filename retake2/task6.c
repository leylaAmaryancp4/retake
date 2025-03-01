#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//Գրել ֆունկցիա, որը կվերադարձնի տրված m×n չափերի մատրիցաի բոլոր պարզ թվերը զանգվածով։
bool is_prime(int n){
if(n < 2){
return false;
}
for(int i = 2; i * i <= n; ++i){
if(n % 2 == 0){
return false;
}
}
return true;
}
int *primeNumbersOfMatrix(int **matrix, int n, int m, int *count){

for(int i = 0; i < n; ++i){
for(int j = 0; j < m; ++j){
if(is_prime(matrix[i][j])){
(*count)++;
}
}
}
if((*count) == 0){
return NULL;
}
int index = 0;
int* ptr = (int*)malloc((*count) * sizeof(int));
for(int i = 0; i < n; ++i){
for(int j = 0; j < m; ++j){
if(is_prime(matrix[i][j]))
ptr[index++] = matrix[i][j];
}
}
return ptr;
} 

int main(){
int n;
int m;
printf("Print array row's and colum's size\n");
scanf("%d %d", &n, &m);
int** matrix = (int**)malloc(n  * sizeof(int*));
for(int i = 0; i < n; ++i){
matrix[i] = (int*)malloc(m * sizeof(int));
}

printf("Matrix elements\n");
for(int i = 0; i < n; ++i){
for(int j = 0; j < m; ++j){
scanf("%d", &matrix[i][j]);
}
}
int count = 0;
int* ptr = primeNumbersOfMatrix(matrix, n, m, &count);
if(ptr){
for(int i = 0; i < count; ++i){
printf("%d,", ptr[i]);
}
}else{
printf("No prime number is found\n");
}
for(int i = 0; i < n;++i){
free(matrix[i]);
}
free(ptr);
free(matrix);
}
