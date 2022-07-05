import java.util.Random;

public class Tablice {

    static double średnia(int tab[][]){
        int w;
        double s=0, ś=0;
        for( w = 0; w<tab.length ;w++){
            for(int i = 0;i<tab.length;i++){
                if(w==i){
                s=tab[w][i]+s;               
            }       
        }
    }
    ś=s/w;    
    return ś;
    }
    static void wypełnij(int tab[][]){
        Random r = new Random(); 
        for(int w = 0; w<10 ;w++){
            for(int i = 0;i<10;i++){
            tab[w][i] = r.nextInt(49)+1;
           }
        }

    }
    

    public static void main(String[] args) {
    int tab[][]  = new int[10][10];  
    
    wypełnij(tab);
    System.out.println(średnia(tab));
    
    }    
}
