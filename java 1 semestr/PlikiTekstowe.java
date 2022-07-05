import java.io.FileWriter;
import java.io.PrintWriter;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;

public class PlikiTekstowe {

    static void dopisz(String s){
        
        try{
            FileWriter fw = new FileWriter("plik.txt",true);
            PrintWriter pw = new PrintWriter(fw);
            
            pw.println(s);
            
            
            
            pw.close();
            fw.close();
            
        }catch(IOException e){
            System.out.println("błąd wejścia wyjścia");
        } 
           
    }
          static void odczyt(){
        String s;
        
        try{
            
            FileReader fr = new FileReader("plik.txt");
            BufferedReader br = new BufferedReader(fr);
            
            do{
               s = br.readLine();
               if(s != null){
                  System.out.println(s);   
               }
            }while(s != null);
         
            fr.close();
            br.close();
        }catch(IOException e){
            System.out.println("Błąd we/wy...");
        }
        
    }
 
    public static void main(String[] args) {
     dopisz("jan paweł 2");
     odczyt();
    }
    
}
