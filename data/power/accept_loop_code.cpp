#include <iostream>
int power(int a, int n) {
  int ans = 1;
  while (n > 0) {
    ans *= a;
    n--;
  }
  return ans;
}
int main() {
  int a, n;
  std::cin >> a >> n;
    
  int ans;
  ans = power(a, n);
  std::cout << ans << std::endl;
  return 0;
}