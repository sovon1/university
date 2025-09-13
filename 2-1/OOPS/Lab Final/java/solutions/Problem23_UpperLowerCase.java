// Problem 23:
// Write an application that inputs a line of text and outputs the text twice—once in all uppercase letters and once in all lowercase letters.
import java.util.Scanner;
public class Problem23_UpperLowerCase {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a line of text: ");
        String line = sc.nextLine();
        System.out.println("Uppercase: " + line.toUpperCase());
        System.out.println("Lowercase: " + line.toLowerCase());
        sc.close();
    }
}
