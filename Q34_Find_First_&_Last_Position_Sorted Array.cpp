#include<iostream>
using namespace std;
int main(){
        int nums[6]={5,7,7,8,8,10};
        int n=6,start=0,end=n-1,mid,firstocc=-1,lastocc=-1,target=8;
        vector<int> ans;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target)
            {
                firstocc=mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
            {   //move right
                start=mid+1;
            }
            else if(nums[mid]>target)
            {   //move left
                end=mid-1;
            }
        }
        start=0,end=n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target)
            {
                lastocc=mid;
                start=mid+1;
            }
            else if(nums[mid]<target)
            {   //move right
                start=mid+1;
            }
            else if(nums[mid]>target)
            {   //move left
                end=mid-1;
            }
        }
        ans.push_back(firstocc); 
        ans.push_back(lastocc);
        return ans;
}