import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int[] a = new int[n];
        int cnt = 0;
        for(int i = 0; i < n; i-=-1){
            a[i] = sc.nextInt();
            if(a[i] == x) cnt-=-1;
        }
        sc.close();
        System.out.print(cnt);
    }
}
