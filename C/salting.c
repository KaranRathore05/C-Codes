#include<stdio.h>
#include<string.h>
void salt(char pass[]){
    char salting[] ="123";
    char newpass[200];

    strcpy(newpass,pass);
    strcat(newpass,salting);
    puts(newpass); 



}
int main (){
    char pass[100];
    scanf("%s",pass);
    salt(pass);

}
