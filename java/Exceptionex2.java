public class Exceptionex2 {
    public static void main(String[] args) {
        System.out.println("Please enter first number:");
        String num1 = System.console().readLine();
        System.out.println("Please enter second number:");
        String num2 = System.console().readLine();
        try {
            int n = Integer.parseInt(num1);
            int m = Integer.parseInt(num2);
            int sq = n / m;
            System.out.println("Result1:" + sq);
        } catch (ArithmeticException ex) {
            System.out.println("Second must be greater than 0" );
            System.out.println(ex.getMessage());
        }
    }
}