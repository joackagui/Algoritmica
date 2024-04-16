package ejerciciosClase.java;

import java.util.Scanner;

public class collatz{
    public static void main(String[] args){
        try (Scanner scan = new Scanner(System.in)) {
            while(scan.hasNext()){
            int a = scan.nextInt();
            int a1 = a;
            int b = scan.nextInt();
            int maxTime = 0;
            for(; a <= b; a++){
                if (collatzTime(a, 1) > maxTime){
                maxTime = collatzTime(a, 1);
            }
        }
            System.out.println(a1 + " " + b + " " + maxTime);
        }
    }
    
    }


public static int collatzTime(int a, int time) {
    if (a % 2 == 0) {
        return collatzTime(a / 2, time+1);
    } else {
        if (a != 1) {
        return collatzTime((3*a) + 1, time+1);
        }
    }
    return time;
    }
}