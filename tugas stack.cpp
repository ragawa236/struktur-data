#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void displayMenu() {
    cout << "\nMenu Operasi Stack Buku:" << endl;
    cout << "1. Tambah Buku (push)" << endl;
    cout << "2. Ambil Buku (pop)" << endl;
    cout << "3. Melihat Buku (peek)" << endl;
    cout << "4. Cek Stack (isEmpty)" << endl;
    cout << "5. Melihat jumlah buku (size)" << endl;
    cout << "6. EXIT" << endl;
    cout << "Masukkan pilihan Anda: ";
}

int main() {
    stack<string> bukuStack;
    int pilihan;
    string buku;

    do {
        displayMenu();
        cin >> pilihan;
        cin.ignore(); 

        switch (pilihan) {
            case 1:
                cout << "Masukkan judul buku yang ingin ditambahkan: ";
                getline(cin, buku);
                bukuStack.push(buku);
                cout << "Buku \"" << buku << "\" telah ditambahkan ke stack." << endl;
                getch();
                system("cls");
                break;

            case 2:
                if (!bukuStack.empty()) {
                    cout << "Buku \"" << bukuStack.top() << "\" telah diambil dari stack." << endl;
                    bukuStack.pop();
                } else {
                    cout << "Stack kosong, tidak ada buku untuk diambil." << endl;
                }
                getch();
                system("cls");
                break;

            case 3:
                if (!bukuStack.empty()) {
                    cout << "Buku teratas di stack adalah \"" << bukuStack.top() << "\"." << endl;
                } else {
                    cout << "Stack kosong, tidak ada buku untuk dilihat." << endl;
                }
                getch();
                system("cls");
                break;

            case 4:
                if (bukuStack.empty()) {
                    cout << "Stack kosong." << endl;
                } else {
                    cout << "Stack tidak kosong." << endl;
                }
                getch();
                system("cls");
                break;

            case 5:
                cout << "Jumlah buku dalam stack: " << bukuStack.size() << endl;
                getch();
                system("cls");
                break;

            case 6:
                cout << "Keluar dari program." << endl;
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (pilihan != 6);

    return 0;
}
