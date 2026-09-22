// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    bool checkGoodInteger(int n) {
        int st = 0;
        int dig = 0; 
        while(n!=0){
            int rem = n % 10;
            st += rem*rem;
            dig += rem;
            n /= 10;
        }
        return (st-dig)>=50;
    }
};
// @leet end
