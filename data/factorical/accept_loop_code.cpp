#include <iostream>
int factorical(int n) {
  int ans = 1;
  while (n > 1) {
    ans *= n--;
  }
  return ans;
}
int main() {
  int n;
  std::cin >> n;
    
  int ans;
  ans = factorical(n);
  std::cout << ans << std::endl;
  return 0;
}