// Problem 3:
// Create a class called Employee that includes three instance variables—a first name (type String), a last name (type String) and a monthly salary (double).
// Provide a constructor that initializes the three instance variables. Provide a set and a get method for each instance variable.
// If the monthly salary is not positive, set it to 0.0. Write a program named EmployeeTest that demonstrates class Employee’s capabilities.
// Create two Employee objects and display each object’s yearly salary. Then give each Employee a 10% raise and display each Employee’s yearly salary again.
class Employee {
    private String firstName;
    private String lastName;
    private double monthlySalary;

    public Employee(String firstName, String lastName, double monthlySalary) {
        this.firstName = firstName;
        this.lastName = lastName;
        setMonthlySalary(monthlySalary);
    }

    public void setFirstName(String firstName) { this.firstName = firstName; }
    public String getFirstName() { return firstName; }

    public void setLastName(String lastName) { this.lastName = lastName; }
    public String getLastName() { return lastName; }

    public void setMonthlySalary(double monthlySalary) { this.monthlySalary = monthlySalary > 0 ? monthlySalary : 0.0; }
    public double getMonthlySalary() { return monthlySalary; }
}

public class Problem03_EmployeeTest {
    public static void main(String[] args) {
        Employee emp1 = new Employee("Alice", "Smith", 3000);
        Employee emp2 = new Employee("Bob", "Johnson", 2500);
        System.out.printf("%s %s yearly salary: %.2f\n", emp1.getFirstName(), emp1.getLastName(), emp1.getMonthlySalary() * 12);
        System.out.printf("%s %s yearly salary: %.2f\n", emp2.getFirstName(), emp2.getLastName(), emp2.getMonthlySalary() * 12);
        emp1.setMonthlySalary(emp1.getMonthlySalary() * 1.1);
        emp2.setMonthlySalary(emp2.getMonthlySalary() * 1.1);
        System.out.println("After 10% raise:");
        System.out.printf("%s %s yearly salary: %.2f\n", emp1.getFirstName(), emp1.getLastName(), emp1.getMonthlySalary() * 12);
        System.out.printf("%s %s yearly salary: %.2f\n", emp2.getFirstName(), emp2.getLastName(), emp2.getMonthlySalary() * 12);
    }
}
