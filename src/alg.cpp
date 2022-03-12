// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int i = 0, j = size - 1, m = 1;
  while (i < j) {
    int middle = i + (j - i) / 2;
    if (arr[middle] == value) {
      int m = middle;
      while (arr[--middle] == value)
        m = m + 1;
      while (arr[++m] == value)
        m = m + 1;
      return m;
    } else if (arr[middle] > value) {
        j = middle;
    } else {
        i = middle + 1;
    }
  }
  return 0;
}
