// Problem 26:
// Write an application that reads a five-letter word from the user and produces every possible three-letter string that can be derived from the letters of that word.
// For example, the three-letter words produced from the word “bathe” include “ate,” “bat,” “bet,” “tab,” “hat,” “the” and “tea.”
import java.util.Scanner;
public class Problem26_ThreeLetterStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a five-letter word: ");
        String word = sc.nextLine();
        if (word.length() != 5) {
            System.out.println("Error: Word must be five letters.");
            sc.close();
            return;
        }
        System.out.println("Three-letter combinations:");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (j == i) continue;
                for (int k = 0; k < 5; k++) {
                    if (k == i || k == j) continue;
                    System.out.println("" + word.charAt(i) + word.charAt(j) + word.charAt(k));
                }
            }
        }
        sc.close();
    }
}
