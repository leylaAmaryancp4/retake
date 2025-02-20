#include<stdio.h>

int mat(int matrix[][100], int n){
int sum = 0;
for(int i = 0; i < n; ++i){
sum += matrix[i][n - 1 - i];
}
return sum;
}
int main(){
int n;
printf("Print matrix size\n");
scanf("%d", &n);
int matrix[100][100];
printf("Print matrix element\n");
for(int i = 0; i < n; ++i){
for(int j = 0; j < n; ++j){
scanf("%d", &matrix[i][j]);
}
}
int result = mat(matrix,n);
printf("%d\n", result);

}
