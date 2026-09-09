// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int n=first(num);
        int k=second(n);
        return k==num;
    }

    int first(int n){
        int rev=0;
        while(n!=0){
            int rem = n % 10;
            rev = rem + rev*10;
            n /= 10;
        }
        return rev;
    }

    int second(int n){
        int rev=0;
        while(n!=0){
            int rem = n % 10;
            rev = rem + rev*10;
            n /= 10;
        }
        return rev;
    }
};
// @leet end
