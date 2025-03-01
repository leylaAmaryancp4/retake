#include<stdio.h>
//Իրականացնել memset ֆունկցիա
//void * memset(void * buff, int  symbol,  size_t len);

char* memeset(char* buff,char symbol, size_t len){
for(int i = 0; i < len; ++i){
buff[i] = symbol;
}
buff[len] = '\0';
return buff;
}

int main(){
const int size = 5;
char buff[size];
char symbol;
scanf("%c", &symbol);
char* ptr = memeset(buff, symbol, size);
printf("%s",ptr);

}
