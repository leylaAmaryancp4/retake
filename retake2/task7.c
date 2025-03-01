#include<stdio.h>
#include<stdlib.h>
//Գրել ֆունկցիա, որը ստանում է սիմվոլների մատրիցա և վերադարձնում է հիմնական անկյունագծի վրա գրված բառը։
char *diagonalWord(char **matrix, int n){

char* arr= (char*)malloc((n+1) * sizeof(char));
for(int i = 0; i < n; ++i){
arr[i] = matrix[i][i];
}
arr[n] = '\0';
return arr;
}

int main(){
int n;
scanf("%d", &n);
char** matrix = (char**)malloc(n * sizeof(char*));
for(int i = 0; i < n;++i){
matrix[i] = (char*)malloc(n * sizeof(char));
}
printf("print symbols for matrix\n");
for(int i = 0; i < n; ++i){
for(int j = 0; j < n; ++j){
scanf(" %c", &matrix[i][j]);
}
}
char* arr = diagonalWord(matrix, n);
printf("%s", arr);
 
free(arr);
for(int i = 0; i < n; ++i){
free (matrix[i]);
}
free(matrix);

}

