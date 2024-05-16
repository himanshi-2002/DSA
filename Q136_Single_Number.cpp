#include<iostream>
using namespace std;
int main(){
        int nums[5]={4,4,2,1,2};
        int n=5;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]==nums[j])
                  count++;
            }
            if(count==1)
                cout<<nums[i];
        }
        return 0;
}