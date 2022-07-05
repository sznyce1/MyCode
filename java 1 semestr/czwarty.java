
public class czwarty {
    
    
    public static void hello(){
        System.out.println("hello");
    }
        public static void say(String s){
        System.out.println(s);
    }

    public static double pole_koła(double r){
        double p;
        p=Math.PI*Math.pow(r, 2);
        return p;
    }
    public static double pole_prostokąta(double a,double b){
        double p = a*b;
        
        
        return p;
    }
    
    
    public static void main(String[] args) {
        hello();
        say("kasztan");      
        System.out.println(pole_koła(3));
        System.out.println(pole_prostokąta(3,3));
    }
    
}
