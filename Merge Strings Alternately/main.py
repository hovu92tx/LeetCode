class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        index=0
        newstr = []
        while index<len(word1) or index<len(word2):
            if index<len(word1):
                newstr.append(word1[index])
            if index<len(word2):
                newstr.append(word2[index])
            index+=1
        return ''.join(newstr)