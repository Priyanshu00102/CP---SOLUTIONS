class Solution {
public:
    int cal(int n,int k) {
        // no of terms n*n+1/2
        int x = n / k;
        int sum=x*(x+1)/2;
        return k*sum;
    }
    int sumOfMultiples(int n) {
      int sum1=cal(n,3)+cal(n,5)+cal(n,7)-cal(n,15)-cal(n,35)-cal(n,21)+cal(n,105);
      return sum1;
    }
};