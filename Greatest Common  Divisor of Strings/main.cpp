#include <string>
#include <numeric> //this lib contains gcd() function.
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        int a = str1.size();
        int b = str2.size();
        int gcd_length;
        //check whether str1 and str2 are in form of s=t+...+t+t+t.
        if(str1+str2!=str2+str1){
            return "";
        }
        //calculate gcd of str1 and str2
        gcd_length = gcd(a,b);
        //return t
        return str1.substr(0,gcd_length);      

    }
};

