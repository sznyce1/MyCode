
/**
 *
 * @author Kacper
 */
public class RównanieKfadratowe {


    public static void main(String[] args) {
     
        double a=2 ,b= 44,c=4 ,delta,x1,x2,x0;
        
            delta=Math.pow(b, 2)-4*a*c;
            
        if(delta > 0){
            x1 = (-b - Math.pow(delta, 2) ) /2*a;
            x2 = (-b + Math.pow(delta, 2) ) /2*a;
            System.out.println("x1="+x1);
            System.out.println("x2="+x2);
        }
        else if(delta==0){
            x0= -b /2*a;   
            System.out.println("x0="+x0);
        }
        else{
            System.out.println("brak rozwiązań rzeczywistych");
        }
       
            
            

        
        
    }
    
}

