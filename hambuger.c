#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ingredient_len은 배열 ingredient의 길이입니다.
int solution(int ingredient[], size_t ingredient_len) {
    int answer = 0;
    int stack[1000000];
    int count = 0;
    for(int i = 0; i< ingredient_len; i++){
        stack[count++] = ingredient[i];
        if(stack[count-1]==1){
            while(count >=4){
                if(stack[count-4] ==1 && stack[count-3] == 2 && stack[count-2] ==3 && stack[count-1]==1){
                    answer++;
                    count -=4;
                
                }
                else break;
                
            }
        }
    }
    
    return answer;
}