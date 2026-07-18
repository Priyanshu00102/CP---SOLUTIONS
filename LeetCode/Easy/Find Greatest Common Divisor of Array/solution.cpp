class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int small=nums[0]; int lar=INT_MIN;
        for(int i=0; i<n; i++){
          if(nums[i]>lar) lar=nums[i];
          if(nums[i]<small) small=nums[i];
        }
        return gcd(small,lar);
    }
};