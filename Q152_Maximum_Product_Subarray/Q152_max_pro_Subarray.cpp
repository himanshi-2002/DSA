#include<iostream>
using namespace std;
int main(){
        int nums[4]={2,3,-2,4};
        int pro=nums[0];
        int n=4, prod=1;
        for(int i=0;i<n;i++){
            int prod=1;
            for(int j=i;j<n;j++){
                prod*=nums[j];
                if(prod>pro)
                {
                    pro=prod;
                }
            }
        }
        cout<<pro;
        
}