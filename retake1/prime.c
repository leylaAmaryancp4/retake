#include<stdio.h>
#include<stdbool.h>
int is_prime(int n){
for(int i = 2; i * i <= n; ++i){
if(n % i == 0){
return false;
}
}
return true;
}
int main(){
int n;
printf("Print number\n");
scanf("%d", &n);
int flag = is_prime(n);

if(flag){
printf("Number is prime\n");
}else{
printf("Number is not prime\n");
}

}
