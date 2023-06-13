// OVERLOAD

public class main{
    public int Add(int a, int b){
        return a + b;
    }
    public int Add(int a, int b, int c){
        return Add(a,b) + c;
    }
    
    public static void main(String[] args) {
        System.out.println("enter first number:");
        int a = Integer.parseInt(System.console().readLine());
        System.out.println("enter second number:");
        int b = Integer.parseInt(System.console().readLine());
        System.out.println("enter third number:");
        int c = Integer.parseInt(System.console().readLine());
        main oe = new main();
        int sum = c>0? oe.Add(a,b,c) : oe.Add(a,b);
        System.out.println("sum :"+ sum);
    }
}

