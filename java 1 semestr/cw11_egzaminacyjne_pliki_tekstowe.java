import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

/*
11.
Dany jest plik tekstowy, w którym zapisano (w kolejnych wierszach) informacje o budynkach:
-nazwa domu (String)
-liczba kondygnacji (int)
-cena (double)

Napisać funkcję która jako pierwszy parametr otrzymuje nazwę tego pliku 
(bez rozszerzenia, należy dopisać rozszerzenie . TXT").
 Funkcja zwraca cenę o nazwie podanej drugim parametrem. 
Dodatkowo, funkcja przepisuje do drugiego pliku tekstowego 
(o nazwie jak dla pierwszego, ale z rozszerzeniem „WYN") informacje o wszystkich 
domach (nazwy, ceny i liczby kondygnacji - wszystko w jednym wierszu, rozdzielając myśinikami), 
których cena jest większa niż 500 i liczba kondygnacji wynosi co najwyżej 2.
 */

public class cw11_egzaminacyjne_pliki_tekstowe {
    public static double zad11(String nazwa, String dom){
        double result = 0;
        String s;
        
        String nazwa_domu;
        int l_kondygnacji;
        double cena;
        
        try{
            FileReader fr = new FileReader(nazwa.concat(".txt"));
            BufferedReader br = new BufferedReader(fr);
            
            FileWriter fw = new FileWriter(nazwa.concat(".WYN"), true);
            PrintWriter pw = new PrintWriter(fw);
            
            do{
                s = br.readLine();
                if(s != null){
                  nazwa_domu = s;
                  l_kondygnacji = Integer.parseInt(br.readLine());
                   cena = Double.parseDouble(br.readLine());
                
                    if(nazwa_domu.equals(dom)) 
                        result = cena;

                    if(cena > 500 && l_kondygnacji<=2) 
                        pw.println(nazwa_domu+"-"+cena+"-"+l_kondygnacji);
                }
            }while(s != null);
            
            pw.close();
            fw.close();
            br.close();
            fr.close();
        }catch (IOException error) {}

        return result;
    }

    public static void main(String[] args) { }   
}
