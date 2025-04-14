#include<stdio.h>
#include<conio.h>
float calculatetemp(float i){
    float far =i *(9/5) + 32;
    return far;
}
int main(){
 
 printf("%f",calculatetemp(5));
 return 0;
}