#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int limit, int power) {
    int result = 0;
    for(int i=1; i<=number; i++){
        int count =0;
        for(int j =1;j<=i;j++)
            if(i%j==0) 
                count++;        
        if(count<=limit)
            result += count;
        else
            result += power;
    }
    return result;
}