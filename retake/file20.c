#include<stdio.h>
//Գրեք ծրագիր, որը էկրանին տպում է միայն 0-ից 100-ի կենտ թվերը։
int main(){
for(int i = 0; i <= 100; i++){
if(i % 2 == 1){
printf("%d,", i);
}
}
}
