#include<stdio.h>
//Գրել ծրագիր, որը էկրանին կտպի A || B && !(B || A) Բուլյան արտահայտության ճշտության աղյուսակը։

int main(){
 printf(" A  B | !(B || A)  |  B &&  !(B || A) |  A || B && !(B || A)\n");
for(int A = 0; A <=1; ++A){
for(int B = 0; B <=1; ++B){
int not_or = !(B || A);
int and_result= B && not_or;
int final = A || and_result;
printf(" %d  %d  |    %d    |      %d           |   %d\n", A,B ,not_or, and_result, final);
}
}
}
