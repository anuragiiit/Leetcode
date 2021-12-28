class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int > > nxtGr_ele_right;
        stack<pair<int,int>  > nxtGr_ele_left;
            
            vector<pair<int,int> >  nxt_Gre_ele_rgt(heights.size(),{-1,heights.size()});
            vector<pair<int,int> >  nxt_Gre_ele_lft(heights.size(),{-1,-1});
            
            
            // next greater element to the right for every index
            for(int i=heights.size()-1;i>=0;i--)
            {
                while(nxtGr_ele_right.size())
                {
                        if(nxtGr_ele_right.top().first>=heights[i])
                        {
                                nxtGr_ele_right.pop();
                        }
                        else
                        {
                                nxt_Gre_ele_rgt[i]=nxtGr_ele_right.top();
                                break;
                        }
                }
                    
                    nxtGr_ele_right.push({heights[i],i});
            }
            
            
            // next greater element to the left for every index
            
                 for(int i=0;i<heights.size();i++)
            {
                while(nxtGr_ele_left.size())
                {
                        if(nxtGr_ele_left.top().first>=heights[i])
                        {
                                nxtGr_ele_left.pop();
                        }
                        else
                        {
                                nxt_Gre_ele_lft[i]=nxtGr_ele_left.top();
                                break;
                        }
                }
                    
                    nxtGr_ele_left.push({heights[i],i});
            }
            
            
            int ans=0;
            for(int i=0;i<heights.size();i++)
            {
                    
                    int  lf_ind=nxt_Gre_ele_lft[i].second;
                    int  rt_ind=nxt_Gre_ele_rgt[i].second;
                    cout<<lf_ind<<" "<<rt_ind<<endl;
                    int k=1;
                  
                        k+=(i-lf_ind-1);
                   
                   
                        k+=(rt_ind-i-1);
                   
 
                    
                    
                    ans=max(ans,heights[i]*(k));
            }
            return ans;
    }
};