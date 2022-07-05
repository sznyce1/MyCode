import java.io.RandomAccessFile;
import java.io.IOException;

public class PlikiDanych {

   public static void dopisz(int i, String s, double ocena){
        try{
            RandomAccessFile raf = new RandomAccessFile("plik.bin", "rw");
            
            long skok = raf.length();
            raf.seek(skok); // skok -  adres w bajtach
            
            raf.writeInt(i);
            raf.writeUTF(s); // zapis string
            raf.writeDouble(ocena);
            
            raf.close();
        }catch(IOException e){
            System.out.println("Błąd we/wy ");
       }
   }
    
   public static void odczyt(int skok, int ile){
           int i;
           String s;
           long miejsce;
           double ocena;
           
           
        try{
            RandomAccessFile raf = new RandomAccessFile("plik.bin", "rw");
            
           // raf.seek(skok); // skok -  adres w bajtach
           i=1;
           while(raf.getFilePointer() < raf.length() && i < skok){
                i = raf.readInt();
                s = raf.readUTF(); // odczyt string
                ocena = raf.readDouble();
                i++;
           } ;
           
            int licz=1;
            do{
                miejsce = raf.getFilePointer();
                i = raf.readInt();
                s = raf.readUTF(); // odczyt string
                ocena = raf.readDouble();
                
               System.out.println(miejsce+" "+i+" "+s+" "+ocena);
               licz++;
            }
            while(raf.getFilePointer() < raf.length()  && licz <= ile);
            
            raf.close();
        }catch(IOException e){
            System.out.println("Błąd we/wy ");
       }
   }
    
    
   public static void popraw(int skok, double pocena){
           int i;
           String s;
           long miejsce;
           double ocena;
           
        try{
            RandomAccessFile raf = new RandomAccessFile("plik.bin", "rw");
            
           // raf.seek(skok); // skok -  adres w bajtach
           i=1;
           while(raf.getFilePointer() < raf.length() && i < skok){
                i = raf.readInt();
                s = raf.readUTF(); // odczyt string
                ocena = raf.readDouble();
                i++;
           } ;

                miejsce = raf.getFilePointer();
                i = raf.readInt();
                s = raf.readUTF(); // odczyt string
                raf.writeDouble(pocena);
                
               System.out.println(miejsce+" "+i+" "+s+" "+pocena);
         
            
            raf.close();
        }catch(IOException e){
            System.out.println("Błąd we/wy ");
       }
   }
   
   

    public static void main(String[] args) {
         /* zapisz(1, "Bolesława Kowalska",3.5);
          zapisz(2, "Piotr Nieznany",4.0);
          zapisz(3, "Wojciech Anonim",3.5);
          zapisz(4, "Jan Nikt",4.0);
          */
         
       //  popraw(1,4.0);
         odczyt(1,10);
        
    }
    
}
