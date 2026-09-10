// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int ans = r-l+1;
        int start= ceil(sqrt(l));
        int end= floor(sqrt(r));
        for (int i = start; i <= end; i++) {
            if(check(i)) ans--;
        }
        return ans;
    }
    bool check(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
           if(n%i==0) return false;
        }
        return true;
    }
};
// @leet end
