// for (i = 0; i < n; i++)
//   for (j = 0; j < n; j++)
//     k++;

// fib
int fib(int n) {
  if (n <= 1)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}