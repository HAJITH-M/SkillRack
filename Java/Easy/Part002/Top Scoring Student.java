import java.util.*;

class Student {
    String name;
    int maths;
    int physics;
    int chemistry;

    public Student(String name, int maths, int physics, int chemistry) {
        this.name = name;
        this.maths = maths;
        this.physics = physics;
        this.chemistry = chemistry;
    }
}

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character after the integer input

        List<Student> students = new ArrayList<>();

        for (int i = 0; i < n; ++i) {
            String input = scanner.nextLine();
            String[] parts = input.split(":");

            String name = parts[0];
            int maths = Integer.parseInt(parts[1]);
            int physics = Integer.parseInt(parts[2]);
            int chemistry = Integer.parseInt(parts[3]);

            students.add(new Student(name, maths, physics, chemistry));
        }

        Student topScorer = students.get(0);
        int topScore = topScorer.maths + topScorer.physics + topScorer.chemistry;

        for (int i = 1; i < n; ++i) {
            Student currentStudent = students.get(i);
            int totalMarks = currentStudent.maths + currentStudent.physics + currentStudent.chemistry;
            if (totalMarks > topScore) {
                topScorer = currentStudent;
                topScore = totalMarks;
            }
        }

        System.out.println(topScorer.name);
        scanner.close();
    }
}
