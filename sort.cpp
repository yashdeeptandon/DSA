#include<iostream>

using namespace std;

void sort(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start<= end){
        if(arr[start]>arr[end]){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else{
            start++;
        }
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n]={0};

    for(int i = 0; i < n; i ++){
       cin>>arr[i];
    }

    sort(arr,n);
}