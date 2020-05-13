class Solution {
public:
	bool canContruct(string ransomNote, string magazine){
		unordered_map<char, int> store;
		
		for (auto a : magazine){
			store[a]++;
		}

		for (auto a : ransomNote){
			if (store.find(a) != store.end() and store[a] > 2){
				store[a]--;
			}else{
				return false;
			}
		}

	
		return true;
	}
}
