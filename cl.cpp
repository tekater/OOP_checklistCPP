#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream> // ifstream + ofstream
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <direct.h>

using namespace std;

class list {
    string title;
    string owner;
    int phone;
    string addres;
    string service;
public:
    list(string title = "None" ,string owner = "None",
        int phone = 0, string addres = "Unknown",
        string service = "None"): title{title},owner{owner},
        phone{phone},addres{addres},service{service} {
    }
    string getTitle() {
        return title;
    }
    string getOwner() {
        return owner;
    }
    int getPhone() {
        return phone;
    }
    string getAdd() {
        return addres;
    }
    string getService() {
        return service;
    }
};

int main()
{
    setlocale(0, "");
    srand(time(nullptr));

    list* l = new list[3]{ {"Zaim","Anton",88005553535,"Pushkina 2","credits"},
        {"Yogus","Pavel",89006663636,"Pushkina 2","massage"},
        {"EdaMSK","Maxim",86007773737,"Pushkina 6","food"}
    };

    FILE* f;
    int chose;
     do {
         cout << "[1] - printf\n[2] - scanf\n";
         cin >> chose;
         switch (chose) {
         case 1:
             f = fopen("C:\\Games\\games.txt", "w");
             fprintf(f, "%d\n", "List 1");

             for (int i = 0; i < 3; i++) {
                 fprintf(f, "%s\n%s\n%d\n%s\n%s\n ", l[i].getTitle(),
                     l[i].getOwner(),
                     l[i].getPhone(),
                     l[i].getAdd(),
                     l[i].getService()
                 );
                 fprintf(f, "\n");
             }
             fclose(f);
             break;
         case 2:
             /*f = fopen("C:\\Games\\games.txt", "r");

             for (int i = 0; i < 3; i++) {
                     fscanf(f, "%s\n%s\n%d\n%s\n%s\n ",, l[i].setTitle(),
                     l[i].setOwner(),
                     l[i].setPhone(),
                     l[i].setAdd(),
                     l[i].setService()
                 );
             }
             */

             fclose(f);
             break;
         default:
             chose = 3;
             cout << "\nПока-пока!\n";
             break;
         }
     } while (chose != 3);



}
