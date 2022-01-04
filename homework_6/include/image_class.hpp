
class Image {
public:
    Image();
    Image(const std::string& filename);

    void SaveImage(const std::string& filename);
    bool empty();
    const int rows();
    const int cols();
    uint8_t at(int row, int col) const;
    uint8_t& at(int row, int col);

public:
    std::vector<uint8_t> data_;
    int rows_;
    int cols_;
};