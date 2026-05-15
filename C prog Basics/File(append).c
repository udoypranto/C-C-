#include<stdio.h>
int main(){
 FILE *f1;
 f1 = fopen("append.txt","a");
 if(f1 == NULL){
    printf(" File doesn't exist!");
    return 1;
 }
 char str[100];
 printf("Enter your name: ");
 gets(str);
 fputs(str,f1);
 fclose(f1);
}

