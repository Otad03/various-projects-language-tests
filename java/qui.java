import java.util.Scanner;

public class qui{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double sum = 0;
        int count = 0;
        String characters = "";

        System.out.println("Enter up to 4 values (numbers or characters):");
        for (int i = 0; i < 4; i++) {
            System.out.print("Enter value " + (i + 1) + ": ");
            String input = scanner.next();

            try {
                double num = Double.parseDouble(input);
                sum += num;
                count++;
            } catch (NumberFormatException e) {
                characters += input;
            }
        }

        if (count > 0) {
            double average = sum / count;
            System.out.println("Average of numbers: " + average);
        }
        if (!characters.isEmpty()) {
            System.out.println("Combined characters: " + characters);
        }

        scanner.close();
    }
}
