// Problem 2:
// Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store.
// An Invoice should include four pieces of information as instance variables—a part number (type String), a part description (type String),
// a quantity of the item being purchased (type int) and a price per item (double). Your class should have a constructor that initializes the four instance variables.
// Provide a set and a get method for each instance variable. In addition, provide a method named getInvoiceAmount that calculates the invoice amount
// (i.e., multiplies the quantity by the price per item), then returns the amount as a double value. If the quantity is not positive, it should be set to 0.
// If the price per item is not positive, it should be set to 0.0. Write a program named InvoiceTest that demonstrates class Invoice’s capabilities.
public class Problem02_InvoiceTest {
    public static void main(String[] args) {
        Invoice invoice = new Invoice("1234", "Hammer", 5, 9.99);
        System.out.println("Part Number: " + invoice.getPartNumber());
        System.out.println("Description: " + invoice.getPartDescription());
        System.out.println("Quantity: " + invoice.getQuantity());
        System.out.println("Price per item: " + invoice.getPricePerItem());
        System.out.println("Total Invoice Amount: " + invoice.getInvoiceAmount());
    }
}
