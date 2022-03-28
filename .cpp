#include<iostream>
#include<time.h>
#include<iomanip>
#include<Windows.h>
#include<stdlib.h>
#include <algorithm>
#include<mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;
void Zvuk(int a){if (a == 1)PlaySound(TEXT("D:\\ggg.wav"), NULL, SND_SYNC);
else if (a == 2)
PlaySound(TEXT("D\\ggg.wav"), NULL, SND_SYNC);
else if (a == 3)
PlaySound(TEXT("D\\ggg.mav"), NULL, SND_SYNC);
//else if(a==4)
//PlaySound(TEXT("D\\ggg.wav"), NULL, SND_SYNC);
}
int** Create4x4()
{
    int** arr;  arr = new int* [5]; //СОЗДАЁМ МАССИВ ОБЫЧНЫЙ ОДНОМЕРНЫЙ ДЛИНОЙ В КОЛ-ВО СТРОК
    for (int i = 0; i < 5; i++)
    {
        arr[i] = new int[5];
    } //КАЖДЫЙ ЭЛЕМЕНТ ВЕРХНЕГО МАССИВА ДЕЛАЕМ МАССИВОМ ДЛИНОЙ КАК КОЛИЧЕСТВО СТОЛБЦОВ, НУ ТИПА ДЛИНА СТРОКИ
    return arr; //ВОЗВРАЩАЕМ ЭТОТ МАССИВ ЧТОБЫ В ЛЮБОМ МЕСТЕ КОДА ВЫДЕЛИТЬ НУЖНОЕ КОЛИЧЕСТВО ПАМЯТИ
}
int** Create6x6()
{
    int** arr;  arr = new int* [7]; //СОЗДАЁМ МАССИВ ОБЫЧНЫЙ ОДНОМЕРНЫЙ ДЛИНОЙ В КОЛ-ВО СТРОК
    for (int i = 0; i < 7; i++)
    {
        arr[i] = new int[7];
    } //КАЖДЫЙ ЭЛЕМЕНТ ВЕРХНЕГО МАССИВА ДЕЛАЕМ МАССИВОМ ДЛИНОЙ КАК КОЛИЧЕСТВО СТОЛБЦОВ, НУ ТИПА ДЛИНА СТРОКИ
    return arr; //ВОЗВРАЩАЕМ ЭТОТ МАССИВ ЧТОБЫ В ЛЮБОМ МЕСТЕ КОДА ВЫДЕЛИТЬ НУЖНОЕ КОЛИЧЕСТВО ПАМЯТИ
}
int** Create8x8()
{
    int** arr;  arr = new int* [9]; //СОЗДАЁМ МАССИВ ОБЫЧНЫЙ ОДНОМЕРНЫЙ ДЛИНОЙ В КОЛ-ВО СТРОК
    for (int i = 0; i < 9; i++)
    {
        arr[i] = new int[9];
    } //КАЖДЫЙ ЭЛЕМЕНТ ВЕРХНЕГО МАССИВА ДЕЛАЕМ МАССИВОМ ДЛИНОЙ КАК КОЛИЧЕСТВО СТОЛБЦОВ, НУ ТИПА ДЛИНА СТРОКИ
    return arr; //ВОЗВРАЩАЕМ ЭТОТ МАССИВ ЧТОБЫ В ЛЮБОМ МЕСТЕ КОДА ВЫДЕЛИТЬ НУЖНОЕ КОЛИЧЕСТВО ПАМЯТИ
}
int** Create100000x1000000() {
    int** arr; arr = new int* [15];
    for (int i = 0; i < 15; i++)
    {
        arr[i] = new int[15];
    }
    return arr;
}
void Peremeshka4x4(int** arr)
{
    for (int row = 1; row < 5; row++)
    {

        for (int column = 1; column < 5; column++)//
        {
            int temp = arr[row][column];
            int val = rand() % 5;
            if (val > 0)
            {
                arr[row][column] = arr[val][column];
                arr[val][column] = temp;
            }
        }
    }
    for (int row = 1; row < 4; row++)
    {

        for (int column = 1; column < 4; column++)
        {
            int temp = arr[row][column];
            int val = rand() % 5;
            if (val != 0)
            {
                arr[row][column] = arr[row][val];
                arr[row][val] = temp;
            }
        }
    }
}
void Peremeshka6x6(int** arr)
{
    for (int row = 1; row < 7; row++)
    {
        if (row != 0)
            for (int column = 1; column < 7; column++)
            {
                int temp = arr[row][column];
                int val = rand() % 7;
                if (val > 0)
                {
                    arr[row][column] = arr[val][column];
                    arr[val][column] = temp;
                }
            }
    }
    for (int row = 1; row < 7; row++)
    {
        if (row != 0)
            for (int column = 1; column < 7; column++)
            {
                int temp = arr[row][column];
                int val = rand() % 7;
                if (val > 0)
                {
                    arr[row][column] = arr[row][val];
                    arr[row][val] = temp;
                }
            }
    }
}
void Peremeshka8x8(int** arr)
{
    for (int row = 1; row < 9; row++)
    {
        if (row != 0)
            for (int column = 1; column < 9; column++)
            {
                int temp = arr[row][column];
                int val = rand() % 9;
                if (val > 0)
                {
                    arr[row][column] = arr[val][column];
                    arr[val][column] = temp;
                }
            }
    }
    for (int row = 1; row < 9; row++)
    {
        if (row != 0)
            for (int column = 1; column < 9; column++)
            {
                int temp = arr[row][column];
                int val = rand() % 9;
                if (val > 0)
                {
                    arr[row][column] = arr[row][val];
                    arr[row][val] = temp;
                }
            }
    }
}
void Peremeshka10000x10000(int** arr) {
    for (int row = 1; row < 15; row++)
    {
        if (row != 0) {
            for (int column = 1; column < 15; column++)
            {
                int temp = arr[row][column];
                int val = rand() % 15;
                if (val > 0) {
                    arr[row][column] = arr[row][val];
                    arr[row][val] = temp;
                }
            }
            for (int row = 1; row < 15; row++)
            {
                if(row!=0)
                    for (int column = 1; column < 15; column++)
                    {
                        int temp = arr[row][column];
                        int val = rand() % 15;
                        if (val > 0)
                        {
                            arr[row][column] = arr[row][val];
                            arr[row][val] = temp;
                        }
                    }
            }
        }
    }
}
void ZAP4x4(int** arr)
{
    arr[0][0] = 0;
    for (int i = 0; i < 1; i++)
    {
        int something = 1;
        for (int j = 1; j < 5; j++)
        {
            arr[i][j] = something;
            something++;
        }
    }
    int something = 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            arr[i][j] = something;
            something++;
        }
    }
    int something1 = 1;
    for (int i = 1; i < 5; i = i + 2)
    {
        for (int j = 1; j < 5; j++)
        {
            arr[i][j] = something1;
            arr[i + 1][j] = something1;
            arr[i][j + 1] = something1;
            something1++;
        }
    }
}
void ZAP6x6(int** arr)
{
    arr[0][0] = 0;
    for (int i = 0; i < 1; i++)
    {
        int something = 1;
        for (int j = 1; j < 7; j++)
        {
            arr[i][j] = something;
            something++;
        }
    }
    int something = 1;
    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            arr[i][j] = something;
            something++;
        }
    }
    int something1 = 1;
    for (int i = 1; i < 7; i = i + 2)
    {
        for (int j = 1; j < 7; j++)
        {
            arr[i][j] = something1;
            arr[i + 1][j] = something1;
            arr[i][j + 1] = something1;
            something1++;
        }
    }
}
void ZAP8x8(int** arr)
{
    arr[0][0] = 0;
    for (int i = 0; i < 1; i++)
    {
        int something = 1;
        for (int j = 1; j < 9; j++)
        {
            arr[i][j] = something;
            something++;
        }
    }
    int something = 1;
    for (int i = 1; i < 9; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            arr[i][j] = something;
            something++;
        }
    }
    int something1 = 1;
    for (int i = 1; i < 9; i = i + 2)
    {
        for (int j = 1; j < 9; j++)
        {
            arr[i][j] = something1;
            arr[i + 1][j] = something1;
            arr[i][j + 1] = something1;
            something1++;
        }
    }
}
void ZAP10000x10000(int** arr) {
    arr[0][0] = 0;
    for (int i = 0; i < 1; i++)
    {
        int something=1;
        for (int j = 1; j < 15; j++)
        {
            arr[i][j] = something;
            something++;
        }
        int something1 =1;
        for (int i = 1; i < 15; i+2)
        {
            for (int j = 1; j < 15; j++)
            {
                arr[i][j] = something1;
                arr[i + 1][j] = something1;
                arr[i][j + 1] = something1;
                something1++;
            }
        }
    }
}
void Show4x4(int** arr)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            (cout << setw(3) << arr[i][j] << " ");
        }
        cout << "\n";
    }
    cout << "\n";
}
void Show6x6(int** arr)
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void Show8x8(int** arr)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void Show10000x1000(int** arr) {
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void Hide4x4(int** arr1, int first, int second)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i][j] == 0 && i != 0)
                cout << setw(3) << " " << " ";
            else if (i == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i == first && j == second)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j != 0)
                cout << setw(3) << "-" << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void Hide6x6(int** arr1, int first, int second)
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr1[i][j] == 0 && i != 0)
                cout << setw(3) << " " << " ";
            else if (i == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i == first && j == second)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j != 0)
                cout << setw(3) << "-" << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void Hide8x8(int** arr1, int first, int second)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr1[i][j] == 0 && i != 0)
                cout << setw(3) << " " << " ";
            else if (i == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i == first && j == second)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j != 0)
                cout << setw(3) << "-" << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void Hide10000(int** arr1,int first,int second) {
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (arr1[i][j] == 0 && i != 0)
                cout << setw(3) << " " << " ";
            else if (i == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != first && j == second)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j != 0)
                cout << setw(3) << "-" << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
int Proverka4x4(int** arr)
{
    int a = 0;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (arr[i][j] == 0)
            {
                a++;
            }
        }
    }
    return a;
}
int Proverka6x6(int** arr)
{
    int a = 0;
    for (int i = 1; i < 7; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            if (arr[i][j] == 0)
            {
                a++;
            }
        }
    }
    return a;
}
int Proverka8x8(int** arr)
{
    int a = 0;
    for (int i = 1; i < 9; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            if (arr[i][j] == 0)
            {
                a++;
            }
        }
    }
    return a;
}
int Proverka1000x1000(int** arr) {
    int a = 0;
    for (int i = 1; i < 15; i++)
    {
        for (int j = 1; j < 15; i++)
        {
            if (arr[i][j] == 0) {
                a++;
            }
        }
        return a;
    }
}
void HideV2_4x4(int** arr1, int first, int second, int first1, int second1)
{
    int res = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i][j] == 0 && i != 0)
                cout << setw(3) << " " << " ";
            else if (i == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i == first && j == second || i == first1 && j == second1)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j != 0)
                cout << setw(3) << "-" << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    if (arr1[first][second] == arr1[first1][second1])
    {
        arr1[first][second] = 0;
        arr1[first1][second1] = 0;
        Zvuk(2);
    }
    if (arr1[first][second] != arr1[first1][second1])
        Zvuk(1);
}
void HideV2_6x6(int** arr1, int first, int second, int first1, int second1)
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr1[i][j] == 0 && i != 0)
                cout << setw(3) << " " << " ";
            else if (i == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i == first && j == second || i == first1 && j == second1)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j != 0)
                cout << setw(3) << "-" << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    if (arr1[first][second] == arr1[first1][second1])
    {
        arr1[first][second] = 0;
        arr1[first1][second1] = 0;
        Zvuk(2);
    }
    if (arr1[first][second] != arr1[first1][second1])
        Zvuk(1);
}
void HideV2_8x8(int** arr1, int first, int second, int first1, int second1)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr1[i][j] == 0 && i != 0)
                cout << setw(3) << " " << " ";
            else if (i == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i == first && j == second || i == first1 && j == second1)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j != 0)
                cout << setw(3) << "-" << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    if (arr1[first][second] == arr1[first1][second1])
    {
        arr1[first][second] = 0;
        arr1[first1][second1] = 0;
        Zvuk(2);
    }
    if (arr1[first][second] != arr1[first1][second1])
        Zvuk(1);
}
void HideV2_10000x1000(int** arr1, int first, int second, int first1, int second1) {
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (arr1[i][j] == 0 && i != 0)
                cout << setw(3) << " " << " ";
            else if (i == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i != 0 && j == 0)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i == first && j == second || i == first1 && j == second1)
                cout << setw(3) << arr1[i][j] << " ";
            else if (i!= 0 && j != 0)
                cout << setw(3) << "-" << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    if (arr1[first][second] == arr1[first1][second]) {
        arr1[first][second] = 0;
        arr1[first1][second1] = 0;
        Zvuk(2);
        if (arr1[first][second] != arr1[first1][second])
            Zvuk(1);
    }
}
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    time_t start, end;
    time(&start);
    int width, height;
    int first, second, first1, second1;
    int choice;
    int idk = 0;
    int returned = 0;
    int dec; cout << "1) 4x4\n2) 6x6\n3) 8x8\n 1000000x100000)\n4"; cin >> dec;
    int** arr;
    switch (dec)//меню 
    {
    case(1):
        arr = Create4x4();
        ZAP4x4(arr);
        Peremeshka4x4(arr);
        do {
            cout << "Введите значение строки для открытия: "; cin >> first;
            cout << "Введите значение столбца для открытия: "; cin >> second;
            Hide4x4(arr, first, second);
            cout << "Введите значение строки для открытия: "; cin >> first1;
            cout << "Введите значение столбца для открытия: "; cin >> second1;
            HideV2_4x4(arr, first, second, first1, second1);
            returned = Proverka4x4(arr);
            idk += 2;
        } while (returned != 16);
        cout << endl << "ВЫ ПОБЕДИЛИ!!!!" << endl;
        Zvuk(3);
        break;
    case(2):
        arr = Create6x6();
        ZAP6x6(arr);
        Peremeshka6x6(arr);
        do {
            cout << "Введите значение строки для открытия: "; cin >> first;
            cout << "Введите значение столбца для открытия: "; cin >> second;
            Hide6x6(arr, first, second);
            cout << "Введите значение строки для открытия: "; cin >> first1;
            cout << "Введите значение столбца для открытия: "; cin >> second1;
            HideV2_6x6(arr, first, second, first1, second1);
            returned = Proverka6x6(arr);
            idk += 2;
        } while (returned != 36);
        cout << endl << "ВЫ ПОБЕДИЛИ!!!!" << endl;
        Zvuk(3);
        break;
    case(3):
        arr = Create8x8();
        ZAP8x8(arr);
        Peremeshka8x8(arr);
        do {
            cout << "Введите значение строки для открытия: "; cin >> first;
            cout << "Введите значение столбца для открытия: "; cin >> second;
            Hide8x8(arr, first, second);
            cout << "Введите значение строки для открытия: "; cin >> first1;
            cout << "Введите значение столбца для открытия: "; cin >> second1;
            HideV2_8x8(arr, first, second, first1, second1);
            returned = Proverka8x8(arr);
            idk += 2;
        } while (returned != 64);
        cout << endl << "ВЫ ПОБЕДИЛИ!!!!" << endl; Zvuk(3);
        break;
    case(4):
        arr = Create100000x1000000();
        ZAP10000x10000(arr);
        Peremeshka10000x10000(arr);
        do {
            cout << "Введите значение строки для открытия: "; cin >> first;
            cout << "Введите значение столбца для открытия: "; cin >> second;
            Hide10000(arr, first, second);
            cout << "Введите значение строки для открытия: "; cin >> first1;
            cout << "Введите значение столбца для открытия: "; cin >> second1;
            HideV2_10000x1000(arr, first, second, first1, second1);
            returned = Proverka1000x1000(arr);
            idk += 2;
        } while (returned != 10000);
        cout << endl << "ВЫ ПОБЕДИЛИ!!!!" << endl; Zvuk(3);
        break;
    }
    {
    }
    time(&end); 
          double seconds = difftime(end, start);
          printf("Время: %f секунд\n", seconds); 
          cout << endl << "Колличество попыток: " << idk;
}
//игра память
