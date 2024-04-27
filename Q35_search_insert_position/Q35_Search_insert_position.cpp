#include<iostream>
using namespace std;
int main(){
    int A[5]={1,3,5,6,8};
    int target=5,n=3;
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(A[mid]==target)
            return mid;
        else if(A[mid]<target)
            start=mid+1;
        else
            end=mid-1;
    }
    return (end+1);
}