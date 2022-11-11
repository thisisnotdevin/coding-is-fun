class Solution {
    public String removeDuplicates(String s) {
        Stack<Character> stack = new Stack<Character>();
        char[] ch = s.toCharArray();
        
//         for(char e: ch){
            
//             if(stack.isEmpty()){
//                 stack.push(e);
//             }
            
//             if(e == stack.peek()){
//                 stack.pop();
//             }
//             if(e != stack.peek()){
//                 stack.push(e);
//             }
   
//         }
        for(int i=0; i < s.length(); i++){
            if(stack.isEmpty()){
                stack.push(ch[i]);
            }
            else if(ch[i] == stack.peek()){
                stack.pop();           
            }
            else if(ch[i] != stack.peek()){
                 stack.push(ch[i]);
             }
        }
        return stack.toString().replace("[", "").replace("]", "").replace(", ", "");
    }
}