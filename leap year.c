char* solution(int a, int b) {
    char* day[]={"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int month[]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cnt = 0;
    for(int i=0; i<a-1; i++){
        cnt += month[i];
    }
    cnt += b-1;    
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char));
    answer = day[cnt%7];
    return answer;
}