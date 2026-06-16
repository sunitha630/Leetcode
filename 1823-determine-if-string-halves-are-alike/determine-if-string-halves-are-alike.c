bool halvesAreAlike(char* s) {
    int cnt=0;
    for(int i=0;s[i]!='\0';i++){
        cnt++;
    }
    
    int first=0,second=0;
    for(int i=0;i<(cnt/2);i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            first++;
        }
    }
    for(int i=cnt/2;i<cnt;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            second++;
        }
    }
    
    if(first==second) return true;
    return false;
}