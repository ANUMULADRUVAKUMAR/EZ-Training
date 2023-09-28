struct car {
  char name;
  int price;
};

int main() {
  printf("Size of union car: %lu bytes\n", sizeof(struct car));
  return 0;
}
