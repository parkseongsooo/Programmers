#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char solution(const char* s) {
   char c = s[0];
    int a =1;
    int b =0;
    int result = 1;
    for(int i =1; i<strlen(s)-1; i++){
        if(s[i] == c){
            a++;
        }
        else
            b++;
        if(a == b){
            result++;
            a =1;
            b =0;
            i++;
            c = s[i];
        }
    }
    return result;
}