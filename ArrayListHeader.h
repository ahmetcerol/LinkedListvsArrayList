#pragma once
#include "DataStructures.cpp"
struct ArrayList
{
    int* bas;
    void olu�tur();
    void ekle(int, int);
    void guncelle(int, int);
    void sil(int);
    void yazdir();
    void bosalt();
    int sayac;

};

void ArrayList::olu�tur()
{
    bas = new int[iteration];
    sayac = 0;
}
void ArrayList::ekle(int de�er, int sira) {

    for (int i = sayac - 1; i >= sira; i--)
    {
        bas[i + 1] = bas[i];
    }
    bas[sira] = de�er;
    sayac++;

}
void ArrayList::sil(int sira) {
    if (sayac > 0)
    {
        for (int i = sira; i < sayac; i++)
        {
            bas[i] = bas[i + 1];
        }
        bas[sayac - 1] = 0;
        sayac--;
    }
}
void ArrayList::yazdir() {
    for (int i = 0; i < sayac; i++)
    {
        cout << bas[i] << endl;
    }
}
void ArrayList::bosalt() {

    delete[]bas;
}
void ArrayList::guncelle(int de�er, int sira) {

    for (int i = 0; i < sayac; i++)
    {
        if (bas[i] == sira) {
            bas[sira] = de�er;
        }
    }
}