#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    
    vector<int> avoidFlood(vector<int>& rains) {
        unordered_map<int, int> map;
        set<int> zeros;
        vector<int> ans(rains.size());
        for(int i = 0; i < rains.size(); i++){
            if(rains[i] == 0){
                zeros.insert(i);
            }
            if(map.count(rains[i])){
                auto it = zeros.upper_bound(map[rains[i]]);
                if(it != zeros.end()){
                    zeros.erase(it);
                    ans[*it] = rains[i];
                }
                else{
                    return {};
                }
            }
            else{
                ans[i] = -1;
            }

            map[rains[i]] = i;
        }
        return ans;
    }
};