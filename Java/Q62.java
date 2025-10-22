/*
 Problem Statement 
 Write a Java program to add two complex numbers by parsing them from string representations and passing the resulting objects to a function. The program should handle various formats of complex number input strings.
*/

import java.util.regex.*;

/**
 * Represents a complex number with real and imaginary parts.
 */
class Complex {
    /**
     * The real part of the complex number.
     */
    double real;
    /**
     * The imaginary part of the complex number.
     */
    double imag;
    
    /**
     * Constructs a new Complex object with the given real and imaginary parts.
     * @param r The real part of the complex number.
     * @param i The imaginary part of the complex number.
     */
    Complex(double r, double i) {
        real = r;
        imag = i;
    }
    
    /**
     * Parses a string representation of a complex number and returns a Complex object.
     * Supports various formats like "3+4i", "5", "-2i", "i", "-i".
     * @param str The string to parse.
     * @return A Complex object representing the parsed complex number.
     * @throws IllegalArgumentException If the string format is invalid.
     */
    static Complex parseComplex(String str) {
        str = str.trim().replaceAll("\\s+", "");
        
        Pattern pattern = Pattern.compile("^([+-]?\\d+\\.?\\d*)([+-]\\d+\\.?\\d*)[iI]$|^([+-]?\\d+\\.?\\d*)[iI]$|^([+-]?\\d+\\.?\\d*)$|^([+-]?)[iI]$");
        Matcher matcher = pattern.matcher(str);
        
        if (!matcher.find()) {
            throw new IllegalArgumentException("Invalid complex number format: " + str);
        }
        
        double r = 0, i = 0;
        
        if (matcher.group(1) != null && matcher.group(2) != null) {
            r = Double.parseDouble(matcher.group(1));
            i = Double.parseDouble(matcher.group(2));
        }
        else if (matcher.group(3) != null) {
            i = Double.parseDouble(matcher.group(3));
        }
        else if (matcher.group(4) != null) {
            r = Double.parseDouble(matcher.group(4));
        }
        else if (matcher.group(5) != null) {
            i = matcher.group(5).equals("-") ? -1.0 : 1.0;
        }
        
        return new Complex(r, i);
    }
    
    /**
     * Adds two complex numbers and returns the result as a new Complex object.
     * @param c1 The first complex number.
     * @param c2 The second complex number.
     * @return A new Complex object representing the sum of the two input complex numbers.
     */
    static Complex add(Complex c1, Complex c2) {
        return new Complex(c1.real + c2.real, c1.imag + c2.imag);
    }
    
    /**
     * Displays the complex number in the format "real + imagi" or "real - imagi" to the console.
     */
    void display() {
        if (imag >= 0)
            System.out.println(real + " + " + imag + "i");
        else
            System.out.println(real + " - " + (-imag) + "i");
    }
}

/**
 * This class demonstrates the parsing and addition of complex numbers.
 */
public class ComplexAddition {
    /**
     * Main method to test the Complex number parsing and addition.
     * It includes various test cases for parsing and demonstrates the addition of two complex numbers.
     * @param args Command line arguments (not used).
     */
    public static void main(String[] args) {
        String[] testCases = {
            "3+4i",
            "5-2i",
            "-3+7i",
            "-4-6i",
            "5",
            "3.5+2.5i",
            "i",
            "-i",
            "0+5i",
            "7+0i",
            "2.5 + 3.7i"
        };
        
        System.out.println("Testing parser with various formats:\n");
        for (String test : testCases) {
            try {
                Complex c = Complex.parseComplex(test);
                System.out.print("Input: " + test + " -> ");
                c.display();
            } catch (Exception e) {
                System.out.println("Input: " + test + " -> " + e.getMessage());
            }
        }
        
        System.out.println("\nAdding two complex numbers:");
        Complex c1 = Complex.parseComplex("3.5+2.5i");
        Complex c2 = Complex.parseComplex("1.5-4.5i");
        
        System.out.print("First: ");
        c1.display();
        System.out.print("Second: ");
        c2.display();
        
        Complex sum = Complex.add(c1, c2);
        System.out.print("Sum: ");
        sum.display();
    }
}
