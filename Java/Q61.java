// Distance.java - This class acts as the structure or blueprint for a distance.
class Distance {
    int feet;
    int inches;

    // Constructor to initialize the distance object
    public Distance(int feet, int inches) {
        this.feet = feet;
        this.inches = inches;
    }

    // Method to display the distance in a readable format
    public void displayDistance() {
        System.out.println(this.feet + " feet, " + this.inches + " inches");
    }

    // A static method to add two Distance objects and return the result
    public static Distance add(Distance d1, Distance d2) {
        // Create a new Distance object to store the sum
        Distance result = new Distance(0, 0);

        // 1. Add the inches from both distances
        result.inches = d1.inches + d2.inches;

        // 2. Add the feet from both distances
        result.feet = d1.feet + d2.feet;

        // 3. Handle the carry-over from inches to feet
        // If total inches is 12 or more, convert it to feet
        if (result.inches >= 12) {
            // Add the extra feet (e.g., 16 inches / 12 = 1 foot)
            result.feet += result.inches / 12;
            
            // The remaining inches (e.g., 16 inches % 12 = 4 inches)
            result.inches = result.inches % 12;
        }

        return result;
    }
}

// Main.java - The main class to run the program
public class Main {
    public static void main(String[] args) {
        // Create two distance objects
        Distance distance1 = new Distance(8, 9);  // 8 feet, 9 inches
        Distance distance2 = new Distance(3, 7);  // 3 feet, 7 inches

        // Add the two distances using our static method
        Distance sum = Distance.add(distance1, distance2);

        // --- Display the results ---
        System.out.print("First Distance:  ");
        distance1.displayDistance();

        System.out.print("Second Distance: ");
        distance2.displayDistance();

        System.out.print("Sum of Distances: ");
        sum.displayDistance();
    }
}