class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
       stack<pair<char,int>>st;
       vector<int>res;
       int one=0,zero=0;
       for(int i=0;i<seq.size();i++){
        if(st.empty() && seq[i]=='('){
            if(zero <= one){
            res.push_back(0);
            st.push(make_pair('(',i));
            zero++;
            }
            else{
                res.push_back(1);
                st.push(make_pair('(',i));
                one++;
             } 
        }

        else{
            if(st.top().first=='(' && seq[i]=='('){
                if(zero <= one){
                res.push_back(0);
                st.push(make_pair('(',i));
                zero++;
            }
            else{
                res.push_back(1);
                st.push(make_pair('(',i));
                one++;
             } 
            }
            else if(st.top().first=='(' && seq[i]==')'){
                res.push_back(res[st.top().second]);
                st.pop();
                if(res[i]==1){
                    one--;
                }
                else{
                    zero--;
                }
            }
            }
    }

            return res; 
        }
       
};