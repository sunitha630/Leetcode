class Solution {
public:
    int maximumSwap(int num) {
        string num_array="";
        while(num){
            num_array += to_string(num % 10);
            num /= 10;
        }
        reverse(num_array.begin(),num_array.end());
        bool flag = false;
        char max;
        int index;
        for(int i = 0 ; i < num_array.size(); i++ ){
            max=num_array[i];
           for(int j = num_array.size() ; j >= i+1 ; j--){
             if(max<num_array[j]){
                cout<<max<<" ";
                max = num_array[j];
                flag=true;
                index=j;
               
             }
           }
           if(flag){
            swap(num_array[i],num_array[index]);
            break;
           }
        }
        return stoi(num_array);
    }
};