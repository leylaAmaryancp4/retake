#include<stdio.h>
int max(int matrix[][100], int n){
int max = 0;
for(int i = 0; i < n;++i){
for(int j = 0; j < n; ++j){
 max = matrix[0][0];
if(matrix[i][j] > max){
max = matrix[i][j];
}
}
}
return max;
}
int main(){
int n;
printf("Print size\n");
scanf("%d", &n);
int matrix[100][100];
printf("Print elements\n");
for(int i= 0; i < n; ++i){
for(int j = 0; j < n; ++j){
scanf("%d", &matrix[i][j]);
}
}
int result = max(matrix,n);
printf("Max element is %d", result);
}
