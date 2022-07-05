
public class cw5_Łańcuchy {

    static int litA(String s){    
    s = s.toLowerCase();
        String tab[] = s.split("");        
        int j=0;
        for(int w=0;w<s.length();w++){            
            if(tab[w].equals("a")){
            j++;
           
            }                      
    }
        return j;
       
    }
    public static void main(String[] args) {
        System.out.println(litA("abra kadabra"));
    }
    
}
