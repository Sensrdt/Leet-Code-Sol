
class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
	vector<int> dimen = binaryMatrix.dimensions();		
	int ans = -1;
	int x = dimen[0]-1;
	int y = dimen[1]-1;

	while(x >= 0 && y >= 0)
	{
		if (binaryMatrix.get(x, y))
		{
			ans = y;
			y -= 1;
		}else{
			 x -= 1;
		}
	}

	return ans;	
   }
};
