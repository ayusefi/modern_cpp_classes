#include <iostream>
#include <vector>
#include <string>

#include "homework_6.h"

int main()
{
  Image img("../data/lena.ascii.pgm");

  if (img.empty())
  {
    std::cerr << "[ERROR] Image not loaded.\n";
    return 1;
  }

  img.SaveImage("../lenna_test.pgm");
  return 0;
}