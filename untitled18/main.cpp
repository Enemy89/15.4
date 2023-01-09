#include <iostream>
#include <cmath>
#include <vector>

std::vector <int> vec =  {-100,-50, -5, 1, 10, 15};

void printMas (std::vector<int> vec) {
    for (int i=0; i<vec.size();++i) {
        std::cout<<vec[i]<<" ";
    }
}

void sortMas(std::vector<int> vec) {
    for (int i = vec.size() - 1; i >= 0; --i) {
        int maxind = 0;
        for (int j = 0; j <= i; ++j) {
            if (abs(vec[j]) > abs(vec[maxind]))
                maxind = j;
        }
        int temp = vec[i];
        vec[i] = vec[maxind];
        vec[maxind] = temp;
    }
    printMas(vec);
}

int main() {
    sortMas(vec);
}
