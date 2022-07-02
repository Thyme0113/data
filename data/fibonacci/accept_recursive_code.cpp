#include <iostream>
#include <string.h>
int memo[1000000];

int fibonacci(int n) {
  if (memo[n] != -1) {
    return memo[n];
  }
  return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}
int main() {
  int n;
  std::cin >> n;
  
  memset(memo, -1, sizeof(memo));
  memo[1] = 0;
  memo[2] = 1;
  
  int ans;
  ans = fibonacci(n);
  std::cout << ans << std::endl;
  return 0;
}