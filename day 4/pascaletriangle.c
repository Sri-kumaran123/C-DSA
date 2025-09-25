#include <stdio.h>
int fact(int n){ 
	int f=1,i; 
	for(i=1;i<=n;i++) f*=i; 
	return f; 
}
int main(){
    int n=5;
    int i,s,j;
    for(i=0;i<n;i++){
        for(s=1;s<=n-i;s++) printf(" ");
        for(j=0;j<=i;j++) printf("%d ", fact(i)/(fact(j)*fact(i-j)));
        printf("\n");
    }
    return 0;
}

