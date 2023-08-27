class Solution {

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
    if(ind == arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
         return; //return if target is not satisfied like backtracking
    }
    //not-take
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findCombination(ind, target-arr[ind], arr, ans, ds);
        ds.pop_back();
    }
    //take
    findCombination(ind+1,target, arr, ans, ds);
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        findCombination(0, target, candidates, ans, ds);
        return ans;
    }

};