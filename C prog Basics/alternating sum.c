#include<stdio.h>
int main(){
   int t;
if (scanf("%d\n",&t) != 1)
    return 0;
 while(t--){
    int n;
    scanf("%d",&n);
    int totalsum= 0;
    for(int i = 1; i <= n; i++){
        int num;
        scanf("%d",&num);
        if (i%2 != 0){
          totalsum += num;
            }else{
                totalsum -= num;
            }
        }
    printf("%d\n", totalsum);
 }
 return 0;
}

