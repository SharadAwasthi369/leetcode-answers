
class Solution {
public:
    double myPow(double x, int n) {
        double value=x;
            if(n==0 || x==1 || x==-1)
                return (n%2==0 || x>0)?1:-1;
            if(n==INT_MIN || n==INT_MAX)
                return 0;
            int m = (n>0)?n:-n;
            for(int i=0;i<m-1;i++)
                {
                    value=x*value;
                }
            if(n>0)
            {
                return (n%2==0 || x>0)?abs(value):-abs(value);
            }
            else
            {
                return (n%2==0 || x>0)?abs(1/value):-abs(1/value);
            }    
            
    }
};
