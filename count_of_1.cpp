#include<iostream>
using namespace std;

int count_of_one(int arr[], int n){
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == 1){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans + 1;

}

int main(){
    int n, target;
    cin >> n;
    int arr[n];
    

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << count_of_one(arr, n);

    
}