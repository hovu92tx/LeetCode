#include <string>
#include <vector>
#include <algorithm> //reverse()
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string word;
        string reversed_word;
        vector<string> list_Words;
        for(int i=0; i<s.length();i++){
            if(s[i]!=' '){
                word+=s[i];
            }else{
                //add word to the list every time s[i]=' '. NOTE: It does not add
                // the last word if the last char is not ' '.
                if(word!=""){
                    list_Words.push_back(word);
                    word="";
                }                              
            }
        }
        // add the last word if it is not empty
        if(!word.empty()) {
            list_Words.push_back(word);
        }
        reverse(list_Words.begin(), list_Words.end());
        for(int x=0; x<list_Words.size();x++){
            reversed_word += list_Words[x]+" ";
        }
        reversed_word.pop_back();
        return reversed_word;
    }
};