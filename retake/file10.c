#include<stdio.h>
//Գրել ծրագիր, որը էկրանին կտպի !(A && B) || A && !B || A Բուլյան արտահայտության ճշտության աղյուսակը։
int main(){
printf("A B  | !(A && B)  |  !B | A && !B  | !(A && B) || A && !B  || A\n");
for(int A = 0; A <= 1; ++A){
for(int B = 0; B <= 1; ++B){
int not_and = !(A && B);
int not_B = !B;
int and_not = A && not_B;
int final = not_and || and_not || A;
printf("%d %d |   %d      |   %d           |       %d\n", A, B, not_and, not_B, final);
}
}
}
