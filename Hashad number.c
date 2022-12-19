#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int a = 0;
    int b = x;
    while(b > 0){
        a += b%10;
        b /= 10;
    }
    if(x % a == 0)
        return true;
    else
        return false;
}