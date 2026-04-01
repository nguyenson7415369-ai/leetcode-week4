#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
		int left=0,right=n-1;
		while(left<=right){
			int mid=left+(right-left)/2;
			if(nums[mid]==target) return mid;
			else if(nums[mid]>target){
				right=mid-1;
			}
			else if(nums[mid]<target){
				left=mid+1;
			}
		}
		return -1;
		}
};
int main(){
	Solution a;
	vector<int> nums ={-1,0,3,5,9,12,13};
	cout<<a.search(nums,9);
}
