#include <iostream>

template <typename T> class Square {
public:
  T data;
  Square(T _d) { data = _d * _d; }
  ~Square() {}
};


int main(){
  Square<int> a(10);
  std::cerr << a.data << std::endl;

  Square<double > b(10.1);
  std::cerr << b.data << std::endl;
}
