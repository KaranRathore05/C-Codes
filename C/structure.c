#include <stdio.h>
struct student 
{ int rollno ;
 float cgpa;
 char name[100];
    
};

int main(){
    struct student s1 ={36,9.5,"karan"};
    printf("%s",s1.name);

    
}