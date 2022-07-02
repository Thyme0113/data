#include <iostream>
int gcd(int a, int b) {
  if (b == 0) {
    return std::abs(a);
  }
  return gcd(b, a%b);
}
int main() {
  int a, b;
  std::cin >> a >> b;
    
  int ans;
  ans = gcd(a, b);
  std::cout << ans << std::endl;
  return 0;
}