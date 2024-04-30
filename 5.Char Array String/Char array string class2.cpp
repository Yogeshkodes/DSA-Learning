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

