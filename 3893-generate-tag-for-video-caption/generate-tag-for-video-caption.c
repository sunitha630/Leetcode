char* generateTag(char* caption) {
    static char res[101];
    res[100]='\0';
    res[0]='#';
    int i=0,j=1;
    bool flag=false;
    while(j<100 && caption[i]!='\0'){
        if(caption[i]==' '){
            flag=true;
        }
        else{
            if(flag){
                if(caption[i]>='a' && caption[i]<='z'){
                  res[j++]=caption[i]-32;
                }
                else{
                    res[j++]=caption[i];
                }
                flag=false;
            }
            else{
                if(caption[i]>='A' && caption[i]<='Z'){
                     res[j++]=caption[i]+32;
                }
                else{
                    res[j++]=caption[i];
                }
            }
        }
        i++;
    }
    if(res[1]>='A' && res[1]<='Z'){
        res[1]=res[1]+32;
    }
    res[j]='\0';
    return res;
    
}
/*

*/