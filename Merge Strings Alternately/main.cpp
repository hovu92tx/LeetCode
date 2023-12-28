#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int index=0;
        string str= "";
        while(index<word1.size()||index<word2.size()){
            if(index<word1.size()){
                str= str+word1[index];
            }
            if(index<word2.size()){
                str= str+word2[index];
            }
            index++;
        }
        return str;
    }
};