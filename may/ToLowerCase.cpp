class Solution {
public:
    string toLowerCase(string s) {
        int k = int('A'-'a');
        for(int i=0;i<s.size();i++)
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]-k;
        return s;
    }
};
