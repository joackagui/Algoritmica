import java.util.*;

public class brokenOdometer{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
    int n = scan.nextInt();
    int distance = 0;
    int elapsed = 0;
    for(int i = 0; i < n;i++){
        int speed = scan.nextInt();
        int time = scan.nextInt();
        elapsed = time + elapsed;
        distance = distance + speed*(elapsed-time);
    }
    System.out.println(distance + "miles");
    }
}

public class collatzProblem{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int maxTime = 0;
        for(; a <= b; a++){
            if (collatz(a, 1) > maxTime);
            maxTime = collatz(a, 1);
        }
        System.out.println(a + " " + b + " " + maxTime);
    
    }
}

public static int collatz(int a, int time) {
    if (a % 2 == 0) {
        return collatz(a / 2, time+1);
    } else {
        if (a != 1) {
            return collatz(3 * a + 1, time+1);
        }
    }
    return time;
}