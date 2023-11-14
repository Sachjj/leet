#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution3{
    public:
    int sol(vector<int> &dist, vector<int> &speed){
        vector<int> test;
        int ans;
        //test = dist - speed;
        //for(auto &i : test){
        //    cout << i << endl;
        //}
        return ans;
    }
};

class Solution2{
    public:
    int elim2(vector<int> &dist, vector<int> &speed){
        int ans = 0;
        int s = dist.size();
        vector<int> arr(s,0);
        for(int i = 0;i < s;i++){
            //int l = dist[i] - speed[i] > 0 ? dist[i] - speed[i] : 0;
            float l = dist[i] - speed[i] > 0 ? dist[i]/speed[i] : 0;
            if(l >= arr.size()){
                arr.resize(l+1);
            }
            arr[l]++;
            //=cout << l << std::endl;
            if(arr[l] > l){
                cout << "inloop" << arr[l] << endl;
                //ans = i < 2 ? i : i + 1;
                return(ans);
                break;
            }
            ans++;
            cout << l << " " << arr[l] << std::endl;
        }
        return s;
    }
};

class Solution{
public:
    int elim(std::vector<int>& dist, std::vector<int>& speed){
        int s = dist.size();
        int ans = s;
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
            cout << death[x.first].size() << endl;
            if(death[x.first].size() > 1){
                ans = x.first + 1;
            }
            //for (auto &l : death[x.first]){
            //    cout << l;
            //}
            //cout << endl;
        }
        cout << "next" << endl;
        return ans;
    }
};

int main(){
    Solution pee;
    Solution2 fart;
    Solution3 shit;
    vector<vector<int>> dist{{1,3,4}};
                            //,{1,1,2,3},{3,2,4},
                            //{4,2,8}};
    vector<vector<int>> speed{{1,1,1}};
                            //, {1,1,1,1}, {5,3,2},
                            //{2,1,4}};
    int n = dist.size();
    for(int i = 0;i < n;i++){
        //pee.elim(dist[i], speed[i]);
        cout << fart.elim2(dist[i],speed[i]) << endl;
        cout << "next" << endl;
        //shit.sol(dist[i],speed[i]);
    }
    return 0;
}