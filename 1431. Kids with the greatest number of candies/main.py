class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        #find the gratest value
        max_value=0
        results=[]
        for candy in candies:
            if(candy>max_value):
                max_value=candy
        
        #determine whether kids have the greatest number of canides or not
        for candy in candies:
            if(candy+extraCandies>=max_value):
               results.append(True)
            else:
                results.append(False)
        return results
