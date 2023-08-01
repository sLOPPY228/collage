import java.io.*;
public class charcopyfileexample {
    public static void main(String[] args) throws IOException{
        FileReader in = null;
        FileWriter ou = null;
        try{
            in = new FileReader("input.txt");
            ou = new FileWriter("output.txt");
            int c;
            while((c=in.read())!=-1){
                ou.write(c);
            }
            System.out.println("copy successfull");
        }
        catch(IOException ex){
            System.out.println(ex.getMessage());
        }
        finally{
            if(in!=null)
        {
            in.close();
        }
         if(ou!=null)
        {
            ou.close();
        }
        }
    }
}
