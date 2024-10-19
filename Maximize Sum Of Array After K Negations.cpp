#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int largestSumAfterKNegations(vector<int>& nums, int k) {
      priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        while(k--){
            int top=pq.top();
            if(top==0) break;
            pq.pop();
            sum-=top;
            pq.push(-1*top);
            sum+=(-top);
        }
        return sum;
    }
int main(){
    vector<int> nums{4,2,3};
    int k=1;
    int ans=largestSumAfterKNegations(nums,k);
}

