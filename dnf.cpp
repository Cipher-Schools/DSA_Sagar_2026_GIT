#include<iostream>
using namespace std;

void dnf_sort(vector<int> &arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for(int x : arr){
        cout << x << " ";
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    dnf_sort(arr);
}