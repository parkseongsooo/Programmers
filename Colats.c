#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long num) {
    int answer = 0;
    for(int i=1; i<=500; i++){
       if(num == 1)
           return answer;
        else if(num % 2 == 0){
            num /= 2;
        }
        else
            num = num*3 +1;
       answer++;
    }
    return -1;
    
    
}