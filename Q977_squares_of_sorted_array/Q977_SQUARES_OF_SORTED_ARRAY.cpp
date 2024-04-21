#include<iostream>
using namespace std;
int main(){
    int arr[6]={10,15,17,18,20,25},n=6;
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]*arr[i];
    }
    sort(arr.begin(),arr.end());
    return arr;
}