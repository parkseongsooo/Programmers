#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    double m = sqrt(n);
    answer = (m - (int)m == 0) ? pow(m+1,2) : -1;
    return answer;
}