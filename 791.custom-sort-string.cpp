// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<int,int> m;
        string ans;
        for(auto x:s) m[x]++;
        for(auto x:order){
            while(m[x]>0){
                ans += x;
                m[x]--;
            }
        }
        for(auto x:m){
            int i=0;
            while(x.second > i){
                ans += x.first;
                i++;
            }
        }
        return ans;
    }
};
// @leet end
