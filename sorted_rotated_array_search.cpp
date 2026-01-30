#include<iostream>
using namespace std;
int search(int arr[], int target, int n) {
        int si = 0;
        int ei = n - 1;

        while(si <= ei){

            int mid = si + (ei - si) / 2;

            if(arr[mid] == target){
                return mid;
            }
            // left subarray is sorted 
            if(arr[si] < arr[mid]){

                if(target >= arr[si] && target < arr[mid]){
                    ei = mid - 1;
                }
                else{
                    si = mid + 1;
                }
            }
            else{
                // right sub aray is sorted
                if(target > arr[mid] && target <= arr[ei]){
                    si = mid + 1;
                }
                else{
                    ei = mid - 1;
                }
            }
            
        }

        return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << search(arr, 3, n);
}