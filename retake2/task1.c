#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Իմպլեմենտացրեք ֆունկցիա՝ void *custom_calloc(size_t num, size_t size), որը վերարտադրում է calloc-ի պահվածքը՝ օգտագործելով malloc ֆունկցիան: 
//Օգտագործեք այս ֆունկցիան՝ դինամիկ հատկացնելու և զրոյացնելու զանգված:

void* custom_calloc(size_t num, size_t size){
size_t totalsize = num * size;
void* ptr = malloc(totalsize);
if(ptr == NULL){
return NULL;
}
memset(ptr, 0, totalsize);
return ptr;
}

int main(){
int num = 3; 
size_t size = sizeof(int);
custom_calloc(num, size);
}

