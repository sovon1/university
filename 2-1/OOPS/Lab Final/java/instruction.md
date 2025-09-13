# Lab Assignment
## CSTE-2102: Object Oriented Programming
### Implement the following problems with Java

---

### Problem 1
Write a program that inputs one number consisting of five digits from the user, separates the number into its individual digits and prints the digits separated from one another by three spaces each. For example, if the user types in the number 42339, the program should print  
`4 2 3 3 9`

---

### Problem 2
Create a class called `Invoice` that a hardware store might use to represent an invoice for an item sold at the store. An `Invoice` should include four pieces of information as instance variables—a part number (`type String`), a part description (`type String`), a quantity of the item being purchased (`type int`) and a price per item (`double`). Your class should have a constructor that initializes the four instance variables. Provide a `set` and a `get` method for each instance variable. In addition, provide a method named `getInvoiceAmount` that calculates the invoice amount (i.e., multiplies the quantity by the price per item), then returns the amount as a double value. If the quantity is not positive, it should be set to 0. If the price per item is not positive, it should be set to 0.0. Write a program named `InvoiceTest` that demonstrates class `Invoice`’s capabilities.

---

### Problem 3
Create a class called `Employee` that includes three instance variables—a first name (`type String`), a last name (`type String`) and a monthly salary (`double`). Provide a constructor that initializes the three instance variables. Provide a `set` and a `get` method for each instance variable. If the monthly salary is not positive, set it to 0.0. Write a program named `EmployeeTest` that demonstrates class `Employee`’s capabilities. Create two `Employee` objects and display each object’s yearly salary. Then give each Employee a 10% raise and display each Employee’s yearly salary again.

---

### Problem 4
Create a class called `Date` that includes three instance variables—a month (`type int`), a day (`type int`) and a year (`type int`). Provide a constructor that initializes the three instance variables and assumes that the values provided are correct. Provide a `set` and a `get` method for each instance variable. Provide a method `displayDate` that displays the month, day and year separated by forward slashes (/). Write a program named `DateTest` that demonstrates class `Date`’s capabilities.

---

### Problem 5
(Credit Limit Calculator) Write a program that determines whether any of several department-store customers has exceeded the credit limit on a charge account. For each customer, the following facts are available:  
a) account number  
b) balance at the beginning of the month  
c) total of all items charged by the customer this month  
d) total of all credits applied to the customer’s account this month  
e) allowed credit limit.  
The program should input all these facts as integers, calculate the new balance (= `beginning balance + charges - credits`), display the new balance and determine whether the new balance exceeds the customer’s credit limit. For those customers whose credit limit is exceeded, the program should display the message "Credit limit exceeded".

---

### Problem 6
(Sales Commission Calculator) A large company pays its salespeople on a commission basis. The salespeople receive $200 per week plus 9% of their gross sales for that week. For example, a salesperson who sells $5000 worth of merchandise in a week receives $200 plus 9% of $5000, or a total of $650. You’ve been supplied with a list of the items sold by each salesperson. The values of these items are as follows:  
| Item | Value |
|------|-------|
| 1    | 239.99|
| 2    | 129.75|
| 3    | 99.95 |
| 4    | 350.89|  
Write a program that inputs one salesperson’s items sold for last week and calculates and displays that salesperson’s earnings. There’s no limit to the number of items that can be sold.

---

### Problem 7
(Find the Largest Number) The process of finding the largest value is used frequently in computer applications. For example, a program that determines the winner of a sales contest would input the number of units sold by each salesperson. The salesperson who sells the most units wins the contest.  
Write a program that inputs a series of 10 integers and determines and prints the largest integer. Your program should use at least the following three variables:  
a) counter: A counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers have been processed).  
b) number: The integer most recently input by the user.  
c) largest: The largest number found so far.

---

### Problem 8
(Palindromes) A palindrome is a sequence of characters that reads the same backward as forward. For example, each of the following five-digit integers is a palindrome: 12321, 55555, 45554 and 11611.  
Write a program that reads in a five-digit integer and determines whether it’s a palindrome. If the number is not five digits long, display an error message and allow the user to enter a new value.

---

### Problem 9
(Printing the Decimal Equivalent of a Binary Number) Write a program that inputs an integer containing only 0s and 1s (i.e., a binary integer) and prints its decimal equivalent. [Hint: Use the remainder and division operators to pick off the binary number’s digits one at a time, from right to left. In the decimal number system, the rightmost digit has a positional value of 1 and the next digit to the left a positional value of 10, then 100, then 1000, and so on. The decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100. In the binary number system, the rightmost digit has a positional value of 1, the next digit to the left a positional value of 2, then 4, then 8, and so on. The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8, or 1 + 0 + 4 + 8 or, 13.]

---

### Problem 10
(Enforcing Privacy with Cryptography) The explosive growth of Internet communications and data storage on Internet-connected computers has greatly increased privacy concerns. The field of cryptography is concerned with coding data to make it difficult (and hopefully—with the most advanced schemes—impossible) for unauthorized users to read.  
A company that wants to send data over the Internet has asked you to write a program that will encrypt it so that it may be transmitted more securely. All the data is transmitted as four-digit integers. Your program should read a four-digit integer entered by the user and encrypt it as follows: Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the new value by 10. Then swap the first digit with the third, and swap the second digit with the fourth. Then print the encrypted integer.  
Write a separate program that inputs an encrypted four-digit integer and decrypts it (by reversing the encryption scheme) to form the original number.

---

### Problem 11
(Perfect Numbers) An integer number is said to be a perfect number if its factors, including 1 (but not the number itself), sum to the number. For example, 6 is a perfect number, because 6 = 1 + 2 + 3.  
Write a program that includes a method `isPerfect` that determines if parameter number is a perfect number. Use this method to display all the perfect numbers between 1 and 1000. Display the factors of each perfect number to confirm that the number is indeed perfect.

---

### Problem 12
(Rectangle Class) Create a class `Rectangle` with attributes length and width, each of which defaults to 1. Provide methods that calculate the rectangle’s perimeter and area. It has `set` and `get` methods for both length and width. The `set` methods should verify that length and width are each floating-point numbers larger than 0.0 and less than 20.0.Write a program to test class `Rectangle`.

---

### Problem 13
(Complex Numbers) Create a class called `Complex` for performing arithmetic with complex numbers. Complex numbers have the form `realPart + imaginaryPart * i` where `i` is √−1  
Write a program to test your class. Use floating-point variables to represent the private data of the class. Provide a constructor that enables an object of this class to be initialized when it’s declared. Provide a no-argument constructor with default values in case no initializers are provided. Provide public methods that perform the following operations:  
a) Add two Complex numbers: The real parts are added together and the imaginary parts are added together.  
b) Subtract two Complex numbers: The real part of the right operand is subtracted from the real part of the left operand, and the imaginary part of the right operand is subtracted from the imaginary part of the left operand.  
c) Print Complex numbers in the form `(realPart, imageinaryPart)`.

---

### Problem 14
Write an inheritance hierarchy for classes Quadrilateral, Trapezoid, Parallelogram, Rectangle and Square. Use Quadrilateral as the superclass of the hierarchy. Create and use a Point class to represent the points in each shape. Make the hierarchy as deep (i.e., as many levels) as possible. Specify the instance variables and methods for each class. The private instance variables of Quadrilateral should be the x-y coordinate pairs for the four endpoints of the Quadrilateral.  
Write a program that instantiates objects of your classes and outputs each object’s area (except Quadrilateral).

---

### Problem 15
(Project: ShapeHierarchy) Implement the Shape hierarchy shown in the following figure. Each TwoDimensionalShape should contain method getArea to calculate the area of the two-dimensional shape. Each ThreeDimensionalShape should have methods getArea and getVolume to calculate the surface area and volume, respectively, of the three-dimensional shape. Create a program that uses an array of Shape references to objects of each concrete class in the hierarchy. In the loop that processes all the shapes in the array, determine whether each shape is a TwoDimensionalShape or a ThreeDimensionalShape. If it’s a TwoDimensionalShape, display its area. If it’s a ThreeDimensionalShape, display its area and volume.  
*Note: A diagram of the Shape hierarchy is referenced but not included here.*

---

### Problem 16
Write a program to create the following GUI. You do not have to provide any functionality.  
*Note: A GUI mockup is referenced but not included here.*  
[ To solve 16-20, you should follow chapter 14: GUI components: Part 1 Book: Deitel]

---

### Problem 17
Write a program to create the following GUI. You do not have to provide any functionality.  
*Note: A GUI mockup is referenced but not included here.*

---

### Problem 18
Write a program to create the following GUI. You do not have to provide any functionality.  
*Note: A GUI mockup is referenced but not included here.*

---

### Problem 19
Write a program to create the following GUI. You do not have to provide any functionality.  
*Note: A GUI mockup is referenced but not included here.*

---

### Problem 20
(Temperature Conversion) Write a temperature-conversion application that converts from Fahrenheit to Celsius. The Fahrenheit temperature should be entered from the keyboard (via a JTextField). A JLabel should be used to display the converted temperature. Use the following formula for the conversion:  
`Celsius = (5/9)*(Fahrenheit-32)`

---

### Problem 21
(Comparing Strings) Write a program that uses String method compareTo to compare two strings input by the user. Output whether the first string is less than, equal to or greater than the second.

---

### Problem 22
(Comparing Portions of Strings) Write a program that uses String method regionMatches to compare two strings input by the user. The application should input the number of characters to be compared and the starting index of the comparison. The application should state whether the strings are equal. Ignore the case of the characters when performing the comparison.

---

### Problem 23
(Displaying Strings in Uppercase and Lowercase) Write an application that inputs a line of text and outputs the text twice—once in all uppercase letters and once in all lowercase letters.

---

### Problem 24
(Searching Strings) Write an application that inputs a line of text and a search character and uses String method indexOf to determine the number of occurrences of the character in the text.

---

### Problem 25
(Tokenizing and Comparing Strings) Write an application that reads a line of text, tokenizes the line using space characters as delimiters and outputs only those words beginning with the letter "b".

---

### Problem 26
(Creating Three-Letter Strings from a Five-Letter Word) Write an application that reads a five-letter word from the user and produces every possible three-letter string that can be derived from the letters of that word. For example, the three-letter words produced from the word “bathe” include “ate,” “bat,” “bet,” “tab,” “hat,” “the” and “tea.”