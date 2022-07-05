

public class Książka {
    String tytuł;
    int rok_wydania;
    String nazwisko_autora;
    
    
    Książka(String tytuł, int rok_wydania, String nazwisko_autora){
        this.tytuł=tytuł;
        this.rok_wydania=rok_wydania;
        this.nazwisko_autora=nazwisko_autora;
             
    }
    void wypisz(){
        System.out.println(this.tytuł+this.rok_wydania+this.nazwisko_autora);
                
    }
    
}
