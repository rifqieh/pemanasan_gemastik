#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <utility>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

bool isNotZero(double val) { return val != 0; }
double sumSq(double sum, double val) { return sum + val * val; } 

int main() {
    std::string Mt, Nt;
    std::getline(std::cin, Mt);
    std::getline(std::cin, Nt);
    std::vector<double> M;
    std::vector<double> N;
    std::istringstream Miss(Mt);
    std::istringstream Niss(Nt);
    double val = 0;
    for (std::string num; std::getline(Miss, num, ' '); ) {
        std::istringstream(num) >> val;
        M.push_back(val);
    }
    for (std::string num; std::getline(Niss, num, ' '); ) {
        std::istringstream(num) >> val;
        N.push_back(val);
    }
    if (M.size() != N.size()) {
        std::cout << "DIMENSI SALAH" << std::endl;
    } else if (std::count_if(M.begin(), M.end(), isNotZero) == 0 ||
            std::count_if(N.begin(), N.end(), isNotZero) == 0) {
        std::cout << "TAK TERDEFINISI" << std::endl;
    } else {
        double Ms = std::sqrt(std::accumulate(M.begin(), M.end(), 0.0f, sumSq));
        double Ns = std::sqrt(std::accumulate(N.begin(), N.end(), 0.0f, sumSq));
        double dot = 0;
        for (std::vector<int>::size_type i = 0; i < M.size(); i ++)
            dot += M[i] * N[i];
        std::cout << std::setprecision(3) << dot/Ms/Ns << std::endl;
    }
}
