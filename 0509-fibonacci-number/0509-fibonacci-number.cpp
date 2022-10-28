class Solution {
private:
public:
    int fib(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        vector<int> fib_list;    
        fib_list.resize(n+1);
        fib_list[0] = 0;
        fib_list[1] = 1;
        for(int i = 2; i <= n; i++){
            fib_list[i] = fib_list[i-1]+fib_list[i-2];
        }
        return fib_list[n];
    }
};