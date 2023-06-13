public class child extends parent{
    public String Eat(){
        return "Eat mo.mo";
    }
    public static void main(String[] args) 
    {
        parent p = new parent();
        String result = p.Eat();
        System.out.println(result);
        System.out.println(p.play());
        
    }
    }

