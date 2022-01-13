//https://leetcode.com/problems/greatest-common-divisor-of-strings/submissions/
class Solution {
public:
    int gcd(int l1,int l2)
    {
       if(l1<l2)
       {
           swap(l1,l2);
       }
        for(int i=l2;i>=1;i--)
        {
            if(l1%i==0 && l2%i==0)
            {
                return i;
            }
        }
        return 1;
    }
    
    string gcdOfStrings(string str1, string str2) 
    {
        string ans="";
       if(str1+ str2 !=str2+str1)
       {
           return "";
       }
        else 
        {
            int len=gcd(str1.length(),str2.length());
            ans=str1.substr(0,len);
            
        }
        return ans;
       
        
    }
};
