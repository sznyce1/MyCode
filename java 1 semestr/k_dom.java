
public class k_dom {
    String typ;
    int liczba_pięter;
   
    k_dom(String s, int i){ // konstruktor
        typ=s;
        liczba_pięter= i;
    }
        k_dom(String s){ // konstruktor
        typ=s;
        liczba_pięter= 0;
    }
    void zbudujp(){
    liczba_pięter++;
    
}

    void ile_pięter(){
        System.out.println(liczba_pięter);
        System.out.println(typ);
    }
}
