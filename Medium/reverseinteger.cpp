/*7. Reverse Integer
Solved
Medium
Topics
premium lock icon
Companies
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1*/

#include <string>
#include <climits>
using namespace std;    

class Solution {
public:
    int reverse(int x) {
        int s=0;
        while(x!=0)
        {
            int d = x%10;
            x = x/10;

            if(s>INT_MAX/10 || s==INT_MAX/10 && d>7 ) return 0;
            if(s<INT_MIN/10 || s==INT_MIN/10 && d<-8) return 0;
            s = s*10+d;
        }
     return s;
    }
};