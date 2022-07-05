import java.util.Random;

public class trzeci_rand {

  
    public static void main(String[] args) {
        Random r = new Random() ;
        int a=1,b=49;
        double aa=1.42,bb=43.88;
        for(int i=0;i<6;i++){
            int x = r.nextInt(b-a+1)+a;
            double y=(bb-aa)*r.nextDouble()+aa;
            System.out.println(x+" "+y);
        }
        
    }
    
}
