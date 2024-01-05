class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        list_Words = s.split(' ')
        reversed_Str=""
        for x in reversed(list_Words):
            reversed_Str= reversed_Str.strip()+" "+x
        return reversed_Str.strip()