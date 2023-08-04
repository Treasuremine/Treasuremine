int[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// initialize a variable to store the sum
int sum = 0;
// loop through the array
for (int i = 0; i < numbers.length; i++) {
  // add the current element to the sum
  sum += numbers[i];
}
// print the sum
System.out.println(sum); // 55
______
// create a scanner object
Scanner sc = new Scanner(System.in);
// initialize a variable to store the sum
int sum = 0;
// loop for 10 times
for (int i = 1; i <= 10; i++) {
  // ask the user to enter a number
  System.out.print("Enter number " + i + ": ");
  // read the input as an integer
  int num = sc.nextInt();
  // add the input to the sum
  sum += num;
}
// close the scanner
sc.close();
// print the sum
System.out.println("The sum of 10 numbers is: " + sum);
_______
// check if there are exactly 10 arguments
if (args.length == 10) {
  // initialize a variable to store the sum
  int sum = 0;
  // loop through the args[] array
  for (int i = 0; i < args.length; i++) {
    // convert the argument to an integer
    int num = Integer.parseInt(args[i]);
    // add the argument to the sum
    sum += num;
  }
  // print the sum
  System.out.println("The sum of 10 numbers is: " + sum);
}
else {
  // print an error message
  System.out.println("Please enter exactly 10 numbers");
