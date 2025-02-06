class Solution {
public:
    int romanToInt(string s) {
        //this is the best way to introduce the concept of unordered map
        //this is how to declare 
        unordered_map<char,int>roman ={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        //now we know that the current value is less than the next element then we will have to reduce the calculated value
        int size= s.length();
        int result = 0;

        for(int i = 0 ; i<size;i++){
            if(i+1<s.length() && roman[s[i]]<roman[s[i+1]]){
                result-=roman[s[i]];


            }
            else{
                result+=roman[s[i]];
            }
        }
        return result;

        
    }
};
