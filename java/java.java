import java.util.Scanner;

public class java {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int number1 = input.nextInt();

        System.out.print("Enter the second number: ");
        int number2 = input.nextInt();
input.close();
        int sum = number1 + number2;

        System.out.println("The sum of " + number1 + " and " + number2 + " is " + sum);
    }
}
