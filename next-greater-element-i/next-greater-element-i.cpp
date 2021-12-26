class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            map<int,int> mp;
            for(int i=0;i<nums2.size();i++)
            {
                mp[nums2[i]]=i;
            }
        stack<int> s;
            vector<int> ans(nums2.size(),-1);
            for(int i=nums2.size()-1;i>=0;i--)
            {
                while(s.size())
                {
                        if(s.top()<=nums2[i])
                        {
                                s.pop();
                        }
                        else
                                break;
                                
                }
                    if(s.size())
                            ans[i]=s.top();
                    s.push(nums2[i]);
            
            }
            for(int i=0;i<ans.size();i++)
            {
                    cout<<ans[i]<<" ";
            }
            vector<int> fans(nums1.size());
            for(int i=0;i<nums1.size();i++)
            {
                fans[i]=ans[mp[nums1[i]]];
            }
            return fans;
            
    }
};