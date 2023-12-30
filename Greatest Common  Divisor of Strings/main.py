import math
#import fractions if python's version is different than 3.xx
class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        #check if str1 and str2 are in the same form of s= t+...+t+t+t
        if(str1+str2!=str2+str1):
            return ""
        #find the gcd and return the pattern of the string
        return str1[:math.gcd(len(str1),len(str2))]
        #return str1[:fractions.gcd(len(str1),len(str2))]