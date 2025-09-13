
// Problem 1:
// Write a program that inputs one number consisting of five digits from the user,
// separates the number into its individual digits and prints the digits separated
// from one another by three spaces each. For example, if the user types in the number 42339,
// the program should print: 4   2   3   3   9
import java.util.Scanner;

public class Problem01_FiveDigitSeparator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a five-digit number: ");
        int num = sc.nextInt();
        if (num < 10000 || num > 99999) {
            System.out.println("Error: Number must be five digits.");
        } else {
            int d1 = num / 10000;
            int d2 = (num / 1000) % 10;
            int d3 = (num / 100) % 10;
            int d4 = (num / 10) % 10;
            int d5 = num % 10;
            System.out.printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);
        }
        sc.close();
    }
}
