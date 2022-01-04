#include <iostream>
#include <string>
#include <vector>

#include "homework_6.h"

int main() {
    Image img("../data/lena.ascii.pgm");

    if (img.empty()) {
        std::cerr << "[ERROR] Image not loaded.\n";
        return 1;
    }

    img.SaveImage("../lenna_test.pgm");
    std::cout << "rows: " << img.rows() << std::endl;
    std::cout << "cols: " << img.cols() << std::endl;
    std::cout << "value at data_[0, 1]: " << img.at(511, 511) << std::endl;
    return 0;
}