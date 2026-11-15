class Solution {
public:
    int maxProfit(vector<int>& vec) {
        int n = vec.size();
        vector<int> temp;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                temp.push_back(vec[j] - vec[i]);
            }
        }
        int maxm = 0;
        for(int i = 0; i < temp.size(); i++){
            if(temp[i] > maxm){
                maxm = temp[i];
            }
        } 
        return maxm;
    }
};
