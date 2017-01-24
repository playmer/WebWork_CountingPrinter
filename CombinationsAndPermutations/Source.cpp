#include <iostream>

#include <string>



std::string Combination(unsigned aUpper, unsigned aLower)
{
  std::string upper = std::to_string(aUpper);
  std::string middle = std::to_string(aUpper - aLower);
  std::string lower = std::to_string(aLower);

  std::string toAppend = "(";
  toAppend += upper;
  toAppend += "!/(";
  toAppend += lower;
  toAppend += "!*";
  toAppend += middle;
  toAppend += "!)) ";

  return toAppend;
}


std::string CombinationRepetion(unsigned N, unsigned R)
{
  return Combination(N + R - 1, R);
}

int main()
{
  std::cout << CombinationRepetion(12, 5) << " * " << CombinationRepetion(7, 5) << " * " << CombinationRepetion(2, 2);

  //std::cout << Combination(12, 5) << " * " << Combination(7, 5) << " * " << Combination(2, 2);
  //std::cout << Combination(36, 2);
  //std::cout << Combination(31, 2) << " + " << Combination(5, 2);

  getc(stdin);
  return 0;
}