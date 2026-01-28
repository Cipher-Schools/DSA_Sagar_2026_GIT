#include<iostream>
using namespace std;

// 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0
int first_position(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == target){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
}


int last_position(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == target){
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
}


int main(){
    int n, target;
    cin >> n;
    int arr[n];
    cin >> target;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << first_position(arr, n, target);

    
}