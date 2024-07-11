#include <iostream>

using namespace std;

int main()
{
    double gdlnyol;
    double serfiyat;
    cout << "gedilen yol yaz; ";
    cin >> gdlnyol;
    cout << "serfiyyat (100km ucun) yaz; ";
    cin >> serfiyat;
    double litrforkm=100/serfiyat;
    double qiymet = litrforkm * gdlnyol;
    cout << "kilometr başı " << litrforkm << "litr" << endl;
    cout << "qiymet: " << qiymet << endl;

    double cem;
    double seh;
    cout << "kitabin umumi sehife sayini daxil edin: ";
    cin >> cem;
    cout << "her gun nece sehife oxudugunu yaz: ";
    cin >> seh;
    double bitis=cem/seh;
    cout << "kitab " << bitis << " gun sonra bitecek" << endl;


     double uzunluq, en, hundurluk;
     cout << "Otağın uzunluğunu yaz: ";
     cin >> uzunluq;
     cout << "Otağın enini yaz: ";
     cin >> en;
     cout << "Otağın hündürlüyünü yaz : ";
     cin >> hundurluk;

     double sahesi = 2 * (uzunluq * hundurluk + en * hundurluk);
     cout << "Otağın divarları üçün lazım olan oboyun ərazi: " << sahesi << " kvadrat metr" << endl;

     double otaqsayi, zibilqabi, skaf, tv;
     cout << "otaqlarin sayi: ";cin >> otaqsayi;
     zibilqabi = otaqsayi;
     skaf = otaqsayi;
     tv = otaqsayi;
     cout << "Toplam olaraq almaq lazım olanlar:\n";
     cout << "-------------------------------\n";
     cout << "Zibil qabı sayı: " << zibilqabi << endl;
     cout << "Şkaf sayı: " << skaf << endl;
     cout << "Televizor sayı: " << tv << endl;
    
     double bal12, bal11{}, bal10{}, bal9{}, bal8{};
     cout << "neqeder (12,11,10,9,8) baliniz var?: ";cin >> bal12, bal11, bal10, bal9, bal8;
     double q12 = 5, q11 = 4, q10 = 3, q9 = 2, q8 = 1;
     double cembal=(bal12*q12)+ (bal11 * q11)+ (bal10 * q10)+ (bal9 * q9)+ (bal8 * q8);
     cout << "sizin umumilikde " << cembal << " qiziliniz var";





}
