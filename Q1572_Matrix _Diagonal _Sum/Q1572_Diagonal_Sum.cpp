#include<iostream>
using namespace std;
int main(){
    int A[100][100],n;
    cout<<"Enter No of Rows= "; cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i][i]  + A[i][n-1-i];
    }
    if(n%2!=0){
        sum-= A[n/2][n/2];
    }
    cout<<sum;

}
