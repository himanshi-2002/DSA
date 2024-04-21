//https://leetcode.com/problems/binary-search/description/
#include<iostream>
using namespace std;
int binary_search(int arr[],int target){
    int n=6;
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(target==arr[mid])
            return mid;
        else if(arr[mid]<target)
            start=mid+1;
        else
            end=mid-1;
    }
    return -1;
}
int main(){
    int arr[6]={4,5,8,9,15,20};
    int target=9;
    cout<<binary_search(arr,target); 
}
