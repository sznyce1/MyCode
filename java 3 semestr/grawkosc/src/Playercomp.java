import java.util.Random;
public class Playercomp extends Player {
    int los;
    private Random r = new Random();
    Playercomp(String name){
        super(name);
    }
    Playercomp(){}
    int zgaduj(){
        
        los = r.nextInt(6)+1;
        return los;

    }
}
