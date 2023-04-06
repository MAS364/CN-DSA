int pairSum(int *input, int size, int x) {

  int count = 0;

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      int sum = input[i] + input[j];
      if (sum == x) {
        count++;
      }
    }
  }

  return count;
}
