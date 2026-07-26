class Solution {
public:
    int maximumProduct(vector<int>& nums) {
      sort(nums.rbegin(),nums.rend());
        int mul=1;
        for(int i=0;i<3;i++){
          mul*=nums[i];
        }
        int n = nums.size();
        int a = nums[0] * nums[n-1] * nums[n-2];
     return max(a,mul);   
    }
};