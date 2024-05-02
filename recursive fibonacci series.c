#include <stdio.h>

int fib(int n);

int main(){
    int n;
    printf("enter numbers of terms you want in fibonacci series : ");
    scanf("%d",&n);

    for (int i=0 ; i < n ; i++){
        printf("%d\t", fib(i));
    }
    return 0 ;
}

int fib(int n){
    if ( n==0 || n == 1){
        return n;
    }
    else{
        return (fib(n-1) + fib(n-2)) ;
    }
}
