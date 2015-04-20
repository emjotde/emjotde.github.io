import java.util.Arrays;

public class Student {
  private String firstName = "";
  private String surname = "";

  public String getName() {
    return firstName + " " + surname;
  }

  public Student(String firstName, String surname) {
    this.firstName = firstName;
    this.surname = surname;
    this.studentId = id++;
  }

  private int[] marks = new int[100];
  private int n = 0;

  public void addMark(int mark) {
    marks[n++] = mark;
  }

  public Student(String firstName, String surname, int[] marks) {
    this(firstName, surname);
    System.arraycopy(marks, 0, this.marks, 0, marks.length);
    this.n = marks.length;
  }

  public int[] getMarks() {
    return java.util.Arrays.copyOf(marks, marks.length); 
  }

  private static int id; // = 0;
  static {
    id = 0;
  }

  private int studentId = 0;

  private static int numberOfAllStudents() {
    return id;
  }

  public String toString() {
    String out = getName() + ": ";

    for (int i = 0; i < n; i++) {
      out += marks[i] + ", ";
    }

    return out;
  }

  public boolean equals(Student other) {
    return getName().equals(other.getName());
  }

  public static void main(String[] args) {
    //Student s0 = new Student();
    Student s1 = new Student("Jan", "Kowalski");
    s1.addMark(3);
    s1.addMark(4);
    System.out.println(s1);

    s1.getMarks()[1] = 5;
    System.out.println(s1);

    Student[] students = { 
      s1, 
      new Student("A", "B"), 
      new Student("C", "D", new int[]{1, 2, 3}) 
    };

    for (Student student: students) {
      System.out.println(student);
    }

    System.out.println(Student.numberOfAllStudents());

    Student s2 = new Student("Jan", "Kowalski");
    System.out.println(s1 == s2);
    System.out.println(s1.equals(s2));
  }

}
