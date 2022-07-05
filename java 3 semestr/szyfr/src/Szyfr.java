
public class Szyfr {
    public static void main(String[] args) {
    Cipher c = new Cipher();

    String t = "abc";

    System.out.println("Is Valid "+c.isValid(t));
    String szyfr = c.encrypt(t);
    String deszyfr =c.decrypt(szyfr);
        
    System.out.println(t);
    System.out.println(szyfr);
    System.out.println(deszyfr);
    //String out = "";
   // String g ="*";
   /*  
   StringBuilder sb = new StringBuilder();
    long t=System.currentTimeMillis();
        for(int i = 0 ; i<1000000;i++){
//            out += g;
            sb.append('*');
            
            
            
        }
    String out = sb.toString();
    System.out.println(out);
    t = System.currentTimeMillis() - t ;
    System.out.println(t +"ms");




            String s1="";
        for(int i = 0 ; i<s.length() ; i++){
            char bufor = s.charAt(i);
                if(s.charAt(i)!=' '){
                    bufor -= 1;
                }
            s1 += Character.toString(bufor);
            
        }
        return s1;
     */
    }
}