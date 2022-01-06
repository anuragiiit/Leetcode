class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
            
            
            
            int l=0;
            int r=nums.size()-1;
            if(r==0)
                    return nums[0];
            if(nums[l]!=nums[l+1])
                    return nums[0];
            
            if(nums[r]!=nums[r-1])
                    return nums[r];
            while(l<=r)
            {
                    int mid=(l+r)/2;
                    if(nums[mid]==nums[mid+1])
                    {
                            if(mid%2==0)
                            {
                                l=mid+1;
                            }
                            else
                            {
                                    r=mid-1;
                            }
                    }
                    else if(nums[mid]==nums[mid-1])
                    {
                        if((mid-1)%2==0)
                        {
                                l=mid+1;
                        }
                            else
                            {
                                    r=mid-1;
                            }
                    }
                    else
                    {
                            return nums[mid];
                    }
                            
            }
        return 0;
    }
};