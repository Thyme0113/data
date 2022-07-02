#include <iostream>
int factorical(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorical(n-1);
}
int main() {
  int n;
  std::cin >> n;
    
  int ans;
  ans = factorical(n);
  std::cout << ans << std::endl;
  return 0;
}