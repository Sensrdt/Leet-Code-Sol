class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        bc(n, n, "", res);
        return res;
    }

    void bc(int l, int r, string path, vector<string> &res)
    {
        if (l < 0 || r < 0 || l > r)
            return;
        if (l == 0 && r == 0)
            res.push_back(path);
        bc(l - 1, r, path + '(', res);
        bc(l, r - 1, path + ")", res);
    }
};