import static org.junit.Assert.assertEquals;

import org.junit.Test;

public class Utest {

    @Test
    public void testCipher(){
        Cipher c = new Cipher();
        assertEquals("bcd", c.encrypt("abc"));
    }
    @Test
    public void testCipher1(){
        Cipher c = new Cipher();
        assertEquals("abc", c.decrypt("bcd"));
    }
    @Test
    public void testValid(){
        Cipher c = new Cipher();
        assertEquals(true, c.isValid("abc"));
    }
}