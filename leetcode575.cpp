class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> m;

        int n = candyType.size();

        for(int i = 0; i < n; i++){
            if(m.find(candyType[i]) == m.end()) m[candyType[i]] = 1;
            else m[candyType[i]]++;
        } 

        



    }
};