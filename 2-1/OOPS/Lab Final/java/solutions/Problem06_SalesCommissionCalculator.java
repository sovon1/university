import java.util.Scanner;

// Problem 6:
// A large company pays its salespeople on a commission basis. The salespeople receive $200 per week plus 9% of their gross sales for that week.
// For example, a salesperson who sells $5000 worth of merchandise in a week receives $200 plus 9% of $5000, or a total of $650.
// You’ve been supplied with a list of the items sold by each salesperson. The values of these items are as follows:
// | Item | Value |
// |------|-------|
// | 1    | 239.99|
// | 2    | 129.75|
// | 3    | 99.95 |
// | 4    | 350.89|
// Write a program that inputs one salesperson’s items sold for last week and calculates and displays that salesperson’s earnings.
// There’s no limit to the number of items that can be sold.
public class Problem06_SalesCommissionCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double[] itemValues = {239.99, 129.75, 99.95, 350.89};
        double totalSales = 0;
        System.out.println("Enter item numbers sold (1-4), -1 to finish:");
        while (true) {
            int item = sc.nextInt();
            if (item == -1) break;
            if (item >= 1 && item <= 4) {
                totalSales += itemValues[item - 1];
            } else {
                System.out.println("Invalid item number.");
            }
        }
        double earnings = 200 + 0.09 * totalSales;
        System.out.printf("Total earnings: $%.2f\n", earnings);
        sc.close();
    }
}
