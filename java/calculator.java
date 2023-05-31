public class calculator{
    private int fnumber;
    private int snumber;
    public calculator(int f,int s){
        fnumber=f;
        snumber=s;
    }public int add(){
        return fnumber+snumber;
    }
    public static void main(String[] args) {
        System.out.println("enter first number");
        String s1 =System.console().readLine();
        System.out.println("enter second number");
        String s2 =System.console().readLine();
        int a=Integer.parseInt(s1);
        int b=Integer.parseInt(s2);
        calculator c = new calculator(a,b);
        int result= c.add();
        System.out.println("sum:"+result);
    }
}