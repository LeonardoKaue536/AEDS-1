#include <stdio.h>

int function(int n){
    if(n == 1){
        return 1;
    }else{
        return n*function(n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    printf("Fat eh %d", function(n));

    return 0;
}