#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
public:
    int elim(std::vector<int>& dist, std::vector<int>& speed){
        cout << "ass" << std::endl;
        int s = dist.size();
        vector<vector<int>> death(s, vector<int>(s, 0));
        for(int i = 0;i < s;i++){
            int l = dist[i] - speed[i] > 0 ? dist[i] - speed[i] : 0;
            death[l].insert(death[l].begin(),i);
            cout << l << std::endl;
        }
        //for(int i = 0;i < death.size();i++){
        //    for(int j = 0;j < death[i].size();j++){
        //        cout << death[i][j] << std::endl;
        //    }
        //}
        int ans;
        return ans;
    }
};

int main(){
    Solution pee;
    vector<vector<int>> dist{{1,3,4},{1,1,2,3}};
    vector<vector<int>> speed{{2,1,1}, {1,1,1,1}};
    int n = dist.size();
    for(int i = 0;i < n;i++){
        pee.elim(dist[i], speed[i]);
    }
    return 0;
}