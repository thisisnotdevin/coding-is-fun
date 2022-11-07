class Solution {
    public boolean isValid(String s) {
        Stack<Character> STACK = new Stack<Character>();
        
       
        if(s.length() % 2 != 0){
            return false;
        }
        
        for (int i =0; i < s.length(); i++){
            if(s.charAt(i) == '('){
                STACK.push(')');
            }
            else if(s.charAt(i) == '['){
                STACK.push(']');
            }
            else if(s.charAt(i) == '{'){
                STACK.push('}');
            }
            else if(STACK.isEmpty() || s.charAt(i) != STACK.pop()){
                return false;
            }
            
        }
        return STACK.isEmpty();
    }
}