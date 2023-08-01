public class cutomexceptiondemo {
    public static void ValidAge(int age) throws customexception {
        if(age>18){
            throw new customexception("you can vote");
        }else{
        System.out.println("You are not eligible to Vote.");
    }
}
public static void main(String[] args) {
    System.out.println("enter your age");
    String age = System.console().readLine();
try{
    int a = Integer.parseInt(age);
    ValidAge(a);
}
catch(customexception ex){
    System.out.println(ex.getMessage());
}
}
}
