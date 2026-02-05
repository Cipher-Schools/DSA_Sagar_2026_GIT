#include<iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e){
    int i = s;
    int j = mid + 1;
    int k = 0;
    int temp[e - s + 1];

    while(i <= mid && j <= e){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid){
        temp[k++] = arr[i++];
    }

    while(j <= e){
        temp[k++] = arr[j++];
    }

    for(int p = 0; p < k; p++){
        arr[p + s] = temp[p];
    }
}

void merge_sort(int arr[], int n, int s, int e){
    if(s >= e){
        return;
    }

    int mid = s + (e - s) / 2;
    merge_sort(arr, n, s, mid);
    merge_sort(arr, n, mid + 1, e);
    merge(arr, s, mid, e);
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    merge_sort(arr, n, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << '\n';
}