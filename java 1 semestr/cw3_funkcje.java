import java.util.Random;

public class cw3_funkcje {

       public static double los(long n) {
           Random r = new Random();
           double s=0;
           double sr;
        for(int i=0;i<n;i++){
            double c=(2)*r.nextDouble()-1;
        //System.out.println(c);//sprawdzanie zakresu
            s=s+c;
        }
        sr=s/n;
        System.out.println(sr);
        return sr;
        
       }
    public static void main(String[] args) {
       los(10);
    }
    
}
 