public class Q8 {
    public static void main(String[] args) {
        long distanceToMoon = 384400000L;  // value must end with 'L' or 'l'
        long population = 8000000000L;     // large number that doesn't fit in int
        long simpleNumber = 12345L;        // small number also valid

        System.out.println("Distance from Earth to Moon: " + distanceToMoon + " meters");
        System.out.println("World population: " + population);
        System.out.println("A simple long number: " + simpleNumber);
    }
}
