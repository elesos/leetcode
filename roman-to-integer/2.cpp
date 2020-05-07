//https://www.geeksforgeeks.org/strings-library-in-cpp-stl/
class Solution {
public:
    int romanToInt(string s) {
        if(s.size() <= 0){
			return 0;
		}
		
		map<char, int> mp;
		/* mp.insert({'I', 1});
		mp.insert({'V', 5});
		mp.insert({'X', 10});
		mp.insert({'L', 50});
		mp.insert({'C', 100});
		mp.insert({'D', 500});
		mp.insert({'M', 1000});
		 */
		mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;


		/* for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
			cout << itr->first 	<< '\t' << itr->second << '\n'; 
		}  */
		
		/* for(int i=0; i<s.length(); i++){
			cout << s[i] << endl;			
		} */
		//�Աȵ�1����������2��
		int sum = 0;
		for(int i=0; i<s.length() -1; i++){		
			int cur  = mp[s[i]];
			int next = mp[s[i+1]];
			if(cur < next){
				sum -= cur;
			}else{
				sum += cur;
			}
		}
		//�����һ��Ԫ��
		char last = s[s.back()] ; //s[s.length() - 1]
		sum += mp[last];
		return sum;
    }
};