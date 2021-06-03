class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long long int max_h(0), max_w(0), temp;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        for(int i=0;i<=horizontalCuts.size();i++){
            
            if(i==horizontalCuts.size())
                temp=h-horizontalCuts[i-1];
            else if(i==0)
                temp=horizontalCuts[0];
            else
                temp=horizontalCuts[i]-horizontalCuts[i-1];
            
            if(temp>max_h)
                max_h=temp;
            
        }
        for(int i=0;i<=verticalCuts.size();i++){
            if(i==verticalCuts.size())
                temp=w-verticalCuts[i-1];
            else if(i==0)
                temp=verticalCuts[0];
            else
                temp=verticalCuts[i]-verticalCuts[i-1];
            
            if(temp>max_w)
                max_w=temp;
            
        }
        
        return ((max_w%1000000007)*(max_h%1000000007))%1000000007;
    }
};
