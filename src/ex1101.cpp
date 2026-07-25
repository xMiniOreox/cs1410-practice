#include <iostream>
#include <fstream>
#include <random>
#include <algorithm> // for min and max

using namespace std;

int main() {
    const int N = 200;
    const int min_val = 1;
    const int max_cal = 10; // changed from max_val to max_cal
    const double mean = 5.5;
    const double sd = 2.0;

    default_random_engine en;
    normal_distribution<double> dist(mean, sd); // added missing '>'

    ofstream out("data.txt");
    for(int i = 0; i < N; i++) {
        int x = round(dist(en));
        x = max(min_val, min(max_cal, x)); // replaced max_val with max_cal
        out << x << " ";
    }
    out.close();

    cout << "Generated " << N << " numbers in data.txt\n";

    return 0;
}