class Solution {
public:
    string defangIPaddr(string address) {
        
        int n = address.size();
        string newS = "";
        for (int i=0; i<n; i++){
            if (address[i] != '.'){
                newS += address[i];
            }else if (address[i] == '.'){
                newS += "[.]";
            }
        }
        
        return newS;
    }
};