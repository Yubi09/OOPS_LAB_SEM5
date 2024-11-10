package DAY7.Vehicle;

import java.util.Scanner;

class Vehicle {
  protected int licenseNumber;
  protected int speed;
  protected String color;
  protected String ownerName;
  Scanner sc = new Scanner(System.in);

  Vehicle() {
    licenseNumber = -1;
    speed = -1;
    color = "undefined";
    ownerName = "undefined";
  }

  Vehicle(int licenseNumber, int speed, String color, String ownerName) {
    this.licenseNumber = licenseNumber;
    this.speed = speed;
    this.color = color;
    this.ownerName = ownerName;
  }

  public void setData() {
    System.out.print("Enter the license number: ");
    licenseNumber = sc.nextInt();
    System.out.print("Enter the speed: ");
    speed = sc.nextInt();
    System.out.print("Enter the color: ");
    color = sc.next();
    System.out.print("Enter the owner name: ");
    ownerName = sc.next();
  }

  public void showData() {
    System.out.println("License number: " + licenseNumber);
    System.out.println("Speed: " + speed);
    System.out.println("Color: " + color);
    System.out.println("Owner name: " + ownerName);
  }
}

class Bus extends Vehicle {
  private int routeNumber;

  Bus() {
    routeNumber = -1;
  }

  Bus(int licenseNumber, int speed, String color, String ownerName, int routeNumber) {
    super(licenseNumber, speed, color, ownerName);
    this.routeNumber = routeNumber;
  }

  public void setData() {
    super.setData();
    System.out.print("Enter the route number: ");
    routeNumber = sc.nextInt();
  }

  public void showData() {
    super.showData();
    System.out.println("Route number: " + routeNumber);
  }
}

class Car extends Vehicle {
  private String manufacturerName;

  Car() {
    manufacturerName = "undefined";
  }

  Car(int licenseNumber, int speed, String color, String ownerName, String manufacturerName) {
    super(licenseNumber, speed, color, ownerName);
    this.manufacturerName = manufacturerName;
  }

  public void setData() {
    super.setData();
    System.out.print("Enter the manufacturer name: ");
    manufacturerName = sc.next();
  }

  public void showData() {
    super.showData();
    System.out.println("Manufacturer name: " + manufacturerName);
  }
}

public class vehicleInheritance {
  public static void main(String[] args) {
    Bus bus1 = new Bus();
    bus1.setData();
    bus1.showData();
    System.out.println();
    Bus bus2 = new Bus(1234, 60, "Red", "John", 123);
    bus2.showData();
    System.out.println();
    Car car = new Car();
    car.setData();
    car.showData();
    System.out.println();
    Car car2 = new Car(5678, 80, "Blue", "Jane", "Toyota");
    car2.showData();
  }
}
