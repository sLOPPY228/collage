public class stringExample {
    public static void main(String[] args){
System.out.println("please enter text");
String  text = System.console().readLine();
System.out.println(text.toUpperCase());  
String[] words=text.split(" ");   
System.out.println("number of words:"+words.length);
    }
}