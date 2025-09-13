import java.util.Scanner;

// Problem 9:
// Write a program that inputs an integer containing only 0s and 1s (i.e., a binary integer) and prints its decimal equivalent.
// [Hint: Use the remainder and division operators to pick off the binary number’s digits one at a time, from right to left.]
public class Problem09_BinaryToDecimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a binary number: ");
        int binary = sc.nextInt();
        int decimal = 0, base = 1;
        while (binary > 0) {
            int lastDigit = binary % 10;
            if (lastDigit != 0 && lastDigit != 1) {
                System.out.println("Error: Not a binary number.");
                sc.close();
                return;
            }
            decimal += lastDigit * base;
            base *= 2;
            binary /= 10;
        }
        System.out.println("Decimal equivalent: " + decimal);
        sc.close();
    }
}
