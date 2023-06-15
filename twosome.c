/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    *returnSize = 2;
    int* res = (int *)malloc(sizeof(int) * 2);

    for (int i = 0; i < numsSize; i++){
        for (int j = i; j < numsSize; j++){

            if (i == j){
                continue;
            }

            if (nums[i] + nums[j] == target){
                res[0] = i;
                res[1] = j;
            }
        }
    }

    return res;
}