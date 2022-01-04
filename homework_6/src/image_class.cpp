#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>
#include <vector>

#include "homework_6.h"
Image::Image() {}
Image::Image(const std::string& filename) {
    igg::io_tools::ImageData image = igg::io_tools::ReadFromPgm(filename);
    data_ = image.data;
    rows_ = image.rows;
    cols_ = image.cols;
}

void Image::SaveImage(const std::string& filename) {
    igg::io_tools::ImageData image;
    image.data = data_;
    image.rows = rows_;
    image.cols = cols_;
    bool written = igg::io_tools::WriteToPgm(image, filename);
}

bool Image::empty() { return (data_.empty()); }

// getters
const int Image::rows() { return rows_; }
const int Image::cols() { return cols_; }

uint8_t Image::at(int row, int col) const { return data_[row * cols_ + col]; }

uint8_t& Image::at(int row, int col) { return data_[row * cols_ + col]; }