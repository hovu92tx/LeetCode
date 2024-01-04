#include <string>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int index= 0;
        for(int i=0; i<s.length();i++){
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                for(int j=(s.length()-index);j>=i;j--){
                    index+=1;
                    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'){
                        char temp = s[i];
                        s[i]=s[j];
                        s[j]=temp;
                        break;
                    }
                }     
            }
        }
        return s;
    }
};