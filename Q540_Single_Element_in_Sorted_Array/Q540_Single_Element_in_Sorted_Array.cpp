//https://leetcode.com/problems/single-element-in-a-sorted-array/
#include<iostream>
using namespace std;
int main(){
        int nums[9]={1,1,2,3,3,4,4,5,5};
        int n=9,start=0,end=n-1,mid;
        if(n==1)
           return nums[0];
         
        if(nums[start]!=nums[1+start])
           return nums[start];
        else if(nums[n-1]!=nums[n-2])
           return nums[n-1];
        while(start<=end){
            mid=(start+end)/2;
            if((nums[mid]!=nums[mid-1])&&(nums[mid]!=nums[mid+1]))
                 return nums[mid];
            else if(((mid%2==1)&&(nums[mid]==nums[mid-1]))||((mid%2==0)&&(nums[mid]==nums[mid+1])))
                start=mid+1;
            else
                end=mid-1;
        }
        return -1;
}