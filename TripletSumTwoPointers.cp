#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool TripletSum(int *arr , int n ){
    sort(arr,arr+n);
    for(int i = 0 ; i < n ; i++){
        int l = i + 1;
        int r = n - 1;
        while(l < r){
            int sum = arr[i]+arr[l]+arr[r];
            if(sum == 0) return true;
            else if(sum > 0){
                r--;
            }
            else{
                l++;
            }
        }
    }return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    
    cout<<TripletSum(arr,n);
}