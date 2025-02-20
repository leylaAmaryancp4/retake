#include<stdio.h>

int  binary(int n){
if(n == 0){
printf("0");
}
int res[32];
int index = 0;
while(n > 0){
res[index++] = (n % 2);
n = n / 2;
}
for(int i = index - 1; i >= 0; --i){
printf("%d", res[i]);
}
}
int main(){
int n;
scanf("%d", &n);
 binary(n);
}
