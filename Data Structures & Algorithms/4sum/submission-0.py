class Solution:
 def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
    n = len(nums)
    nums.sort()
    res = set()

    for a in range(n):
        for b in range(a + 1, n):
            for c in range (b + 1, n):
                for d in range(c + 1, n):
                    if nums[a] + nums[b] + nums[c] + nums[d] == target:
                        res.add((nums[a], nums[b], nums[c], nums[d]))
    return list (res)