import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

/*
13
Dany jest plik tekstowy, w którym są zapisane w kolejnych wierszach:
- numer zamówienia (int)
- nazwa towaru (String)
- cena(double)
- liczba sztuk (int)

Napisać funkcję, która jako pierwszy parametr otrzymuje nazwę tego pliku 
(bez rozszerzenia, należy dopisać rozszerzenie ,. TXT"). 
Funkcja zwraca numer zamówienia towaru o nazwie podanej drugim parametrem. 
Dodatkowo, funkcja przepisuje do drugiego pliku tekstowego (o nazwie jak dla pierwszego, 
ale z rozszerzeniem ..WYN") informacje o wszystkich towarach (nazwy i ceny - wszystko 
w jednym wierszu, rozdzielając przecinkami), których cena jest większa niż 50 i zamówiono 
ich przynajmniej 25 sztuk.
 */

public class cw13_egzaminacyjne_pliki_tekstowe {
        
    public static String zad13(String dane, int numer){
        String result = "";
        
        int numer_zamówienia;
        String nazwa_zamówienia;
        int liczbaSztuk;
        double cena;
        String s;
        
        try{
            FileReader fr = new FileReader(dane.concat(".TXT"));
            BufferedReader br = new BufferedReader(fr);
            
            FileWriter fw = new FileWriter(dane.concat(".WYN"), true);
            PrintWriter pw = new PrintWriter(fw);
            
            do{
                s = br.readLine();
                if (s != null){
                    numer_zamówienia = Integer.parseInt(s);
                    nazwa_zamówienia = br.readLine();
                    cena = Double.parseDouble(br.readLine());
                    liczbaSztuk = Integer.parseInt(br.readLine());
                
                if(numer_zamówienia == numer) result = numer_zamówienia + nazwa_zamówienia;

                if(cena > 50 && liczbaSztuk >= 25) pw.println(numer_zamówienia+"-"+nazwa_zamówienia+"-"+liczbaSztuk+"-"+cena);
                }
            }while(s != null);
            
            pw.close();
            fw.close();
            br.close();
            fr.close();
        }catch (IOException error) {}

        return result;
    }

    public static void main(String[] args) {
        // TODO code application logic here
    }
    
}