class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
                
        vector<vector<int>> res;
        int Aptr=0,Bptr=0;
        int sizeA = A.size();
        int sizeB = B.size();
        vector<int> temp(2);

        while(Aptr<sizeA && Bptr<sizeB)
        {
            if(B[Bptr][0]<=A[Aptr][1] && A[Aptr][0]<=B[Bptr][1])
            {
                temp[0] = max(A[Aptr][0],B[Bptr][0]);
                temp[1] = min(A[Aptr][1],B[Bptr][1]);
                res.push_back(temp);
            }

            if(A[Aptr][1]>B[Bptr][1])
                Bptr+=1;
            else
                Aptr+=1;
        }
        return res;
    }
};