from typing import List

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        length = len(nums)
        answer = []

        # Calculate left products
        left_product = 1
        for i in range(length):
            answer.append(left_product)
            left_product *= nums[i]

        # Calculate right products and the final result
        right_product = 1
        for i in range(length - 1, -1, -1):
            answer[i] *= right_product
            right_product *= nums[i]

        return answer
