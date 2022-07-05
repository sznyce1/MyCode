
import java.io.File;


public class CW1_pętla {


    public static void main(String[] args) {
        int s=1 , w=5;
        for(int i=0;i<5;i++){
            
            for(int j=0;j<w-1;j++){
                
                System.out.print(" ");
                
            
            }
            for(int d=0;d<s;d++){
                
                 System.out.print("*");  
            }
            w--;
            s=s+2;
            System.out.println("");
        }
    
    }
    
}
