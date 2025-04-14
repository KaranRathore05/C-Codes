#include<stdio.h>
void vectorfunctions(struct vector v1,struct vector v2,struct vector sum){
    sum.x = v1.x +v2.x;
    sum.y = v1.y +v2.y;
    printf("%d",sum.x);
    printf("%d",sum.y);
}
struct vector
{
    int x;
    int y;
    
};

int main (){
    struct vector v1 = {5,19};
    struct vector v2 = {3,5};
    struct vector sum = {0,0};
    vectorfunctions(v1,v2,sum);
    
    
}