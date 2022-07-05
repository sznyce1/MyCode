
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.RandomAccessFile;

/*
25
Napisać funkcję Emerytura(plik), która na podstawie pliku o podanej nazwie 
zawierającego dane pracowników zapisane w kolejnych wierszach w następujący sposób: 
"Imię-Nazwisko-Płeć-Wiek",

dla każdego pracownika powinna wyznaczyć ile miesięcy pozostało mu do emerytury 
(kobiety do 65, a mężczyźni – do 67 roku życia). 

Wyniki należy zapisać następująco: 
Nazwisko
Miesiące

Wyniki dla kobiet należy zapisać w pliku danych o nazwie "kobiety.bin", natomiast 
wyniki dla mężczyzn należy zapisać w pliku "mezczyzni.bin".
 */

public class cw25_egzaminacyjne {


    void Emerytura (String plik){
        String s = ""; 
        String imie = "";
        String nazwisko = "";
        String płeć= "" ;
        int wiek=0;
        int czas=0;
        
         try{
            
            FileReader fr = new FileReader(plik+"txt");
            BufferedReader br = new BufferedReader(fr);
            
            do{
               s = br.readLine();
               String tab[] = s.split("-");
               imie=tab[0];
               nazwisko=tab[1];
               płeć=tab[2];
               wiek=Integer.parseInt(tab[3]);               
               
               if(płeć=="k"){
                   czas=(65-wiek)*12;
                   RandomAccessFile raf = new RandomAccessFile("kobiety.bin", "w");
                   raf.writeChars(nazwisko);
                   raf.write(czas);
                   raf.close();
               }
                   
               if(płeć=="m"){
                   czas=(67-wiek)*12;
                   RandomAccessFile raf = new RandomAccessFile("mezczyzni.bin", "rw");
                   raf.writeUTF(nazwisko);
                   raf.writeInt(czas); 
                   raf.close();
               }
                   
            }while(s != null);
         
            fr.close();
            br.close();
            
        }catch(IOException e){
            System.out.println("Błąd we/wy...");
        }
    }
    
    public static void main(String[] args) {
      
    }
    
}
