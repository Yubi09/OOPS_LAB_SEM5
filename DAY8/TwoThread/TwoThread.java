package DAY8.TwoThread;

import java.util.Scanner;

class MaxThread extends Thread {
  private int arr[];
  Scanner sc = new Scanner(System.in);

  public void setArray() {
    System.out.println("Enter the size of the array: ");
    int n = sc.nextInt();
    arr = new int[n];
    System.out.println("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }
  }

  public void run() {
    int max = arr[0];
    for (int i = 1; i < arr.length; i++) {
      if (arr[i] > max) {
        max = arr[i];
      }
    }
    System.out.println("Max: " + max);
  }
}

class MaxThreadUsingRunnable implements Runnable {
  private int arr[];
  Scanner sc = new Scanner(System.in);

  public void setArray() {
    System.out.println("Enter the size of the array: ");
    int n = sc.nextInt();
    arr = new int[n];
    System.out.println("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }
  }

  public void run() {
    int max = arr[0];
    for (int i = 1; i < arr.length; i++) {
      if (arr[i] > max) {
        max = arr[i];
      }
    }
    System.out.println("Max: " + max);
  }
}

public class TwoThread {
  public static void main(String[] args) {
    MaxThread t = new MaxThread();
    MaxThreadUsingRunnable r = new MaxThreadUsingRunnable();
    Thread t1 = new Thread(r);
    t.setArray();
    r.setArray();
    t.start();
    t1.start();
  }
}
