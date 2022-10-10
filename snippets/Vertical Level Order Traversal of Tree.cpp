/*
Credits : Divya Chopra
Hello everyone ,
Approach :
Maintain a map of int,vector<pair<int,int> which will store the vertical order of the node and the vector element which is a pair will store horizontal level and root->val repectively. (This mapping will help us sort the vector later as in a same horizontal level the answer expects a sorted order).
Create the map using recursive calls for left and right subtrees.
Note: Whenever we call for left subtree decrease the vertical level by 1 (distance-1) while for right subtree increase the vertical level by 1 i.e. (distance+1). Also increase horizontal level by 1 for both left and right subtree.
When the map is ready sort the vectors correponding to each vertical level in the map and the make a vector of only the values of the nodes (As the original vector was a vector of pair<int,int> and we just needs the values i.e just a vector of int) and push it in the answer vector.
Here's my code :
*/
class Solution {
public:
    map<int,vector<pair<int,int>>>mp;
    void solve(TreeNode* root,int vertical_dist,int horizontal_level){
        if(!root)return;
        mp[dist].push_back({horizonta_level,root->val});
        solve(root->left,vertical_dist-1,horizontal_level+1);

        solve(root->right,vertical_dist+1,horizontal_level+1);

    }
vector<vector<int>> verticalTraversal(TreeNode* root) {
   solve(root,0,0);
     vector<vector<int>>ans;
    for(auto i:mp){
        sort(i.second.begin(),i.second.end());       
        vector<int>temp;
        for(auto k : i.second){
            temp.push_back(k.second);
        }
        ans.push_back(temp);
    }
    return ans;
    }
};
