#include <iostream>
#include <vector>

using namespace std;

int binarySeach(vector<int>arr,int tar){
    int st=0,end= arr.size()-1;
    int mid = st+ (end-st)/2;

    while(st<=end){
        if (tar<arr[mid]){
            end=mid-1;
        }
        else if(tar>arr[mid]){
            st=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}


int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    int tar=9;
    cout<<binarySeach(arr,tar);
}