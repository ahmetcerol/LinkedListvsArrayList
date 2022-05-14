
#include <chrono>
#include <iostream>
#include "LinkedListHeader.h"
#include "ArrayListHeader.h"
using namespace std;
int iteration = 1000;


int main()
{
    LinkedList* linkedList = new LinkedList();
    ArrayList* arrayList = new ArrayList();


    arrayList->oluþtur();
    linkedList->olustur();



    auto begin = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iteration; i++)
    {
        arrayList->ekle(i, i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
    cout << "-Baglantili Liste ile Ekleme Suresi = >" << elapsed.count() << "mikro-saniye" << endl;
   


    auto begin1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iteration; i++)
    {
        linkedList->ekle(i,i);
    }
    auto end1 = std::chrono::high_resolution_clock::now();
    auto elapsed1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - begin1);
    cout << "-Baglantili Liste ile Ekleme Suresi = >" << elapsed1.count() << "mikro-saniye" << endl;

    auto begin9 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iteration; i++)
    {
        linkedList->basaekle(i);
    }
    auto end9 = std::chrono::high_resolution_clock::now();
    auto elapsed9 = std::chrono::duration_cast<std::chrono::microseconds>(end9- begin9);
    cout << "-Baglantili Liste ile BASA Ekleme Suresi = >" << elapsed9.count() << "mikro-saniye" << endl;


    auto begin4 = std::chrono::high_resolution_clock::now();
    arrayList->guncelle(1, 1);
    auto end4 = std::chrono::high_resolution_clock::now();
    auto elapsed4 = std::chrono::duration_cast<std::chrono::nanoseconds>(end4 - begin4);
    cout << "-Dizi ile Guncelleme Suresi = >" << elapsed4.count() << "nano-saniye" << endl;

    auto begin5 = std::chrono::high_resolution_clock::now();
    linkedList->guncelle(1, 9);
    auto end5 = std::chrono::high_resolution_clock::now();
    auto elapsed5 = std::chrono::duration_cast<std::chrono::nanoseconds>(end5 - begin5);
    cout << "-Baglantili Liste ile Guncelleme Suresi = >" << elapsed5.count() << "nano-saniye" << endl;



    auto begin2 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iteration; i++)
    {
        arrayList->sil(i);
    }
    auto end2 = std::chrono::high_resolution_clock::now();
    auto elapsed2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - begin2);
    cout << "-Dizi ile Silme Suresi = >" << elapsed2.count() << "nano-saniye" << endl;

    auto begin3 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iteration; i++)
    {
        linkedList->sil(i);
    }
    auto end3 = std::chrono::high_resolution_clock::now();
    auto elapsed3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end3 - begin3);
    cout << "-Baglantili Liste ile Silme Suresi = >" << elapsed3.count() << "nano-saniye" << endl;

}



