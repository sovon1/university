// Problem 21:
// Write a program that uses String method compareTo to compare two strings input by the user.
// Output whether the first string is less than, equal to or greater than the second.
import java.util.Scanner;
public class Problem21_CompareStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first string: ");
        String s1 = sc.nextLine();
        System.out.print("Enter second string: ");
        String s2 = sc.nextLine();
        int cmp = s1.compareTo(s2);
        if (cmp < 0) System.out.println("First string is less than second.");
        else if (cmp == 0) System.out.println("Strings are equal.");
        else System.out.println("First string is greater than second.");
        sc.close();
    }
}
