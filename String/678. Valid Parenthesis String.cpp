class Solution {
public:
    bool checkValidString(string s) {
        
        stack<char> forLeft;
        stack<char> forAsterics;
        
        for (int i=0; i<s.length(); i++){
            if (s[i] == '('){
                forLeft.push(i);
            }else if (s[i] == '*'){
                forAsterics.push(i);
            }else{
                if (!forLeft.empty()){
                    forLeft.pop();
                    cout << forLeft.top();
                }else if (!forAsterics.empty()){
                    forAsterics.pop();
                    cout << forAsterics.top();
                }else{
                    return false;
                }
            }
        }
        
        
//         while(!forLeft.empty() and !forAsterics.empty()){
            
//             cout<< "size "<<forLeft.size() << " " << forAsterics.size() << endl;
//             cout << forLeft.top() << " " << forAsterics.top()<<endl;
//             // if (forLeft.top() > forAsterics.top()){
//             //     return false;
//             // }
            
//             forLeft.pop();
//             forAsterics.pop();
//         }
        
        return (forLeft.empty());
    }
};