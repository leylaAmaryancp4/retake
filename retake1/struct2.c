#include<stdio.h>
#include<stdlib.h>
typedef struct student{
char name[50];
int age;
float grade;
}student;

void input(student** ptr, int size){
*ptr=(student*)malloc(size * sizeof(student));
if(*ptr == NULL){
perror("Allocation is faild\n");
exit(1);
}
for(int i = 0; i < size; ++i){
scanf("%s",(*ptr)[i].name);
scanf("%d", &(*ptr)[i].age);
scanf("%f", &(*ptr)[i].grade);
}
}

void reall(student** ptr, int size, int newsize){
student* tmp =(student*)realloc(*ptr,newsize * sizeof(student));
if(tmp == NULL){
perror("Allocation is faild\n");
exit(1);
}
*ptr = tmp;

for(int i = size; i < newsize; ++i){
scanf("%s", (*ptr)[i].name);
scanf("%d", &(*ptr)[i].age);
scanf("%f",&(*ptr)[i].grade);
}
}


void output(student ptr){
printf("Student name %s\n",ptr.name);
printf("Student age %d\n", ptr.age);
printf("Student grade %f\n", ptr.grade);
}


int main(){
student* obj;
const int size = 5;
input(&obj, size);
int newsize = 10;
reall(&obj, size, newsize);
for(int i = 0; i < newsize; ++i){
output(obj[i]);
free(obj);
}

}
