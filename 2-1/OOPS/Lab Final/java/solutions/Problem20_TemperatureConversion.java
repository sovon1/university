// Problem 20:
// Write a temperature-conversion application that converts from Fahrenheit to Celsius.
// The Fahrenheit temperature should be entered from the keyboard (via a JTextField).
// A JLabel should be used to display the converted temperature.
// Use the following formula for the conversion: Celsius = (5/9)*(Fahrenheit-32)
import javax.swing.*;
import java.awt.event.*;
public class Problem20_TemperatureConversion {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Fahrenheit to Celsius");
        JTextField fahrenheitField = new JTextField(10);
        JLabel resultLabel = new JLabel("Celsius: ");
        JButton convertButton = new JButton("Convert");
        convertButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                try {
                    double f = Double.parseDouble(fahrenheitField.getText());
                    double c = (5.0/9.0)*(f-32);
                    resultLabel.setText("Celsius: " + String.format("%.2f", c));
                } catch (NumberFormatException ex) {
                    resultLabel.setText("Invalid input");
                }
            }
        });
        JPanel panel = new JPanel();
        panel.add(new JLabel("Fahrenheit: "));
        panel.add(fahrenheitField);
        panel.add(convertButton);
        panel.add(resultLabel);
        frame.add(panel);
        frame.setSize(300, 120);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
