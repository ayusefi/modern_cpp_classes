
class Image
{
public:
  Image();
  Image(const std::string& filename);

  void SaveImage(const std::string& filename);
  bool empty();

public:
  std::vector<uint8_t> data_;
  int rows_;
  int cols_;
};