package DAY7.InterfaceDept;

import java.util.Scanner;

interface Department {
  String deptName = "CSE";
  String deptHead = "SM";

  public void getData();

  public void printData();
}

class Hostel {
  protected String hostelName;
  protected String hostelLocation;
  protected int noOfRooms;
  Scanner sc = new Scanner(System.in);

  public void setHostel() {
    System.out.print("Enter the hostel name: ");
    hostelName = sc.next();
    System.out.print("Enter the hostel location: ");
    hostelLocation = sc.next();
    System.out.print("Enter the number of rooms: ");
    noOfRooms = sc.nextInt();
  }

  public void printHostel() {
    System.out.println("Hostel name: " + hostelName);
    System.out.println("Hostel location: " + hostelLocation);
    System.out.println("Number of rooms: " + noOfRooms);
  }

}

class Student extends Hostel implements Department {
  protected String studentName;
  protected int studentRollNo;
  protected String studentDept;
  protected String studentCourse;

  public void getData() {
    System.out.print("Enter the student name: ");
    studentName = sc.next();
    System.out.print("Enter the student roll number: ");
    studentRollNo = sc.nextInt();
    System.out.print("Enter the student department: ");
    studentDept = sc.next();
    System.out.print("Enter the student course: ");
    studentCourse = sc.next();
    super.setHostel();
  }

  public void printData() {
    System.out.println("Student name: " + studentName);
    System.out.println("Student roll number: " + studentRollNo);
    System.out.println("Student department: " + studentDept);
    System.out.println("Student course: " + studentCourse);
    super.printHostel();
  }
}

public class InterfaceDept {
  public static void main(String[] args) {
    Student student = new Student();
    student.getData();
    student.printData();
  }
}
