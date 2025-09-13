import java.util.Scanner;

// Problem 7:
// Write a program that inputs a series of 10 integers and determines and prints the largest integer.
// Your program should use at least the following three variables:
// a) counter: A counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers have been processed).
// b) number: The integer most recently input by the user.
// c) largest: The largest number found so far.
public class Problem07_LargestNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int counter = 1, largest = Integer.MIN_VALUE, number;
        while (counter <= 10) {
            System.out.print("Enter integer " + counter + ": ");
            number = sc.nextInt();
            if (number > largest) largest = number;
            counter++;
        }
        System.out.println("Largest number: " + largest);
        sc.close();
    }
}
