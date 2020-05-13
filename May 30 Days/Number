class Solution {
public:
    int findComplement(int nums) {
		if (nums == 0)
			return 1;
		int s = 0;
	
		while(s < nums){
			s = (s << 1 ) | 1;
		}
		return s - nums;
	}
}
