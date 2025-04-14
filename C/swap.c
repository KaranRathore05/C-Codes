#include<stdio.h>


void _swap(int *a , int *b){
    
    int temp = *a;
    *a=*b;
    *b = temp ;
    
    
    }
int main(){
    int x = 5 ;
    int y = 3 
    _swap(&x ,&y );
    printf("%d,%d", x,y);

    
}


void  swap(int a , int b){
    int temp = a;
    a=b;
    b = temp ;
    printf("%d, %d\n",a,b);
}