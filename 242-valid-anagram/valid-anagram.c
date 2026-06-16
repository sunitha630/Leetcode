bool isAnagram(char* s, char* t) {
    int *freq1[26];
    int *freq2[26];
   
    for(int i=0;s[i]!='\0';i++){
        freq1[s[i]-'a']++;
    
    }
    for(int i=0;t[i]!='\0';i++){
        freq2[t[i]-'a']++;
    }
    
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}