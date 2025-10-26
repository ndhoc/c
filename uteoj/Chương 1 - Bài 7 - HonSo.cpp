#include <iostream>
using namespace std;

struct honSo{
    int pNguyen;
    int pTu;
    int pMau;
};

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

void rutGon (int &tuSo, int &mauSo){
    int ucln = gcd(tuSo, mauSo);
    tuSo /= ucln;
    mauSo /= ucln;
    if(mauSo < 0){
        tuSo = -tuSo;
        mauSo = -mauSo;
    }
}

void chuyenHonSoSangPhanSo(const honSo &hs, int &tuSo, int &mauSo){
    tuSo = hs.pNguyen * hs.pMau + hs.pTu;
    mauSo = hs.pMau;
    rutGon(tuSo, mauSo);
}

void chuyenPhanSoSangHonSo(honSo &hs, int tuSo, int mauSo){
    rutGon(tuSo, mauSo);
    hs.pNguyen = tuSo / mauSo;
    hs.pTu = tuSo % mauSo;
    hs.pMau = mauSo;
}

honSo tong2HonSo(const honSo &A, const honSo &B){
    int tuA, mauA, tuB, mauB;
    chuyenHonSoSangPhanSo(A, tuA, mauA);
    chuyenHonSoSangPhanSo(B, tuB, mauB);

    int mauChung = mauA * mauB / gcd(mauA, mauB);
    int tuTong = tuA * (mauChung / mauA) + tuB * (mauChung / mauB);
    
    honSo rs;
    chuyenPhanSoSangHonSo(rs, tuTong, mauChung);
    return rs;
}

honSo tich2HonSo(const honSo &A, const honSo &B){
    int tuA, mauA, tuB, mauB;
    chuyenHonSoSangPhanSo(A, tuA, mauA);
    chuyenHonSoSangPhanSo(B, tuB, mauB);

    int mau = mauA * mauB;
    int tu = tuA * tuB;

    honSo rs;
    chuyenPhanSoSangHonSo(rs, tu, mau);
    return rs;
}

void inPhanSo (const honSo &hs){
    int tuSo, mauSo;
    chuyenHonSoSangPhanSo(hs, tuSo, mauSo);
    cout << tuSo << "/" << mauSo << endl;
}

void inHonSo(honSo hs){
    if(hs.pTu == 0) cout << hs.pNguyen << endl;
    else cout << hs.pNguyen << "+" << hs.pTu << "/" << hs.pMau << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);      

    honSo a, b;
    cin >> a.pNguyen >> a.pTu >> a.pMau;
    cin >> b.pNguyen >> b.pTu >> b.pMau;

    inPhanSo(a);
    inPhanSo(b);

    honSo tong = tong2HonSo(a,b);
    honSo tich = tich2HonSo(a,b);

    inHonSo(tong);
    inHonSo(tich);


    return 0;
}


