// Problem 22:
// Write a program that uses String method regionMatches to compare two strings input by the user.
// The application should input the number of characters to be compared and the starting index of the comparison.
// The application should state whether the strings are equal. Ignore the case of the characters when performing the comparison.
import java.util.Scanner;
public class Problem22_RegionMatches {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first string: ");
        String s1 = sc.nextLine();
        System.out.print("Enter second string: ");
        String s2 = sc.nextLine();
        System.out.print("Enter starting index: ");
        int index = sc.nextInt();
        System.out.print("Enter number of characters to compare: ");
        int len = sc.nextInt();
        boolean match = s1.regionMatches(true, index, s2, index, len);
        if (match) System.out.println("Strings are equal in the specified region.");
        else System.out.println("Strings are NOT equal in the specified region.");
        sc.close();
    }
}
