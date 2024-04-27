#include<iostream>
using namespace std;
int main(){
    int A[5]={1,3,3,4,5};
    int n=5,sum=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(A[i]==A[j])
                count++;
        }
        if(count==1)
          sum+=A[i];
    }
    cout<<sum;
}