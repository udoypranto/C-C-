#include<stdio.h>
int main(){
    int t;
 if (scanf("%d",&t)!= 1){
     return 0;
     }

    while(t--){
        int n;
        scanf("%d", &n);
    int totalsum =0;
    for (int i =0; i<n; i++){
        int num;
            scanf("%d", &n);
            if(i%2 != 0){
                totalsum += num;
            }
        else{
            totalsum -= num;
        }
    }
}
return 0;
}

