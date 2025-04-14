#include<stdio.h>
int fibo (int n);
int fibo (int n){
    if(n==0){return 0;}
    if(n==1){return 1 ; 
    
    int nm1 = fibo(n-1);
    int nm2 = fibo(n-2);
    int ffibo  = nm1 +nm2;
   // printf("klkl%d",ffibo);
    return ffibo;
    
    
    


} int main ()

    printf("%d",fibo(9))

    return 0;

}