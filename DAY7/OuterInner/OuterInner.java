package DAY7.OuterInner;

import java.util.Scanner;
import java.time.LocalDate;
import java.time.format.*;


class PersonDetails {
  static int day, month, year;
  Scanner input = new Scanner(System.in);

  public void getDetails() {
    System.out.println("Enter the date of birth in the format (dd/mm/yyyy): ");
    try {
      DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
      LocalDate date = LocalDate.parse(input.next(), formatter);
      day = date.getDayOfMonth();
      month = date.getMonthValue();
      year = date.getYear();
    } catch (Exception e) {
      System.out.println("Invalid date format");
      getDetails();
    }
  }

  public void display() {
    System.out.println("Date of birth: " + day + "/" + month + "/" + year);
  }

  class AgeCalculator {
    public void calculateAge() {
      LocalDate currentDate = LocalDate.now();
      int currentDay = currentDate.getDayOfMonth();
      int currentMonth = currentDate.getMonthValue();
      int currentYear = currentDate.getYear();

      int age = currentYear - year;
      if (currentMonth < month || (currentMonth == month && currentDay < day)) {
        age--;
      }
      System.out.println("Age: " + age);
    }
  }

  static class AgeCalculatorStatic {
    public void calculateAge() {
      LocalDate currentDate = LocalDate.now();
      int currentDay = currentDate.getDayOfMonth();
      int currentMonth = currentDate.getMonthValue();
      int currentYear = currentDate.getYear();

      int age = currentYear - year;
      if (currentMonth < month || (currentMonth == month && currentDay < day)) {
        age--;
      }
      System.out.println("Age: " + age);
    }
  }

}

public class OuterInner {
  public static void main(String[] args) {
    PersonDetails person = new PersonDetails();
    person.getDetails();
    person.display();

    PersonDetails.AgeCalculator age = person.new AgeCalculator();
    age.calculateAge();

    PersonDetails.AgeCalculatorStatic ageStatic = new PersonDetails.AgeCalculatorStatic();
    ageStatic.calculateAge();
  }
  
}
