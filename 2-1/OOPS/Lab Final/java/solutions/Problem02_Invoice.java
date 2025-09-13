class Invoice {
    private String partNumber;
    private String partDescription;
    private int quantity;
    private double pricePerItem;

    public Invoice(String partNumber, String partDescription, int quantity, double pricePerItem) {
        this.partNumber = partNumber;
        this.partDescription = partDescription;
        setQuantity(quantity);
        setPricePerItem(pricePerItem);
    }

    public void setPartNumber(String partNumber) { this.partNumber = partNumber; }
    public String getPartNumber() { return partNumber; }

    public void setPartDescription(String partDescription) { this.partDescription = partDescription; }
    public String getPartDescription() { return partDescription; }

    public void setQuantity(int quantity) { this.quantity = quantity > 0 ? quantity : 0; }
    public int getQuantity() { return quantity; }

    public void setPricePerItem(double pricePerItem) { this.pricePerItem = pricePerItem > 0 ? pricePerItem : 0.0; }
    public double getPricePerItem() { return pricePerItem; }

    public double getInvoiceAmount() { return quantity * pricePerItem; }
}

public class Problem02_Invoice {
    public static void main(String[] args) {
        Invoice invoice = new Invoice("1234", "Hammer", 5, 9.99);
        System.out.println("Part Number: " + invoice.getPartNumber());
        System.out.println("Description: " + invoice.getPartDescription());
        System.out.println("Quantity: " + invoice.getQuantity());
        System.out.println("Price per item: " + invoice.getPricePerItem());
        System.out.println("Total Invoice Amount: " + invoice.getInvoiceAmount());
    }
}
