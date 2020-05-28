void reverse(char* s, int pos, int length){
    int f = pos + length - 1;
    for(int i = 0; i < length/2; i++){
        char* tmp = s[pos+i];                
        s[pos+i] = s[f-i];
        s[f-i] = tmp;
    }
}

char * reverseStr(char * s, int k){
    for(int i = 0; i < strlen(s); i = i + 2*k){
        if(strlen(s)-i < k) reverse(s, i, strlen(s)-i);
        else if(strlen(s)-i >= k && strlen(s)-i < 2*k) reverse(s, i, k);
        else reverse(s, i, k);
    }
    return s;
}
