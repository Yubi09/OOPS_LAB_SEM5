package DAY8.ProducerConsumer;

class Utility {
  int n;
  boolean valueSet = false;

  synchronized int get() throws InterruptedException {
    while (valueSet) {
      System.out.println("Got: " + n);
      valueSet = false;
      notify();
    }
    wait();
    return n;
  }

  synchronized void put(int n) throws InterruptedException {
    if (!valueSet) {
      this.n = n;
      System.out.println("Put: " + n);
      valueSet = true;
      notify();
    }
    wait();
  }
}

class Producer implements Runnable {
  Utility utility;

  Producer(Utility utility) {
    this.utility = utility;
    new Thread(this, "Producer").start();
  }

  public void run() {
    int i = 0;
    while (true) {
      try {
        Thread.sleep(1000);
        utility.put(i++);
      } catch (InterruptedException e) {
        System.out.println("InterruptedException caught");
      }
    }
  }
}

class Consumer implements Runnable {
  Utility utility;

  Consumer(Utility utility) {
    this.utility = utility;
    new Thread(this, "Consumer").start();
  }

  public void run() {
    while (true) {
      try {
        Thread.sleep(1000);
        utility.get();
      } catch (InterruptedException e) {
        System.out.println("InterruptedException caught");
      }
    }
  }
}

public class ProducerConsumer {
  public static void main(String[] args) {
    Utility utility = new Utility();
    new Producer(utility);
    new Consumer(utility);
    System.out.println("Press Ctrl+C to stop.");
  }
}
