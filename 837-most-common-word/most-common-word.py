class Solution:
    def mostCommonWord(self, paragraph: str, banned: list[str]) -> str:

        #freq of each word --> max-->not in banned 
        
        paragraph=paragraph.replace('!',' ')
        paragraph=paragraph.replace('?',' ')
        paragraph=paragraph.replace(',',' ')
        paragraph=paragraph.replace(';',' ')
        paragraph=paragraph.replace('.',' ')
        paragraph=paragraph.replace("'", ' ')
        paragraph=paragraph.lower()
        

        words=paragraph.split()
        print(words)
        freq={}
        for i in words:
           if i not in banned:
                if i in freq:
                    freq[i]+=1
                else:
                    freq[i]=1
                
        return max(freq,key=freq.get)



        
        




