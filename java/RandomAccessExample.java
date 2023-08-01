import java.io.*;

public class RandomAccessExample {
    public static void main(String[] args) throws FileNotFoundException,IOException {
        RandomAccessFile raf = null;
        try {

            raf = new RandomAccessFile("ran.txt", "rw");
            raf.writeUTF("hello Java file");
            raf.seek(0);
        } catch (Exception ex) {
            System.out.println(ex.getMessage());
            String str="please understand carefully java code";
            raf.write(str.getBytes());

        } finally {
            if (raf!=null) {
                
                raf.close();
            }
        }
    }

}