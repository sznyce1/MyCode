import java.util.Scanner;

public  class Playerhuman extends Player {
    
    
    int zgaduj(){
        System.out.println("Podaj los");
        //Scanner s = new Scanner(System.in);//try ze źródłęm zamyka wszystkie podane obiekty na końcu -> try(Scanner...){kod}
        //return s.nextInt();
        return new Scanner(System.in).nextInt();        // nie zamykać system.in
    }
     Playerhuman(String name){
        super(name);
    }
    Playerhuman(){}
}
