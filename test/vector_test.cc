#include <iostream>
#include "../src/vector.hh"

int main() {
  std::cout << "Enter 5 real numbers: ";
  Vector a(5);
  std::cin >> a;
  std::cout << a << std::endl;
  Vector b(5, 1);
  std::cout << b << std::endl;
  Vector c = a;
  std::cout << c << std::endl;
  c = b;
  std::cout << c << std::endl;
  c = 3;
  std::cout << c << std::endl;
  std::cout << c.shape()[0] << std::endl;
  std::cout << c.insert(10, 1) << std::endl;
  std::cout << c.insert(a, 3) << std::endl;
  std::cout << c.remove(3) << std::endl;
  std::cout << c.remove(1, 4) << std::endl;
  Vector c_rep = {9, 8, 7};
  std::cout << c.replace(c_rep, 1) << std::endl;
  std::cout << c.sum() << std::endl;
  b[1] = 4;
  b[3] = 6;
  b[4] = 3.14;
  std::cout << b << std::endl;
  std::cout << a + b << std::endl;
  std::cout << a - b << std::endl;
  std::cout << a * b << std::endl;
  std::cout << a / b << std::endl;
  std::cout << a + 2 << std::endl;
  std::cout << 2 + a << std::endl;
  std::cout << a + a + b << std::endl;
  b += 2;
  std::cout << b << std::endl;
  b -= 1;
  std::cout << b << std::endl;
  b *= 0.8;
  std::cout << b << std::endl;
  b /= 0.5;
  std::cout << b << std::endl;
  Vector d = a;
  std::cout << (a == d) << std::endl;
  std::cout << (a != d) << std::endl;
  std::cout << a(1, 3) << std::endl;
  Vector e = {9.1, 8.22, 7.09, 6};
  std::cout << e << std::endl;
  const Vector f = {1, 2, 3};
  std::cout << f << std::endl;
  std::cout << f + 1 << std::endl;
  Vector g;
  std::cout << g << std::endl;
  Vector h(16, "uniform", -1.0, 1.0);
  std::cout << h << std::endl;
  Vector i(16, "normal", 0.0, 1.0);
  std::cout << i << std::endl;
  return 0;
}
