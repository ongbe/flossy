#include "flossy.h"
#include <iostream>
#include <string>
#include <iterator>

int main() {

  flossy::format(std::cout, "Hallo{<+07.5f}blublub", 10, 20, 30);
}
