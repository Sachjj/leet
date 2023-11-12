#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
public:
    int elim(std::vector<int>& dist, std::vector<int>& speed){
        int s = dist.size();
        unordered_map<int,vector<int>> death;
        //vector<vector<int>> death(s, vector<int>(s, 0));
        for(int i = 0;i < s;i++){
            int l = dist[i] - speed[i] > 0 ? dist[i] - speed[i] : 0;
            //if(l >= death.size()){
            //    death.resize(l);
            //}
            death[l].insert(death[l].begin(),i);
            cout << l << std::endl;
        }
        cout << std::endl;
        for (auto &x : death){
            cout << "key: "<< x.first << endl;
            for (auto &l : death[x.first]){
                cout << l;
            }
            cout << endl;
        }
        cout << "next" << endl;
        int ans;
        return ans;
    }
};

int main(){
    Solution pee;
    vector<vector<int>> dist{{1,3,4},{1,3,2,2}};
    vector<vector<int>> speed{{1,1,1}, {1,1,1,1}};
    int n = dist.size();
    for(int i = 0;i < n;i++){
        pee.elim(dist[i], speed[i]);
    }
    return 0;
}