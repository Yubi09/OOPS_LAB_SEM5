import java.util.Scanner;

class Lot {
    private int lottery;
    private int guess;

    public void setNumbers() {
        lottery = (int) (Math.random() * 100);
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your lottery pick (two digits): ");
        guess = input.nextInt();
        input.close();
    }

    public void checkNumbers() {
        int lotteryDigit1 = lottery / 10;
        int lotteryDigit2 = lottery % 10;

        int guessDigit1 = guess / 10;
        int guessDigit2 = guess % 10;

        System.out.println("The lottery number is " + lottery);

        if (guess == lottery) {
            System.out.println("Exact match: you win Rs.10000");
        } else if (guessDigit2 == lotteryDigit1 && guessDigit1 == lotteryDigit2) {
            System.out.println("Reverse Match: you win Rs.3000");
        } else if (guessDigit1 == lotteryDigit1 || guessDigit1 == lotteryDigit2 || guessDigit2 == lotteryDigit1
                || guessDigit2 == lotteryDigit2) {
            System.out.println("Match one digit: you win Rs.1000");
        } else {
            System.out.println("Sorry, no match");
        }
    }
}

public class Lottery {
    public static void main(String[] args) {
        Lot lot = new Lot();
        lot.setNumbers();
        lot.checkNumbers();
    }
}