/**
 * @param {number[]} nums
 * @return {number}
 */
const pivotIndex = (nums) => {
  const sum = nums.reduce((prev, curr) => prev + curr, 0);
  let leftSum = 0;

  for (let i = 0; i < nums.length; i++) {
    if (sum - nums[i] - leftSum === leftSum) {
      return i;
    }
    leftSum += nums[i];
  }

  return -1;
};
