import java.util.Random;


public class cw2_losowe {

   
    public static void main(String[] args) {
      Random r = new Random();
      int x=0 , s=0; //s=suma
      do{
          x=r.nextInt(49-1+1)+1;
          s=s+x;
          if(x==13){
              s-=13;
          }
      }while (x!=13);
      System.out.println("wylosowano liczbę 13");
      System.out.println("suma to "+s);
    }
    
}
