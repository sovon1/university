// Problem 14:
// Write an inheritance hierarchy for classes Quadrilateral, Trapezoid, Parallelogram, Rectangle and Square.
// Use Quadrilateral as the superclass of the hierarchy. Create and use a Point class to represent the points in each shape.
// Make the hierarchy as deep (i.e., as many levels) as possible. Specify the instance variables and methods for each class.
// The private instance variables of Quadrilateral should be the x-y coordinate pairs for the four endpoints of the Quadrilateral.
// Write a program that instantiates objects of your classes and outputs each object’s area (except Quadrilateral).
class Point {
    public double x, y;
    public Point(double x, double y) { this.x = x; this.y = y; }
}
class Quadrilateral {
    protected Point[] points = new Point[4];
    public Quadrilateral(Point p1, Point p2, Point p3, Point p4) {
        points[0] = p1; points[1] = p2; points[2] = p3; points[3] = p4;
    }
}
class Trapezoid extends Quadrilateral {
    public Trapezoid(Point p1, Point p2, Point p3, Point p4) { super(p1, p2, p3, p4); }
    public double area() { return 0.5 * (points[0].y + points[2].y) * Math.abs(points[1].x - points[0].x); }
}
class Parallelogram extends Trapezoid {
    public Parallelogram(Point p1, Point p2, Point p3, Point p4) { super(p1, p2, p3, p4); }
    public double area() { return Math.abs((points[1].x - points[0].x) * (points[2].y - points[0].y)); }
}
class Rectangle extends Parallelogram {
    public Rectangle(Point p1, Point p2, Point p3, Point p4) { super(p1, p2, p3, p4); }
    public double area() { return Math.abs((points[1].x - points[0].x) * (points[3].y - points[0].y)); }
}
class Square extends Rectangle {
    public Square(Point p1, Point p2, Point p3, Point p4) { super(p1, p2, p3, p4); }
    public double area() { return Math.pow(points[1].x - points[0].x, 2); }
}
public class Problem14_QuadrilateralHierarchyTest {
    public static void main(String[] args) {
        Point p1 = new Point(0,0), p2 = new Point(2,0), p3 = new Point(2,2), p4 = new Point(0,2);
        Square sq = new Square(p1, p2, p3, p4);
        Rectangle rect = new Rectangle(p1, p2, p3, p4);
        Parallelogram para = new Parallelogram(p1, p2, p3, p4);
        Trapezoid trap = new Trapezoid(p1, p2, p3, p4);
        System.out.println("Square area: " + sq.area());
        System.out.println("Rectangle area: " + rect.area());
        System.out.println("Parallelogram area: " + para.area());
        System.out.println("Trapezoid area: " + trap.area());
    }
}
