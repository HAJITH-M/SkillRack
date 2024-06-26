import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

class Batsman {
    String name;
    int runs;

    Batsman(String name, int runs) {
        this.name = name;
        this.runs = runs;
    }
}

public class Hello {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the number of batsmen
        int n = scanner.nextInt();
        scanner.nextLine(); // Ignore the newline character after n
        
        List<Batsman> batsmen = new ArrayList<>(n);
        
        for (int i = 0; i < n; ++i) {
            String input = scanner.nextLine();
            String[] parts = input.split(",");
            String name = parts[0].trim();
            int runs = Integer.parseInt(parts[1].trim());
            batsmen.add(new Batsman(name, runs));
        }
        
        Batsman topScorer = batsmen.get(0);
        for (int i = 1; i < n; ++i) {
            if (batsmen.get(i).runs > topScorer.runs) {
                topScorer = batsmen.get(i);
            }
        }
        
        System.out.println(topScorer.name);
        
        scanner.close();
    }
}
