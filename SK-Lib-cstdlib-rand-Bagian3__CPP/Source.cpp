#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

/*  
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022 
*/

int main() {
    int N = 100;
    // Program ini akan membuat beberapa urutan acak
    // angka pada setiap program dijalankan dalam rentang 0 hingga N-1
    for (int i = 0; i < 5; i++) {
        cout << rand() % N << " ";
    }

    _getch();
    return 0;
}
