#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int len = 0;
    
    while(s[len] != '\0'){
        len++;
    }
    int* answer = (int*)malloc(sizeof(int)*len+1);
    answer[0] = -1;
    for(int i = 1; i < len; i++)
    {
        for(int j = i-1; j>=0; j--){
          if(s[j] == s[i]){
                answer[i] = i - j;
                break;
            }
           else answer[i] = -1;
        }
    }
    
    return answer;
    free(answer);
}