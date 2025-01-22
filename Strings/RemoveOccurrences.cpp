class Solution {
public:
    string removeOccurrences(string s, string part) {
         int finder = s.find(part);
        while(s.length()>0 && finder<s.length()){
            s.erase(finder,part.length());
            finder = s.find(part);


        }
        return s;
        
       

        
    }
};
