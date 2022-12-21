#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// food_len은 배열 food의 길이입니다.
char* solution(int food[], size_t food_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1000000);
    int count = 0;
    for(int i=1; i< food_len; i++){
        if(food[i] %2 == 0)
            continue;
        else
            food[i]--;
    }
    for(int i = 1; i< food_len; i++){
        for(int j = 0; j<food[i]/2; j++){
            answer[count++] = i + '0';
        }
    }
    answer[count++] = '0';
    for(int i = food_len -1; i >= 1; i--){
        for(int j = 0; j< food[i]/2;j++){
            answer[count++] = i + '0';
        }
    }answer[count] = '\0';
    return answer;
}