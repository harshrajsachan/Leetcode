// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    int reverse(int n){
        int rev=0;
        while(n!=0){
            int rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        return rev;
    }
    bool sumOfNumberAndReverse(int num) {
        if(num==0) return true;
        for(int i=0;i<num;i++){
            int sum = i + reverse(i);
            if(sum==num) return true;
        }
        return false;
    }
};
// @leet end
