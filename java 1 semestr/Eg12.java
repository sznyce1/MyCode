/*
12.
Dany jest plik tekstowy, w ktorym zapisano (w kolejnych wierszach) informacje o
lekach:

•nazwa leku (String)
•cena leku (int)
•refundacja (char,T/N")

Napisac funkcję, ktora jako pierwszy parametr otrzymuje nazwę tego pliku (bez
rozzerzenia, należy dopisac rozszerzenie.TXT"). Funkcja zwraca cenę leku o
nazwie podanej drugim parametrem. Dodatkowo, funkcja przepisuje do
drugiego pliku tekstowego (o nazwie jak dla pierwszego, ale z razsrerzeniem
WYN") informacje o wszystkich lekach (nazwy, ceny, refundacje -wszystko w jednym
wierszu, rozdzielając spacjami), ktorych cena jest większa od 5 i  są
refundowane.
 */

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class Eg12 {
    
        double moja(String nazwa_pliku, String szukana_nazwa_leku){
        
            String s="";
            String nazwa_leku;
            double cena_leku;
            char refundacja;
            double c=0.0;
            
        try{
            FileReader fr = new FileReader(nazwa_pliku.concat(".TXT"));
            BufferedReader br = new BufferedReader(fr);
            
            FileWriter fw = new FileWriter(nazwa_pliku.concat(".WYN"), true);
            PrintWriter pw = new PrintWriter(fw);
    
             while(s != null){
                 
                 
                  s = br.readLine();
                  if(s !=null){
                     nazwa_leku = s;
                     cena_leku = Double.parseDouble(br.readLine());
                     refundacja = br.readLine().charAt(0);
                     if(nazwa_leku.equals(szukana_nazwa_leku)){
                         c =  cena_leku; 
                     }
                     
                     pw.println(nazwa_leku+" "+cena_leku+" "+refundacja);
                  }
                
             }
                    
            pw.close();
            fw.close();
            br.close();
            fr.close();
        }catch (IOException error) {}
    
    
         return c;
        }
        
    public static void main(String[] args) {
       
    }
    
    
    
}
