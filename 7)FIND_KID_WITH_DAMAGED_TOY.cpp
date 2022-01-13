//https://www.geeksforgeeks.org/distributing-m-items-circle-size-n-starting-k-th-position/
class Solution {
  public:
    int findPosition(int N , int M , int K) {
        int i=K;
        
        
        
            while(M)
            {
                
                if(M!=0 && i>N)
                {
                    i=1;
                }
                M--;
                i++;
                
            }
            return i-1;
        
    }
};
