#pragma once
#include <cstddef>
#include <iostream>
using namespace std;


struct Node {
    int deger;
    Node* sonraki;

};
struct  LinkedList
{
    Node* bas;
    void olustur();
    void ekle(int, int);
    void basaekle(int);
    void sonaekle(int);
    void guncelle(int, int);
    void sil(int);
    void yazdir();
    void bosalt();
    int sayac;
};

void LinkedList::olustur() {
    bas = NULL;
    sayac = 0;
}
void LinkedList::sonaekle(int deger) {
    Node* temp = new Node;
    temp->deger = deger;
    temp->sonraki = NULL;
    if (bas == NULL)
    {
        bas = temp;
    }
    else
    {
        Node* last = bas;
        while (last->sonraki != NULL)
        {
            last = last->sonraki;
        }last->sonraki = temp;
    }sayac++;
}
void LinkedList::basaekle(int deðer) {


    if (bas == NULL)
    {
        bas = new struct Node();
        bas->deger = deðer;

    }
    else
    {
        struct Node* new_node = new struct Node();
        new_node->deger = deðer;
        new_node->sonraki = bas;
        bas = new_node;
        sayac++;

    }


}
void LinkedList::ekle(int deðer, int sira) {

    Node* temp = bas;
    Node* currentnode = new Node;
    currentnode->deger = deðer;
    int counter = 0;

    if (sira == 0)
    {
        basaekle(deðer);
    }
    else if (sira > sayac - 1) {
        sonaekle(deðer);
    }
    else
    {
        while (counter != sira)
        {
            counter++;
            if (counter == sira)
            {
                currentnode->sonraki = temp->sonraki;
                temp->sonraki = currentnode;
                sayac++;
            }
            else
            {
                temp = temp->sonraki;
            }

        }
    }


}
void LinkedList::guncelle(int sira, int deðer) {
    Node* temp;
    temp = bas;
    int pos = 0;
    while (temp->sonraki != NULL)
    {
        if (temp->deger == sira)
        {
            temp->deger = deðer;
        }temp = temp->sonraki;
        sayac++;
    }
}
void LinkedList::sil(int sira) {

    Node* temp, * prev;
    temp = bas;
    prev = NULL;

    if (temp == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (temp->deger == sira)
    {
        bas = temp->sonraki;
        return;
    }
    while (temp != NULL && temp->deger != sira)
    {
        prev = temp;
        temp = temp->sonraki;
    }
    if (temp == NULL)
    {
        cout << "Bu sirada ürün bulunmamaktadýr." << endl;
        return;
    }
    prev->sonraki = temp->sonraki;


}
void LinkedList::bosalt() {
    Node* p;
    while (bas)
    {
        p = bas;
        bas = bas->sonraki;
        delete p;
    }
    sayac = 0;
}
void LinkedList::yazdir() {
    Node* tara;
    tara = bas;
    if (!tara)
    {
        cout << "Listede Eleman Bulunmamaktadýr!!!" << endl;
    }
    while (tara)
    {
        cout << tara->deger << " ";
        tara = tara->sonraki;
    }cout << endl;
}