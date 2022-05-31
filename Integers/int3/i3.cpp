#include<iostream>

int main(int argc, char const *argv[]){
  // Integer3. A file size is given in bytes. Find the amount of full Kbytes of this size (1 Kb = 1024 bytes).
  // Use the operator of integer division.
  int bytes, kbytes;

  std::cout << "Enter a file size in bytes,\n bytes = ";
  std::cin >> bytes;

  kbytes = bytes / 1024;
  std::cout << "The (" << bytes <<" bytes) is " << kbytes << " kb \n";

  return 0;
}
