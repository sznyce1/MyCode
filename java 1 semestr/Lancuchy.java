
public class Lancuchy {

    public static void main(String[] args) {
        String s1 = new String("Witaj mroźna zimo zimo 2020  ");
        String s2 = "";
        String s = null;
        boolean b=false;
        char c ;
        int i;
        
        s = s1.toUpperCase(); // na duże litery
        s = s1.toLowerCase(); // mały litery
        c = s1.charAt(0); // wycina literkę jako char
        i = c;
        
        s = s1.substring(0,1); // wycina literkę jako String
       // if(c == 'W')  // porownanie znaków
        //  b = true;
        if( s.equals("W") ) // porównanie łańcuchów
           b = true;
        
        s2 = s1.substring(18).trim(); // trim kazuje poczatkowe i końcowe spacje
        // wycinam od znaku na pozycji 18 do końca 
        
        try{  // łapanie wyjątków
         i = Integer.parseInt(s2); // konwersja łańcucha na int
       //  System.out.println(i);
        }
        catch(Exception e){ // w javie wyjątek jest obiektem UWAGA
            // e.printStackTrace();
          //  System.out.println("Przerwa. Zadzwoń do programisty...");
        }
        finally{
       //  System.out.println("TO się wykona zawsze"); // UWAGA
        }
        
         // Łańcuchy String nie dają się modyfikować UWAGA
         s = s1.replaceFirst("zimo", "wiosno"); // zastępuje 
         s = s1.replace("zimo", "wiosno");
         s = s1.replaceAll("zimo", "wiosno");
         
         b = s.contains("wiosno"); // czy s1 zawiera słowo "wiosno"
         //s = "";
         b = s.isEmpty();
         
         i = s1.indexOf("zimo");
         
         String tab[] = s1.split(" "); // bardzo ważna funkcja UWAGA
         
         StringBuffer sb = new StringBuffer(s1); // jest synchronizacja funkcja UWAGA 
         sb.delete(4, 15);
         sb.replace(5, 6, " bardzo ");
         sb.insert(13, "zła ");
         // sb.reverse();
         s = sb.toString();
         
         StringBuilder sbu = new StringBuilder("aaaa"); // szybszy ale brak synchronizacji 
         // w programach wielowątkowych
         
         
         System.out.println(s);
        
    }
    
}
