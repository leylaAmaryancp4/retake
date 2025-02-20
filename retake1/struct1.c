#include<stdio.h>
#include<stdlib.h>
typedef struct pointer{
char* name;
int* scores;
}pointer;

//dynamic memory malloc
void dynamic_memory(pointer** ptr,  int size){
*ptr=(pointer*)malloc(size * sizeof(pointer));
if(*ptr == NULL){
perror("Allocation is faild\n");
exit (1);
}
for(int i = 0; i < size; ++i){
(*ptr)[i].name=(char*)malloc(50* sizeof(char));
(*ptr)[i].scores=(int*)malloc(sizeof(int));
if((*ptr)[i].name ==NULL ||(*ptr)[i].scores==NULL ){
perror("Alllocation is faild");
exit(1);
}
printf("Enter name\n");
scanf("%s",(*ptr)[i].name);
printf("Enter score\n");
scanf("%d", (*ptr)[i].scores);
}
}


//realloc
void reall(pointer** ptr,  int size, int newsize){
pointer* tmp = (pointer*)realloc(*ptr,newsize * sizeof(pointer));
if(tmp == NULL){
perror("Allocation is faild\n");
return;
}

*ptr = tmp;

for(int i = size; i < newsize; ++i){
(*ptr)[i].name = (char*)malloc(50*sizeof(char));
(*ptr)[i].scores = (int*)malloc(sizeof(int));

if((*ptr)[i].name == NULL || (*ptr)[i].scores == NULL){
perror("Allocation is faild\n");
exit(1);
}
printf("Enter name\n");
scanf("%s", (*ptr)[i].name);
printf("Enter score\n");
scanf("%d", (*ptr)[i].scores);
}
}
//free memory
void free_memory(pointer* ptr,int size){
for(int i = 0; i < size; ++i){
free(ptr[i].name);
free(ptr[i].scores);
}
free(ptr);
}

int main(){
pointer* obj;
int size = 5;
dynamic_memory(&obj, size);
int newsize = 8;
reall(&obj,size,newsize);
free_memory(obj,newsize);
}
