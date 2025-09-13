// Problem 25:
// Write an application that reads a line of text, tokenizes the line using space characters as delimiters and outputs only those words beginning with the letter "b".
import java.util.Scanner;
public class Problem25_TokenizeBWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a line of text: ");
        String line = sc.nextLine();
        String[] words = line.split(" ");
        System.out.println("Words beginning with 'b':");
        for (String word : words) {
            if (word.toLowerCase().startsWith("b")) {
                System.out.println(word);
            }
        }
        sc.close();
    }
}
