#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;
  
   while(n>=a){ 
      answer += b*(n/a);
      n = b*(n/a) + (n%a); 
   }
    return answer;
   
}