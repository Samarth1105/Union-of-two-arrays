class Solution {
  public:
    int doUnion(vector<int> arr1, vector<int> arr2) {
        
        unordered_set<int> ans;
        
        for(int i=0;i<arr1.size();i++){
            ans.insert(arr1[i]);
        }
        
        for(int i=0;i<arr2.size();i++){
            ans.insert(arr2[i]);
        }
        
        return ans.size();
        
    }
};
