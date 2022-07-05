public class Cipher {

    Cipher() {};

    private int key=1;
    Cipher(int key) {
        this.key=key;
    };
    String encrypt(String s){     
        StringBuilder sb = new StringBuilder();
        for(int i = 0 ; i<s.length() ; i++){
            int c = s.charAt(i);
                if(s.charAt(i)!=' '){
                    c += key;             
                }
            sb.append((char)c);         
        }
        return sb.toString();
    }
    String decrypt(String s){    
        StringBuilder sb = new StringBuilder();
        for(int i = 0 ; i<s.length() ; i++){
            char c = s.charAt(i);
                if(s.charAt(i)!=' '){
                    c -= key;                
                }
            sb.append(c);
        }
        return sb.toString();
    }
    public boolean isValid(String text){
        return text != null && text.matches("^[a-z]+$");
    }


}

