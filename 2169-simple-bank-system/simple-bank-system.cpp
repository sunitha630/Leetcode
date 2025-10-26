class Bank {
public:
    vector<long long>vec;
    Bank(vector<long long>& balance) {
        vec=balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1>vec.size() || account2>vec.size()) return false;
        if(vec[account1-1]>=money){
            vec[account1-1]-=money;
            vec[account2-1]+=money;
            return true;
        }
        return false;
    }
    
    bool deposit(int account, long long money) {
        if(account>vec.size()) return false;
        vec[account-1]+=money;
        return true;

    }
    
    bool withdraw(int account, long long money) {
        if(account>vec.size()) return false;
        if(vec[account-1]>=money){
            vec[account-1]-=money;
            return true;
        }
        return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */