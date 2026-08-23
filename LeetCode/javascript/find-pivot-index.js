/**
 * @param {number[]} nums
 * @return {number}
 */
const pivotIndex = (nums) => {
  let sumArr = new Array();

  for (let i = 0; i < nums.length; i++) {
    if (i == 0) {
      sumArr[i] = nums[i];
      continue;
    }
    sumArr[i] = nums[i] + sumArr[i - 1];
  }

  const total = sumArr[sumArr.length - 1];

  for (let i = 0; i < sumArr.length; i++) {
    const currSum = sumArr[i];

    if (total - currSum === currSum - nums[i]) {
      return i;
    }
  }

  return -1;
};
