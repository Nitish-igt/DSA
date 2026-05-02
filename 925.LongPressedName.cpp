/*
Code
Testcase
Testcase
Test Result
925. Long Pressed Name
Solved
Easy
Topics
premium lock icon
Companies
Your friend is typing his name into a keyboard. Sometimes, when typing a character c, the key might get long pressed, and the character will be typed 1 or more times.

You examine the typed characters of the keyboard. Return True if it is possible that it was your friends name, with some characters (possibly none) being long pressed.

 

Example 1:

Input: name = "alex", typed = "aaleex"
Output: true
Explanation: 'a' and 'e' in 'alex' were long pressed.*/



class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int m= name.size(), n= typed.size();
        if(typed==name) return true;
        else if(m>n) return false;

        int l=0, r=0, x=0;
        while(l<m){
            while(r<m && name[l]== name[r])
            r++;

            if(x>=n) return false;

            int k=r-l;
            while(k-- && x<n){
                if(typed[x++]!=name[l]) 
                return false;
            }
            if(k>0) return false;

            while(typed[x]== name[l]) x++;

            l=r;
        }
        if(x<n)
        return false;
        return true;
    }
};