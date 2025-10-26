#include <iostream>
#define f1(i,l,r) for(int i = l; i <= r; i++)
#define f2(i,r,l) for(int i = r; i >= l; i--)
using namespace std;

int main(){
    int n, m, a[100][100];
    cin>>n>>m;
    //Nhập ma trận
    int trai = 0, phai = m - 1, tren = 0, duoi = n - 1;
    int so = 1;
    while(so <= n*m){ //Chạy đến khi nào "số" lớn hơn số phần tử trong ma trận thì ngừng lại
        //In lần lượt từ trái sang phải, từ hàng đầu tiên trở xuống
        f1(i,trai,phai){
            a[tren][i] = so++;
        }
        tren++; //Hàng sẽ tăng đến vị trí trung tâm sau mỗi vòng lặp
        //In lần lượt từ trên xuống dưới, phía bên tay phải
        f1(i,tren,duoi){
            a[i][phai] = so++;
        }
        phai--; //Cột sẽ thụt vào vị trí trung tâm sau mỗi vòng lặp
        if(tren <= duoi){
            //In lần lượt từ phải qua trái, từ hàng cuối cùng trờ lên
            f2(i,phai,trai){
                a[duoi][i] = so++;
            }
            duoi--; //Hàng sẽ giảm về vị trí trung tâm sau mỗi vòng lặp
        }
        if(trai <= phai){
            f2(i,duoi,tren){
                a[i][trai] = so++;
            }
            trai++; //Cột sẽ tăng vào tâm sau mỗi vòng lặp
        }
    }
    //In ma trận
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}