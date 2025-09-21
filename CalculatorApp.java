public class CalculatorApp {
    public static void main(String[] args) {
        int a = 20, b = 5;

        Addition add = new Addition();
        System.out.println("Addition: " + add.perform(a, b));

        Subtraction sub = new Subtraction();
        System.out.println("Subtraction: " + sub.perform(a, b));

        Multiplication mul = new Multiplication();
        System.out.println("Multiplication: " + mul.perform(a, b));

        Division div = new Division();
        System.out.println("Division: " + div.perform(a, b));
    }
}