//store nums[i] into map, and find target - nums[i]
/* vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> m;
	vector<int> result;
	for (int i=0; i<nums.size(); i++) {		
		if ( m.find(target - nums[i]) == m.end() ) {
			m[nums[i]] = i;
		}else{
			result.push_back(m[target - nums[i]]);
			result.push_back(i);
		}
	}
	return result;
}
 */


/** JS�ο�����
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
/* const twoSum = function (nums, target) {
    const map = new Map();
    for (let i = 0; i < nums.length; i++) {
        const diff = target - nums[i];
        if (map.has(diff)) {
            return [map.get(diff), i];
        }
        map.set(nums[i], i);
    }
}
 */

 //nums = [2, 7, 11, 15], target = 9
vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> m;
	vector<int> result;
	for (int i=0; i<nums.size(); i++) {
		int diff =  target - nums[i];
		if ( m.find(diff) == m.end() ) { //find���û���ҵ����ͻ����end()��  end��ʾ���һ��Ԫ�صĺ����Ǹ�λ��
			m[nums[i]] = i; //û���ҵ��ͼӵ�Map
		}else{
			result.push_back( m[diff] ); //ȡ����
			result.push_back(i);
		}
	}
	return result;
}
//�����cʵ�ֻ�Ҫ����дhash�������Ժ��Ǽ�����C++��



