#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    int len = strlen(s);
    bool answer = len ==4 || len == 6 ? true : false;
    
    for(int i=0;i<len;i++){
        
        if(islower(s[i])){
            answer = false;
            break;
        }
        if(isupper(s[i])){
            answer = false;
            break;
        }
    }
    if(!(len == 4 || len == 6))
        answer = false;
    
    return answer;
}