class Solution {
    public int maximum69Number (int num) {

        int original = num;
        int result = num;
        int IncreasingTens = 1;
        while(num>0) {
            if(num % 10 == 6){ 
                result = original + (IncreasingTens * 3);
            }
            IncreasingTens *= 10;
            num/=10;
        }
        return result;
        
        
        
    }
}