class Solution {
public:
    int mySqrt(int x) {
        if(x==1 || x==2 || x==3)
        {
            return 1;
        }
        if(x==4 || x==5)
        {
            return 2;
        }
        for(long i=0;i<x/2;i++)
        {
            if(x==i*i)
            {
                return i;
            }
            if(x>i*i && x<(i+1)*(i+1))
            {
                return i;
            }
        }
        return 0;
    }
};