class Solution {
public:
        
        bool f(vector<int> &fre)
        {
                for(int i=0;i<256;i++)
                {
                        if(fre[i]>1)
                                return false;
                }
                return true;
        }
    int lengthOfLongestSubstring(string s) {
        
            int l=0;
            int ans=0;
            int n=s.size();
            vector<int> fre(256,0);
            for(int i=0;i<s.size();i++)
            {
                    fre[s[i]]++;
                    while(!f(fre)&&l<i)
                    {
                            fre[s[l]]--;
                            l++;
                    }
                    if(f(fre))
                    {
                            ans=max(ans,i-l+1);
                    }
                    
            }
            if(f(fre))
                    {
                            ans=max(ans,n-l);
                    }
        return ans;
            
    }
};