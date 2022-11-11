class Solution {
    public int climbStairs(int n) {
        int first=1, second=2, sum=0;
        if(n==2){
            return second;
        }
        if(n==1){
            return first;
        }
    for(int i=2;i < n; i++){
        sum = first + second;
        first = second;
        second = sum;
    }
        return sum;
    }
}
//1 = 1
//2 = 2
//3 = 3
//4 = 5
//5 = 8 
//6 = 13
//7 = 21
//fibbonacci