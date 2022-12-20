#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool check(int n) {
    int count =0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count ==2){
        return true;
    }
    else
        return false;
}
// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    for(int i=0; i< nums_len-2; i++){
        for(int j =i+1; j<nums_len-1; j++){
            for(int k = j+1; k<nums_len;k++){
                if(check(nums[i]+nums[j]+nums[k]))
                    answer++;
            }
        }
    }
    return answer;
}