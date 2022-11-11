var isSubsequence = function(s, t) {
    for (let i = 0; i < s.length; i++) {
        for (let j = 0; j < t.length; j++) {
            if (s[i] == t[j]) {
                t.pop();
            }
             
        }
    }
};