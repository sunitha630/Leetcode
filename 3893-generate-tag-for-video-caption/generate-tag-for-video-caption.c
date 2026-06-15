char* generateTag(char* caption) {
    static char res[101];
    int i = 0;
    res[0]='#';
    res[100] = '\0';
    int j=1;
    while(caption[i] == ' ')i++;
    bool isStart = true;
    for(    ;caption[i]!='\0';i++){
        if(j == 100) return res;
        if(i == 0 || isStart) {
            isStart = false;
            if(caption[i] >= 'A' && caption[i] <= 'Z') {
                res[j++] = 'a' + caption[i]-'A';
            }else{
                res[j++] = caption[i];
            }
        }else if(caption[i-1] == ' ' && caption[i] != ' ') {
            if(caption[i] >= 'a' && caption[i] <= 'z') {
                res[j++] = 'A' + caption[i]-'a';
            }else {
                res[j++] = caption[i];
            }
        }else if(caption[i] != ' ') {
            if(caption[i] >= 'A' && caption[i] <= 'Z') {
                res[j++] = 'a' + caption[i]-'A';
            }else{
                res[j++] = caption[i];
            }
        }   
    } 
    res[j] = '\0';
    return res;
}
/*
if(caption[i]!=' '){
        ra=true;
    }
    else{
        if(ra){
            ra=false;
            res[j++]=caption[i]-32;
            
        }
        else{
            res[j++]=caption[i];
        }
        if(j==100){
            return res;
        }
    }
*/