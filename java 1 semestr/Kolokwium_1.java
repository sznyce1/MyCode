import java.util.Random;


public class Kolokwium_1 {

//1
    static int średnia(int tab[]){
    int min=10 , x=0;
    Random r = new Random();
        for(int i = 0; i < tab.length ; i++){
        x=r.nextInt(21)-10;
        tab[i]=x;
        if(tab[i] < min){
            min=tab[i];
        }
    }    
    return min;
    }

 //2
    public class wycieczka {
    private String miejsce;
    private double odległość;
    
    wycieczka(String miejsce, double odległość){
        this.miejsce=miejsce;
        this.odległość=odległość;
    }
    void wypisz(){
        System.out.println(miejsce+"  "+odległość);
    }
}
//3
    static String nie(String s){
        String tab[] = s.split(" ");
        String n = "nie";
        for(int i = 0 ; i < tab.length; i ++){
            if(tab[i].length()<3){
                tab[i]=n+tab[i];
            }
        }
        for(int i = 0 ; i < tab.length; i ++){
            s+=tab[i];
        }
        return s;
    }
    
    public static void main(String[] args) {
        int tab[]  = new int[10];
        
    }
    
}
