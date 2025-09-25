#include <stdio.h>
int main(){
    int n=9832, max=0;
    while(n>0){
        int d=n%10;
        if(d>max) max=d;
        n/=10;
    }
    printf("Largest digit = %d", max);
    return 0;
}

