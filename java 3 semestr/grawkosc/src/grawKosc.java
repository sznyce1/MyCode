//import java.util.Random;

        
public class grawKosc {


    public static void main(String[] args) {
        

        Gra gra = new Gra(new WinStatystyki());
        gra.dodajGracza(new Playercomp("dawid"));
        gra.dodajGracza(new Playercomp("janusz"));
        gra.dodajGracza(new Playercomp("janusz"));
        gra.dodajGracza(new Playercomp("janusz"));
        gra.usunGracza("dawid");
        
        for(int i = 0 ; i<33 ; i++){
            gra.graj();
        }
        // gra.wypiszGraczy();
        gra.wypiszStstystyki();
    }
    
}
