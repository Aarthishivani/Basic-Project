int func(int N, int M)
{
  // Caution: checks should be made to ensure N*M*sizeof(float) does NOT exceed limitations for auto VLAs and is within available size of stack.
  float p[N] [M]; // auto VLA is held on the stack, and sized when the function is invoked
  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      p[i] [j] = i + j;
  print_array(N, M, p);
  // no need to free(p) since it will disappear when the function exits, along with the rest of the stack frame
  return 1;
}