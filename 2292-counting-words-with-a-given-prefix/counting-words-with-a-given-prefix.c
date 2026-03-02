int prefixCount(char** words, int wordsSize, char* pref) {
    int count = 0;
    for(int i=0;i<wordsSize;i++){
        bool flag=true;
        for(int j=0;pref[j]!='\0';j++){
            if(pref[j]!=words[i][j]){
                flag=false;
                break;
            }
        }
        if(flag) count++;
    }
    return count;
}