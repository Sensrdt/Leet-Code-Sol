class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
//         int n = paths.size();
//         int m = paths[0].size()+1;
//         cout << m<<endl;
//         unordered_map<string, int> map;
        
//         for (int i=0; i<m; i++){
//             map[paths[i][0]]++;
//         }
        
//         for (int i=0; i<m; i++){
//             cout << paths[i][1] <<endl;
//             if (map[paths[i][1]] == 0){
//                 return paths[i][1];
//             }
//         }
        
//         return " ";
        
        unordered_map<string, string> map;
        
        for (auto a : paths){
            cout << a[0] << " " << a[1] << endl;
            map[a[0]] = a[1];
        }
        cout << " --- " << endl;
        for (auto a : map){
            cout << a.first << " " << a.second << endl;
            if (map.find(a.second) == map.end()){
                return a.second;
            }
        }
        
        return " ";
        
    }
};