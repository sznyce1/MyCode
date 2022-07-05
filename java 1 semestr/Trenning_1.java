import java.util.Random;

public class Trenning_1 {

    public static String los(){
        String s = new String();
        Random r = new Random();
        int x;
        x=r.nextInt(2)+1;
        
        for(int i=7;i<7;i++){
            
        }
        
        
        System.out.println(x);
        return s;
    }
        public static String litery(String s){
        
        String tab[] = s.split("");
        for(int i=0;i<tab.length;i++){
            if(i==0){
                tab[i]=tab[i].toUpperCase();                        
            }
            if(i!=0){
                if(tab[i-1].equals(" ") || tab[i-1].equals(".")){
                tab[i]=tab[i].toUpperCase();
            }    
          }
        }
        String t = new String();
        for(int i=0;i<tab.length;i++){
            t+=tab[i];
            System.out.println(tab[i]);
        }
             
       

        return t ;
    }
    
    
        
        
   
    
    
    
    
    public static void main(String[] args) {
        String s = new String();
        System.out.println(litery("w szczebrzeszynie chsząsz.cz brzmi w czczinie"));
       
        
        
        
    }
    
}


class samochód{
    
}