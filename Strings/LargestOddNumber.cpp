class Solution {
public:
    string largestOddNumber(string num) {
        int size = num.length();
        int i;
        for(i=size-1;i>=0;i--){
            if((num[i]-'0')%2){
                break;
            }

        }
        return num.substr(0,i+1);
    }
};
/*the basic way to solve is by just starting from the end and then just 
finding the number that isn't divisible by 2 and then returning the substring 
of the number to the extent that the number is broken 
