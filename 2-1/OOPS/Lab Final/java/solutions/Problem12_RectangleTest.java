// Problem 12:
// Create a class Rectangle with attributes length and width, each of which defaults to 1.
// Provide methods that calculate the rectangle’s perimeter and area. It has set and get methods for both length and width.
// The set methods should verify that length and width are each floating-point numbers larger than 0.0 and less than 20.0.
// Write a program to test class Rectangle.
class Rectangle {
    private double length = 1;
    private double width = 1;

    public void setLength(double length) {
        if (length > 0.0 && length < 20.0) this.length = length;
    }
    public double getLength() { return length; }

    public void setWidth(double width) {
        if (width > 0.0 && width < 20.0) this.width = width;
    }
    public double getWidth() { return width; }

    public double getPerimeter() { return 2 * (length + width); }
    public double getArea() { return length * width; }
}

public class Problem12_RectangleTest {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle();
        rect.setLength(10.5);
        rect.setWidth(5.2);
        System.out.println("Length: " + rect.getLength());
        System.out.println("Width: " + rect.getWidth());
        System.out.println("Perimeter: " + rect.getPerimeter());
        System.out.println("Area: " + rect.getArea());
    }
}
