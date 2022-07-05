public class Test {
    public static void main(String[] args) {
        
        StringBuilder c = new StringBuilder();
        long t=System.currentTimeMillis();
        for (int i = 0; i < 1000; i++) {
            c.append("*");           
        }
        System.out.println(c.toString());
        System.out.println(System.currentTimeMillis()-t+" ms");
        
    }
}
