
import java.io.RandomAccessFile;
import java.io.IOException;

public class cw6_PlikiDanych {
    
    
    public static String odczyt(int skok, int ile, String plik){
           String nazwa , minn = "abc";          
           double min=100000, cena=0;
           boolean ref;
           long miejsce;
            
        try{
            RandomAccessFile raf = new RandomAccessFile(plik, "rw");

            int licz=1;
            do{
                miejsce = raf.getFilePointer();
                nazwa = raf.readUTF();
                cena = raf.readInt(); // odczyt string
                ref = raf.readBoolean();
                
                
                if (cena < min){
                    min = cena;
                    minn = nazwa;
                }
                if (ref){
                    cena = cena - cena * 0.15;
                }
                
                
               
            licz++;
            }
            while(raf.getFilePointer() < raf.length()  && licz <= ile);
            
            raf.close();
        }catch(IOException e){
            System.out.println("Błąd we/wy ");
       }
        
    return minn;
    }
     public static void main(String[] args) {
       
    }

}
    

