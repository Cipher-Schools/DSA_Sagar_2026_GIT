#include<iostream>
using namespace std;

int peakElement(int arr[], int n){
        int s = 1;
        int e = n - 1;

        while(s <= e){
            int mid = s + (e - s) / 2;

            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
                return arr[mid];
            }

            if(arr[mid] < arr[mid + 1]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
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
    cout << peakElement(arr, n);

}