#include <stdio.h>
#include <iostream>

#ifdef XIN_LOCAL
#include <chrono>
#endif

using namespace std;

// Let's do it in a modern way:
// Trailing return type!
auto main() -> int
{
#ifdef XIN_LOCAL
  // Measure total runtime
  // Since nobody likes TLE...
  freopen("test.in", "r", stdin);
  auto start = chrono::high_resolution_clock::now();
#endif

  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  // Solution

  // End of solution
#ifdef XIN_LOCAL
  auto end = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

  cout << "Time taken: " << duration << " ms" << endl;
#endif

  return 0;
}

