#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int target){
    int l = 0;
    int r = n - 1;
    // 1 2 3 4 7 9 13
    while(l <= r){
        int mid = l + (r - l) / 2;
        // l + r / 2

        if(arr[mid] == target){
            return mid;
        }
        
        if(arr[mid] > target){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    return -1;
}