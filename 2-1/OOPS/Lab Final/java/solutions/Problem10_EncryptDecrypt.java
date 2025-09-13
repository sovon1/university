import java.util.Scanner;

// Problem 10:
// A company that wants to send data over the Internet has asked you to write a program that will encrypt it so that it may be transmitted more securely.
// All the data is transmitted as four-digit integers. Your program should read a four-digit integer entered by the user and encrypt it as follows:
// Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the new value by 10.
// Then swap the first digit with the third, and swap the second digit with the fourth. Then print the encrypted integer.
// Write a separate program that inputs an encrypted four-digit integer and decrypts it (by reversing the encryption scheme) to form the original number.
public class Problem10_EncryptDecrypt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a four-digit integer to encrypt: ");
        int num = sc.nextInt();
        if (num < 1000 || num > 9999) {
            System.out.println("Error: Number must be four digits.");
            sc.close();
            return;
        }
        int[] digits = new int[4];
        for (int i = 3; i >= 0; i--) {
            digits[i] = (num % 10 + 7) % 10;
            num /= 10;
        }
        // Swap first with third, second with fourth
        int temp = digits[0]; digits[0] = digits[2]; digits[2] = temp;
        temp = digits[1]; digits[1] = digits[3]; digits[3] = temp;
        System.out.print("Encrypted number: ");
        for (int d : digits) System.out.print(d);
        System.out.println();

        // Decrypt
        System.out.print("Enter encrypted four-digit integer to decrypt: ");
        int enc = sc.nextInt();
        int[] encDigits = new int[4];
        for (int i = 3; i >= 0; i--) {
            encDigits[i] = enc % 10;
            enc /= 10;
        }
        // Swap back
        temp = encDigits[0]; encDigits[0] = encDigits[2]; encDigits[2] = temp;
        temp = encDigits[1]; encDigits[1] = encDigits[3]; encDigits[3] = temp;
        for (int i = 0; i < 4; i++) {
            encDigits[i] = (encDigits[i] + 10 - 7) % 10;
        }
        System.out.print("Decrypted number: ");
        for (int d : encDigits) System.out.print(d);
        System.out.println();
        sc.close();
    }
}
