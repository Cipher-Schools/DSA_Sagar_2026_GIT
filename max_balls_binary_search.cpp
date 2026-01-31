#include<iostream>

using namespace std;

class Solution {
public:
    long isPossible(vector<int>& nums, long maxOperations, int minValue){
        long ops = 0;
        for(int x : nums){
            ops += (x - 1) / minValue;
        }
        return ops <= maxOperations;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int s = 1;
        int e = 0;
        for(int x : nums){
            e = max(e, x);
        }
        int ans = -1;
        while(s <= e){
            int mid = s + (e - s) / 2;
            if(isPossible(nums, maxOperations, mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }

        return ans;
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxOp;
    cin >> maxOp;
    Solution obj;
    cout << obj.minimumSize(arr, maxOp);

}