#include <iostream>
#include <ctime>
#include <iomanip>

using std::cout;
using std::cin;
using std::time;

int FibArray(int n) {
    int F[50] {0};
    F[1] = 1;
    for (int i = 2; i < n; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n-1];
}

int main() {
    int needed_number, places;
    for (int i = 30; i < 45; i++) {
        cout << "\nThe needed place of Fibonachi Numbers is " << i << "\n";
        clock_t start_time = clock();
        needed_number = FibArray(i);
        clock_t end_time = clock();
        double spent_time = (end_time - start_time) / double(CLOCKS_PER_SEC);
        cout << std::setprecision(8) << "Value on this place is " << needed_number << "\n\nStart time - " << start_time << "\nEnd time - " << end_time << "\nSpent time - " << spent_time << "\n";
    }
}