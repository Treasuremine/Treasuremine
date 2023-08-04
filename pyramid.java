public class InvertedHalfPyramid {
  public static void main(String[] args) {
    int rows = 5; // number of rows
    for (int i = rows; i >= 1; i--) { // outer loop for rows
      for (int j = 1; j <= i; j++) { // inner loop for columns
        System.out.print(j + " "); // print number
      }
      System.out.println(); // move to next line
    }
  }
