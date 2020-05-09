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


/** JS参考代码
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
		if ( m.find(diff) == m.end() ) { //find如果没有找到，就会等于end()，  end表示最后一个元素的后面那个位置
			m[nums[i]] = i; //没有找到就加到Map
		}else{
			result.push_back( m[diff] ); //取索引
			result.push_back(i);
		}
	}
	return result;
}
//如果用c实现还要自已写hash表。。。以后还是继续搞C++吧



