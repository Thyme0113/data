#include <iostream>
#include <string.h>
int memo[1000000];

int fibonacci(int n) {
  if (memo[n] != -1) {
    return memo[n];
  }
  for (int i = 3; i <= n; i++) {
    memo[i] = memo[i-1] + memo[i-2];
  }
  return memo[n];
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