class Solution {
public:
    int minPartitions(string n) {
        char v = n[0];
        for(int i=1; i <n.size();i++){
            if(n[i]>v)
                v=n[i];
        }
        return int(v-'0');
    }
};
