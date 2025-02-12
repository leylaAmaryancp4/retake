#include<stdio.h>
//Գրել ծրագիր, որը էկրանին կտպի A && B || !B || A Բուլյան արտահայտության ճշտության աղյուսակը
int main(){
printf("A B | A && B | !B | A && B || !B || A\n");
for(int A = 0; A<=1; ++A){
for(int B = 0; B <=1; ++B){
int and_result = A && B;
int not_result = !B;
int final_result = and_result || not_result || A;
printf("%d %d|    %d    |    %d   |       %d\n ",A,B,and_result, not_result, final_result);
}
}
}
