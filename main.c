#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

enum numbers{
    zero,
    one,
    two
};


bool isPrim(int until){
//TODO:
    for(int i = 2; i < until; i++){
        if(until%i==0){
                return false;
        }
    }

    return true;
}


int main()
{
    enum numbers hi = one;
    enum numbers hii = two;

    printf("Hello world!%d\n%d\n%d\n\n\n",one,hi,hii);

    for(int i = 3; i < 50;i++){
        isPrim(i) ? printf("%d ist primazahl\n",i) : printf("%d ist kein primazahl\n",i);
    }

    return 0;
}
