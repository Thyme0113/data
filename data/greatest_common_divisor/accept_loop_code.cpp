#include <iostream>
int gcd(int a, int b) {
  int r;
  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }
  return std::abs(a);
}
int main() {
  int a, b;
  std::cin >> a >> b;
    
  int ans;
  ans = gcd(a, b);
  std::cout << ans << std::endl;
  return 0;
}