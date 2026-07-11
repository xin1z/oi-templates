#include <stdio.h>

#ifdef XIN_LOCAL
#include <time.h>
#endif

int main()
{
#ifdef XIN_LOCAL
  // Measure total runtime
  // Since nobody likes TLE...
  freopen("test.in", "r", stdin);

  struct timespec start, end;
  clock_gettime(CLOCK_MONOTONIC, &start);
#endif
  // Solution

  // End of solution
#ifdef XIN_LOCAL
  clock_gettime(CLOCK_MONOTONIC, &end);

  double time_taken = (end.tv_sec - start.tv_sec) * 1e9;
  time_taken += (end.tv_nsec - start.tv_nsec);
  time_taken /= 1e6;

  printf("Time taken: %.3f ms\n", time_taken);
#endif

  return 0;
}
