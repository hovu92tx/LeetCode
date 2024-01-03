class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        avai_spot = 0
        #add 2 zero spots at the begin and the end of the array to calculate easier.
        flowerbed = [0]+flowerbed+[0]
        #scan the array and find the possible spot
        for i in range(1,len(flowerbed)-1):
            if flowerbed[i]!=1 and flowerbed[i-1]!=1 and flowerbed[i+1]!=1:
                flowerbed[i] = 1
                avai_spot+=1