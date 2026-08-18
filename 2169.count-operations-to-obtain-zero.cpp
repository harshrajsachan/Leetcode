// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    int countOperations(int num1, int num2) {
        int op=0;
        if(num1 == 0 || num2 == 0) return 0;
        while(num1!=0 || num2!=0){
            if(num1<num2){
                num2 = num2-num1;
            }
            else if(num1>num2){
                num1 = num1-num2;
            }
            else return op+1;
            op++;
        }
        return op+1;
    }
};
// @leet end
