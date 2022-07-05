import java.util.Map;
import java.util.HashMap;

public class WinStatystyki implements Statystyki {
    WinStatystyki() {};
    private Map<Player, Integer> score = new HashMap<>();

    public void addWiner(Player player){
        Integer wygrane = score.get(player);
        if(wygrane==null) wygrane = 0;
        wygrane += 1;
        score.put(player, wygrane);
       // System.out.println(player.getName()+" "+ wygrane);

    }

    public void print(){
    score.forEach((player, wygrane)->System.out.println(player.getName()+" "+ wygrane ));

    }

    public void clear(){
        score.clear();
    }

}
