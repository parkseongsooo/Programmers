#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char)*3*n);
    char *a = "수";
    char *b = "박";
    
    
    for(int i=0; i<n; i++) {
        strcpy(&answer[i*3], i%2==0 ? a : b);
    }
    return answer;
}