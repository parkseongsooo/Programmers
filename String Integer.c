#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int calculation(char *s, int n);
int solution(const char* s) {
    int answer = 0;
    if (s[0] == '-' || s[0] == '+')
    {
        answer = calculation(s, 1);
        if (s[0] == '-') { answer *= -1; }
    }
    else { answer = calculation(s, 0); }
    return answer;
}

int calculation(char *s, int n) {
    int answer = 0;
    for (int i = n; i < strlen(s); i++)
        {
            int a = 0;
            switch(s[i])
            {
                case '1': a = 1; break;
                case '2': a = 2; break;
                case '3': a = 3; break;
                case '4': a = 4; break;
                case '5': a = 5; break;
                case '6': a = 6; break;
                case '7': a = 7; break;
                case '8': a = 8; break;
                case '9': a = 9; break;
            }
            answer += pow(10, (strlen(s)-1-i)) * a;
        }
    return answer;
}

