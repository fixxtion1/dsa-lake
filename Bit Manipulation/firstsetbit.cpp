//Back-end complete function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        //doing AND operation of n and -n. n and -n will have similar
        //bits only till the first set bit starting from the right  
        //and differnt bits after the first set bit.Then we take 
        //log2 of the result to find the position.
        
        //we add 1 to obtained value so that count starts from 1 instead of 0.
        return log2(n&-n)+1; 
        
        
        
    }
};