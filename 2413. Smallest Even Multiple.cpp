class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : n * 2;

     // OR 

    if(n % 2 == 0) return n;
    return 2*n
      }
};
