// Problem 24:
// Write an application that inputs a line of text and a search character and uses String method indexOf to determine the number of occurrences of the character in the text.
import java.util.Scanner;
public class Problem24_SearchCharacter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a line of text: ");
        String line = sc.nextLine();
        System.out.print("Enter search character: ");
        char ch = sc.next().charAt(0);
        int count = 0, idx = -1;
        do {
            idx = line.indexOf(ch, idx + 1);
            if (idx != -1) count++;
        } while (idx != -1);
        System.out.println("Occurrences: " + count);
        sc.close();
    }
}
