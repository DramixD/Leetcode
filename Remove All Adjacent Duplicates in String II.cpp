class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        int tempChar=s[0];
        bool changes=false;
        int start=0;
        for(int i=1;i<s.size();i++){
            if(tempChar == s[i]){
                continue;
            }else{
                if(i-start>=k){
                    changes=true;
                    s.erase(start,i-start);
                    i=start-1;
                    continue;
                }else{
                    start=i;
                    tempChar=s[i];
                }
            }
        }
        if(changes)
            s = removeDuplicates(s,k);
        
        return s;
        
        
    }
};
