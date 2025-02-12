#include<stdio.h>
//Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել երկու սիմվոլները, ստուգեք արդյոք սիմվոլները արտահայտում են նույն տառի մեծատառ և փոքրատառ տեսքները, թե՛ ոչ։
int main(){
char sym1;
char sym2;
printf("Print two latters\n");
scanf(" %c %c", &sym1, &sym2);
if((sym1 ^ 0x20) == sym2){
printf("Yes letter ar the same\n");
}else{
printf("No the letter are not the same\n");
}

}
