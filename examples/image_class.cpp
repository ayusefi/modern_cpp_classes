 /*
 *  This is the default license template.
 *  
 *  File: image_class.cpp
 *  Author: abdullah
 *  Copyright (c) 2022 abdullah
 *  
 *  To edit this license information: Press Ctrl+Shift+P and press 'Create new License Template...'.
 */

#include <iostream>
#include <string>
#include <vector>

class Image
{
public:
  Image() = default;
  explicit Image(const std::string& filename);
  ~Image();

  void SaveImage(const std::string& filename);

public:
  std::vector<uint8_t> data_;
  int rows_;
  int cols_;
};

int main()
{
  Image img("lenna.png");

  if (img.empty())
  {
    std::cerr << "[ERROR] Image not loaded.\n";
    return 1;
  }

  img.SaveImage();
  return 0;
}