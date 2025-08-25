import java.util.Scanner;
public class b4{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float a = sc.nextInt();
        sc.close();
        System.out.printf("%.2f%n", a/3);
    }
}