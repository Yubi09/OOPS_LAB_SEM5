class Thinking {
  private String greenString;
  private String redString;

  public void setString(String greenString, String redString) {
    if (greenString.length() > 10 || redString.length() > 10) {
      System.out.println("String length should be less than 10");
      return;
    }
    this.greenString = greenString;
    this.redString = redString;
  }

  public void pushGreen() {
    System.out.println("Green: " + greenString);
  }

  public void pushRed() {
    System.out.println("Red: " + redString);
  }
}


public class ThinkingCap {
  public static void main(String[] args) {
    Thinking cap = new Thinking();
    cap.setString("Green", "Red");
    cap.pushGreen();
    cap.pushRed();
  }
}