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