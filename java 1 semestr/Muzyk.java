
public class Muzyk extends cw4osoba {
    private String Instrument;
    Muzyk(String Imie, String Nazwisko, String Instrument){
        super(Imie,Nazwisko);
        this.Instrument= Instrument;
      
        
        System.out.println(super.get_imie()+" "+super.get_Nazwisko()+" "+this.Instrument);
        
    }
        
    
}
