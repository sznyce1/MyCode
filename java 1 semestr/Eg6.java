import java.io.RandomAccessFile;
import java.io.IOException;

/*
6.Dany jest plik danych, w którym są zapisane kolejno czwórki danych:

-numer zamówienia (int)owaru(String)
-cena(double)
-liczba sztuk(int)
-nazwa t

Napisać funkcję obliczZamowienie(), która jako pierwszy parametr 
otrzymuje nazwę tego pliku. 
Funkcja zwraca liczbę zamówionych sztuk towaru, 
ktorego nazwa przekazana jest przez drugi parametr.
Dodatkowo, w podanym pliku, funkcja wprowadza rabat w wysokości 10 procent 
dla wszystkich towarów, których cena jest większą niz 50 i zamówiono ich przynajmniej 
25 sztuk. Danych nie można wczytać do tablicy.
 */

public class Eg6 {

    public static int obliczZamowienia(String nazwa, String towar){
        int liczbaTowaru = 0;
        long p;
        
        int nr_zamowienia, liczbaSztuk;
        String nazwaTowaru;
        double cena;
        
        try{
            RandomAccessFile file = new RandomAccessFile(nazwa, "rw");
            
            do{
                nr_zamowienia = file.readInt();
                nazwaTowaru = file.readUTF();
                p = file.getFilePointer();
                cena = file.readDouble();
                liczbaSztuk = file.readInt();

                if(cena > 50 && liczbaSztuk > 25) {
                    cena *= 0.9;
                    file.seek(p);
                    file.writeDouble(cena);
                    liczbaSztuk = file.readInt();
                }
                if(nazwaTowaru.equals(towar)) liczbaTowaru += liczbaSztuk;
                
            } while(file.getFilePointer() < file.length());
            
            file.close();
        }catch (IOException error) { }
        
        return liczbaTowaru;
    }
    
    public static void main(String[] args) { }   
}
