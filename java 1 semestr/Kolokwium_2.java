import java.io.RandomAccessFile;
import java.io.IOException;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;





public class Kolokwium_2 {

    
 //2   
    static double punkty(String nazwisko){
        String imie;
        String naz;
        double punkty;
        double metry;
        double lpunkty = 0;
        
        try{
           RandomAccessFile raf = new RandomAccessFile("plik.bin", "rw");
           
           while(raf.getFilePointer() < raf.length()){
               imie=raf.readUTF();
               naz=raf.readUTF();
               punkty=raf.readDouble();
               metry=raf.readDouble();
               if(nazwisko == naz){
                   lpunkty=metry*1.8;
               }
               
               
           }
            raf.close();
        }catch(IOException e){
            System.out.println("Błąd we/wy ");
        }
     
return lpunkty;
}
    //3
    static int lsłów(){
        
        String s;
        int lsłów = 0;
        try{
            FileReader fr = new FileReader("list.txt");
            BufferedReader br = new BufferedReader(fr);
            do{
               s = br.readLine();
               s.replace("  ", " ");
               s.replace("  ", " ");
               String tab[] = s.split(" ");

               lsłów += tab.length;
            }while(s != null);
            fr.close();
            br.close();
                       
        }catch(IOException e){
            System.out.println("Błąd we/wy ");
        }
        
return lsłów;
}
  
    
    
    
    
    
    
    public static void main(String[] args) {
    
    }
    
}
