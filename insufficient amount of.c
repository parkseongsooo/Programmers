#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long price, long money, long count) {
    
    long sum = 0;
    for(int i=1;i<=count; i++){
        sum += i*price;
    }
    if(sum> money){
        return sum-money;
    }
    else
        return 0;
    
}