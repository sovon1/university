import java.util.Scanner;

// Problem 5:
// Write a program that determines whether any of several department-store customers has exceeded the credit limit on a charge account.
// For each customer, the following facts are available:
// a) account number
// b) balance at the beginning of the month
// c) total of all items charged by the customer this month
// d) total of all credits applied to the customer’s account this month
// e) allowed credit limit.
// The program should input all these facts as integers, calculate the new balance (= beginning balance + charges - credits),
// display the new balance and determine whether the new balance exceeds the customer’s credit limit.
// For those customers whose credit limit is exceeded, the program should display the message "Credit limit exceeded".
public class Problem05_CreditLimitCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter account number: ");
        int accountNumber = sc.nextInt();
        System.out.print("Enter beginning balance: ");
        int beginningBalance = sc.nextInt();
        System.out.print("Enter total charges: ");
        int charges = sc.nextInt();
        System.out.print("Enter total credits: ");
        int credits = sc.nextInt();
        System.out.print("Enter allowed credit limit: ");
        int creditLimit = sc.nextInt();

        int newBalance = beginningBalance + charges - credits;
        System.out.println("New balance: " + newBalance);
        if (newBalance > creditLimit) {
            System.out.println("Credit limit exceeded");
        }
        sc.close();
    }
}
