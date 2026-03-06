int prefixCount(char** words, int wordsSize, char* pref) {
    int count =0;
    for(int i=0 ; i<wordsSize ;i++){
        int c=0;
        for(int j=0 ; j<strlen(pref) ; j++){
            if(words[i][j]!=pref[j]){
                c=1;
                break;
            }
        }
        if(c==0) count++;
    }
    return count;
}