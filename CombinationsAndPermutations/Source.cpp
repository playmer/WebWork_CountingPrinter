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

size_t power(size_t aNum, size_t aPower)
{
  size_t product = aNum;
  for (size_t i = 0; i < (aPower - 1); ++i)
  {
    product *= aNum;
  }

  return product;
}

double birthday(size_t N)
{
  double prob = 1.0;

  for (size_t i = 1; i <= N; ++i)
  {
    prob *= 1.0 - ((double)i / 356);
  }

  return 1.0 - prob;
}

int main()
{
  //std::cout << CombinationRepetion(12, 5) << " * " << CombinationRepetion(7, 5) << " * " << CombinationRepetion(2, 2);
  //std::cout << Combination(52, 4) << " * " << Combination(46, 2) << " * " << Combination(44, 1);
  //std::cout << Combination(12, 5) << " * " << Combination(7, 5) << " * " << Combination(2, 2);
  //std::cout << Combination(36, 2);
  //std::cout << Combination(31, 2) << " + " << Combination(5, 2);

  //std::cout << " (" << Combination(18, 9) << " * " << Combination(9, 1) << ") / " << Combination(20,10) << std::endl;

  //for (size_t i = 1; i < 356; ++i)
  //{
  //  auto prob = birthday(i);
  //  std::cout << "Test " << i << ": " << prob << std::endl;
  //
  //  if (prob >= .12)
  //  {
  //    break;
  //  }
  //}

  std::cout << "((" << Combination(2, 1) << " * " << Combination(3,1) << ") + (" << Combination(2, 1) << " * " << Combination(1, 1) << "))/("
    << "(" << Combination(2, 2) << ") + (" << Combination(2, 1) << " * " << Combination(4, 1) << "))";

  getc(stdin);
  return 0;
}