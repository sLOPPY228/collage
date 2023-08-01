import java.io.*;
public class copyfileexample {
    public static void main(String[] args) throws IOException{
        FileInputStream in = null;
        FileOutputStream ou = null;
        try{
            in = new FileInputStream("input.txt");
            ou = new FileOutputStream("output.txt");
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
