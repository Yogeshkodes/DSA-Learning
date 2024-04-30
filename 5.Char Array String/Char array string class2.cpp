  //* 1047. Remove All Adjacent Duplicates In String



  class Solution {
public:
    string removeDuplicates(string s) {
        int index=0;
        string newstr ="";

        while(index<s.length()){
            if(newstr.length()>0 && newstr[newstr.length()-1] == s[index]){
                newstr.pop_back();
            }else{
                newstr.push_back(s[index]);
            }

            index++;
    }return newstr;
        }
};

//* 1910. Remove All Occurrences of a Substring

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)!= string::npos){
            s.erase(s.find(part) ,part.length());
        }
        return s;
    }
};





//* 680. Valid Palindrome II



class Solution {
public:
    bool  checkpalindrome(string s , int i , int j){
        while(i<=j){
            if(s[i] != s[j]){
                return false;
            }else{
                i++;
                j--;
            }
        }return true;
    }

    bool validPalindrome(string s) {
        int i=0;
        int j = s.length()-1;
        while(i<j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else{
                bool ans1 = checkpalindrome(s,i+1,j);
                bool ans2 = checkpalindrome(s,i,j-1);

                return ans1|| ans2;
            }
        }return true;
    }
};