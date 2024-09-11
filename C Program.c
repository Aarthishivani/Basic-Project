int func(int N, int M)
{
  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      p[i] [j] = i + j;
  print_array(N, M, p);
  return 1;
}
