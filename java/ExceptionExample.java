public class ExceptionExample {
    public static void main(String[] args) {
        System.out.println("null");
        String num = System.console().readLine();
        try {
            int n = Integer.parseInt(num);
            int sq = n * n;
            System.out.println("Square:" + sq);
        } catch (Exception ex) {
            System.out.println("Please enter valid number");
        }
    }

}