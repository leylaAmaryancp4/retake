#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Իմպլեմենտացրեք ֆունկցիա՝ void *custom_realloc(void *ptr, size_t new_size), որը վերարտադրում է realloc-ի պահվածքը: 
//Օգտագործեք այս ֆունկցիան՝ դինամիկ հատկացված հիշողության բլոկի չափը փոխելու համար:

void* custom_realloc(void* ptr, size_t new_size){
if(new_size == 0){
free(ptr);
return NULL;
}
if(ptr == NULL){
return malloc(new_size);
}
void* add = malloc(new_size);
if(add == NULL){
return NULL;
}

memcpy(add, ptr, new_size);
free(ptr);
return add;
}

