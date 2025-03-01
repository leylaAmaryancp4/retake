#include<stdio.h>
// Իրականացնել strcpy ֆունկցիա
char * strcpy(char * destination, const char *source){
char* ptr = destination;
while(*source !='\0'){
*ptr = *source;
ptr++;
source++;
}
*ptr = '\0';
return destination;
}

int main(){
char str1[100];
const char str2[] = "hello";

char* result = strcpy(str1, str2);
printf("%s", result);
}
