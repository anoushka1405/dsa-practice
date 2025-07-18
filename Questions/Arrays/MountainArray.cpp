// Find peak index in mountain array

#include <iostream>
#include <vector>
using namespace std;

int peak(vector <int>&arr){
    int n=arr.size();
    int st=1,end=n-2;
    while(st<=end){
        int mid = st+(end-st)/2;
        if (arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid-1]>arr[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
        
    }

  return -1;
    
}

int main(){
    vector <int> arr={1,3,5,8,4,2,0};
    cout<<peak(arr);
    return 0;
}