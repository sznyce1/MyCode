import java.util.Random;
import java.util.ArrayList;

public class Gra {

    private ArrayList<Player> Gracze = new ArrayList<>();
    private Statystyki stats = new NullStatystyki();

    public Gra(WinStatystyki stats) {
        if(stats!=null)
            this.stats=stats;
    }
    public Gra() {} 
    
    int iteracja = 3;  
    void dodajGracza(Player player){  
            
        if(doesNameExists(player)) { 
            player.setName(player.getName()+ new Random().nextInt(10)); 
            dodajGracza(player);         
        }else{
            Gracze.add(player);
        }
    }
    private boolean doesNameExists(Player player){
        for(Player p : Gracze){
            if(p.getName().equals(player.getName())){
                return true;
            }           
        }
        return false;
    }
    void graj(){
        Random r = new Random();
        int los,odp;
        int punkt = 0;
        int it = 0 ;

        String imie = "";
        
        do{   
            
            for(Player player : Gracze){
            odp = r.nextInt(6)+1;
            los = player.zgaduj();
            if(los == odp){
                punkt++; 
                stats.addWiner(player);
                imie = player.getName();
                break;
            }
            System.out.println("Komputer losuje: "+ odp + " " + player.getName()+" Odpowiada: "+ los );            
                     
        }
        it += 1 ;  
        }while(punkt<1);
        
        System.out.println(imie+" wygral po "+ it +" turach"); 
             
    }
    void wypiszGraczy(){
        System.out.println("______________________");
        Gracze.forEach(player -> System.out.println(player.getName()));
    }
    void usunGracza(String imie){
        for(Player p : Gracze){
            if(p.getName().equals(imie)){
                Gracze.remove(p);
                break;
            }
        }
    }
    void wypiszStstystyki(){
        System.out.println("______________________");
        stats.print();
    }

   
}
    

