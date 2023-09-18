#include <iostream>
#include <iomanip>
#include <ctime>

using std::cout;
using std::cin;
using std::time;

int FibRecursive(int n) {
    if (n <= 1) return n;
    return FibRecursive(n - 1) + FibRecursive(n - 2);
}

int main() {
    int needed_number, places;
    for (int i = 30; i < 45; i++) {
        clock_t start_time = clock();
        needed_number = FibRecursive(i);
        clock_t end_time = clock();
        double spent_time = (end_time - start_time) / double(CLOCKS_PER_SEC);
        cout << "\n\nThe needed place of Fibonachi Numbers is " << i << "\n" << std::setprecision(8) << "Value on this place is " << needed_number << "\nStart time - " << start_time << "\nEnd time - " << end_time << "\nSpent time - " << spent_time;
    }
}