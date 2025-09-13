// Problem 15:
// Implement the Shape hierarchy. Each TwoDimensionalShape should contain method getArea to calculate the area of the two-dimensional shape.
// Each ThreeDimensionalShape should have methods getArea and getVolume to calculate the surface area and volume, respectively, of the three-dimensional shape.
// Create a program that uses an array of Shape references to objects of each concrete class in the hierarchy.
// In the loop that processes all the shapes in the array, determine whether each shape is a TwoDimensionalShape or a ThreeDimensionalShape.
// If it’s a TwoDimensionalShape, display its area. If it’s a ThreeDimensionalShape, display its area and volume.
abstract class Shape {}
abstract class TwoDimensionalShape extends Shape {
    public abstract double getArea();
}
abstract class ThreeDimensionalShape extends Shape {
    public abstract double getArea();
    public abstract double getVolume();
}
class Circle extends TwoDimensionalShape {
    private double radius;
    public Circle(double radius) { this.radius = radius; }
    public double getArea() { return Math.PI * radius * radius; }
}
class Square extends TwoDimensionalShape {
    private double side;
    public Square(double side) { this.side = side; }
    public double getArea() { return side * side; }
}
class Sphere extends ThreeDimensionalShape {
    private double radius;
    public Sphere(double radius) { this.radius = radius; }
    public double getArea() { return 4 * Math.PI * radius * radius; }
    public double getVolume() { return (4.0/3.0) * Math.PI * Math.pow(radius, 3); }
}
class Cube extends ThreeDimensionalShape {
    private double side;
    public Cube(double side) { this.side = side; }
    public double getArea() { return 6 * side * side; }
    public double getVolume() { return side * side * side; }
}
public class Problem15_ShapeHierarchyTest {
    public static void main(String[] args) {
        Shape[] shapes = { new Circle(2), new Square(3), new Sphere(2), new Cube(3) };
        for (Shape s : shapes) {
            if (s instanceof TwoDimensionalShape) {
                System.out.println("2D Shape area: " + ((TwoDimensionalShape)s).getArea());
            } else if (s instanceof ThreeDimensionalShape) {
                System.out.println("3D Shape area: " + ((ThreeDimensionalShape)s).getArea());
                System.out.println("3D Shape volume: " + ((ThreeDimensionalShape)s).getVolume());
            }
        }
    }
}
