public abstract class Player {
    int los;
    private String name = " Gracz"; //domyślna wartość
    Player() {}
    Player(String name){
     
        this.setName(name);
    }
    
    abstract int zgaduj();

    public final String getName(){
        
        return this.name;
    }
    public final void setName(String name){       
        if(name!=null && name.matches("^[a-zA-z0-9 \\-_]{3,}$")){
                       
           this.name=name;
        }else {
            // System.err.println("błąd");
            throw new IllegalArgumentException("Nieprawidlowe imie"); 
        }
    }
}

