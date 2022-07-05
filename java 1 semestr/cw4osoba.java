
public class cw4osoba {
    private String Imie;
    private String Nazwisko;
   
    
    cw4osoba(String Imie, String Nazwisko){
        this.Imie=Imie;
        this.Nazwisko=Nazwisko;
        System.out.println(Imie+" "+Nazwisko);
    }
    String get_imie(){
    return this.Imie;
    } 
    String get_Nazwisko(){
    return this.Nazwisko;
    }
    
    
    
}
