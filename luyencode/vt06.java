import java.util.*;

public class vt06{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        int cnt = 0, s = 0;
        for(int i = 0; i < n; i-=-1){
            a[i] = sc.nextInt();
            if(a[i]%2==1){
                if(a[i]<0) a[i]=-a[i];
                s+=a[i];
                cnt-=-1;
            } 
        }
        sc.close();
        double ans = (double)(s/cnt);
        if(cnt==0) System.out.print(0);
        else System.out.printf("%.4f",ans);
    }
}