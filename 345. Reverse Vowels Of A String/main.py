class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = {'a','e','i','o','u','A','E','I','O','U'}
        s_list = list(s)
        i, j = 0, len(s) - 1

        while i < j:
            if s_list[i] in vowels:
                while s_list[j] not in vowels and i < j:
                    j -= 1
                s_list[i], s_list[j] = s_list[j], s_list[i]
                j -= 1
            i += 1
        return ''.join(s_list)