package DAY8.HotCold;

import java.util.Scanner;

class TooHot extends Exception {
  TooHot(String message) {
    super(message);
  }

  public String toString() {
    return "TooHotException: " + getMessage();
  }
}

class TooCold extends Exception {
  TooCold(String message) {
    super(message);
  }

  public String toString() {
    return "TooColdException: " + getMessage();
  }
}

class Temperature {
  int temp;
  Scanner sc = new Scanner(System.in);
  public void setTemp() {
    System.out.println("Enter the temperature: ");
    temp = sc.nextInt();
  }
  public void checkTemp() throws TooHot, TooCold {
    if (temp > 40) {
      throw new TooHot("Tempature is too hot");
    }
    else if(temp < 10) {
      throw new TooCold("Temperature is too cold");
    }
    else {
      System.out.println("Temperature is normal");
    }
  }
}

public class HotCold {
  public static void main(String[] args) {
    Temperature t = new Temperature();
    t.setTemp();
    try {
      t.checkTemp();
    } catch (TooHot e) {
      System.out.println(e);
    } catch (TooCold e) {
      System.out.println(e);
    }
  }
}
