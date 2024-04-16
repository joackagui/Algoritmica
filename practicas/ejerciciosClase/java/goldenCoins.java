package ejerciciosClase.java;
import java.util.Scanner;
 
public class goldenCoins {
   public static void main(String[] args) {
       try (Scanner scan = new Scanner(System.in)) {
        while(scan.hasNext()){
               int days = scan.nextInt();
               int coins = 0;
               int n = 1;
               int contador = days;
               if(days != 0){
                   for (; contador > 0; n++) {
                       contador = contador - n;
                   }
                   n = n-1;
                   for (int i = 1; i <= n; i++){
                       coins = coins + (i*i);
                   }
                   coins = coins + contador*(n);
                   System.out.println(days + " " + coins);
               }
           }
    }
   }
}
