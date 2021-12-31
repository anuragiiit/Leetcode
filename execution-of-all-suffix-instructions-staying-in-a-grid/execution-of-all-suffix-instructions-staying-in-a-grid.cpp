class Solution {
public:
    
        
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
     vector<int> ans(s.size(),0);
            int ind=0;
       
           
            for(int i=0;i<s.size();i++)
            {
                  int x=startPos[0];
            int y=startPos[1];
                    int c=0;
                for(int j=i;j<s.size();j++)
                {
                        if(s[j]=='R')
                        {
                                y++;
                        }
                        else if(s[j]=='L')
                        {
                                y--;
                        }
                        else if(s[j]=='U')
                        {
                                x--;
                        }
                        else if(s[j]=='D')
                        {
                                x++;
                        }
                        if(x<0||x>=n||y<0||y>=n)
                                break;
                        c++;
                        
                        
                }
                    ans[i]=c;
            }
          
            
            return ans;
    }
};