#include<stdio.h>
int main(){
 FILE * f1;
 f1 = fopen("CSE1121.text","r");
 if(f1 == NULL){
  printf("File doesn't exist!");
  return 1;
 }

 int ch;
 while(( ch = fgetc(f1)) != EOF){
        printf("%c",ch);
 }
 fclose(f1);
}

