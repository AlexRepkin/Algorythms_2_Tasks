#include <iostream>
#include <iomanip>
#include <ctime>
using std::time;

int EuclidGCD(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a >= b) return EuclidGCD(a % b, b);
    return EuclidGCD(a, b % a);
}

int main() {
    int needed_number, places;
    for (int i = 1200000; i < 1400000; i += 13837) {
        clock_t start_time = clock();
        needed_number = EuclidGCD(i, 123456789);
        clock_t end_time = clock();
        double spent_time = (end_time - start_time) / double(CLOCKS_PER_SEC);
        std::cout << std::setprecision(8) << "\n\nValues are " << i << " and 5237. Answer is " << needed_number << "\nStart time - " << start_time << "\nEnd time - " << end_time << "\nSpent time - " << spent_time;
    }
}