import java.util.Scanner;
public class b6{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        sc.close();
        System.out.printf("%.2f%n", Math.sqrt(a));
    }
}