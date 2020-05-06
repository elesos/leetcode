/**
 * Note: The returned array must be malloced, assume caller calls free().
 * @param returnSize: the size of returned array
 * @return returnSize =2 on success, NULL or returnSize = 0 on failure.
 *
 * @note nothing 
 */
 
//自已第一版实现的垃圾代码
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 0;
    int arr_len = 2;
    int *res_arr = (int*)malloc(arr_len*sizeof(int));
    if(!res_arr){
        printf("malloc_failed.\n");
        return NULL;   
    }
    int i, j;
    int k = 0;
    for(i=0; i<numsSize; i++){
        for(j=i+1; j<numsSize; j++){
            if(nums[i] + nums[j] == target){
                res_arr[k++] = i;
                res_arr[k++] = j;  
                *returnSize = 2; 
                break;      
            }
        }       
    }

    return res_arr;
    
}



