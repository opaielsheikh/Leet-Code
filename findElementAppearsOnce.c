
// function using XOR to find the number that occurse once in a loob
int singleNumber(int* nums, int numsSize){
    int res = nums[0];
    for(int i=1 ; i < numsSize;i++)
      res = res ^ nums[i];
    
    return res;
}
