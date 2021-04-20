/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
void f(Node* r, vector<int>& v){
    v.push_back(r->val);
    for(int i=0; i<r->children.size();i++){
       f(r->children[i],v);
    }
        

    
}
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> v;
        if(root==nullptr)
            return v;
        
        f(root,v);
        return v;
        
    }
};
