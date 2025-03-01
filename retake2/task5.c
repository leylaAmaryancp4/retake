#include<stdio.h>
//Իրականացնել ֆունկցիա, որը ստանում է տող և վերադարձնում տողում առաջին հանդիպած մեծատառը։
int  upper(char* str){
char* ptr = str;
for(int i = 0; ptr[i] != '\0'; ++i){
if(ptr[i] >= 'A' && ptr[i] <= 'Z'){
return ptr[i];

}
}
return '\0';
}

int main(){
const int size = 20;
char str[size];
int flag = 0;
fgets(str, size, stdin);
char  sym  =  upper(str);
if( sym){
printf("%c\n", sym);
}else{
printf("No uppercase is found\n");
}
}
