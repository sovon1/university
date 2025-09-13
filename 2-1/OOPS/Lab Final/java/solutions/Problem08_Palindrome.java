import java.util.Scanner;

// Problem 8:
// A palindrome is a sequence of characters that reads the same backward as forward.
// Write a program that reads in a five-digit integer and determines whether it’s a palindrome.
// If the number is not five digits long, display an error message and allow the user to enter a new value.
public class Problem08_Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num;
        while (true) {
            System.out.print("Enter a five-digit integer: ");
            num = sc.nextInt();
            if (num >= 10000 && num <= 99999) break;
            System.out.println("Error: Number must be five digits.");
        }
        int d1 = num / 10000;
        int d2 = (num / 1000) % 10;
        int d3 = (num / 100) % 10;
        int d4 = (num / 10) % 10;
        int d5 = num % 10;
        if (d1 == d5 && d2 == d4) {
            System.out.println(num + " is a palindrome.");
        } else {
            System.out.println(num + " is not a palindrome.");
        }
        sc.close();
    }
}
