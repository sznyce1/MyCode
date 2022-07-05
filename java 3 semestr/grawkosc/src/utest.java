import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.Test;

public class utest {
   
    @Test
    public void testImieComp(){
        Playercomp p = new Playercomp();
        p.setName("name");
        assertEquals("name", p.getName());
    }
    @Test
    public void testImieHuman(){
        Playerhuman p = new Playerhuman();
        p.setName("name");
        assertEquals("name", p.getName());
    }
}
