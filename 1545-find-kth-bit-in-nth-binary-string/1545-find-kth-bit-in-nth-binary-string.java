class Solution {

    public static String recur(int n){
        if (n == 1) return "0";

        String prev = recur(n - 1);

        StringBuilder invert = new StringBuilder();

for (int i = prev.length() - 1; i >= 0; i--) {
    invert.append(prev.charAt(i) == '0' ? '1' : '0');
}

return prev + "1" + invert.toString();

      

    }
    public char findKthBit(int n, int k) {

    String prev = recur(n);

    return prev.charAt(k-1);


        
    }
}