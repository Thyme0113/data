#include <iostream>
int power(int a, int n) {
  if (n == 0) {
    return 1;
  }
  return a * power(a, n-1);
}
int main() {
  int a, n;
  std::cin >> a >> n;
    
  int ans;
  ans = power(a, n);
  std::cout << ans << std::endl;
  return 0;
}