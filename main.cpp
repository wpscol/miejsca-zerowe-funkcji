#include <iostream>

auto main() -> int {

  double a = 0;
  double b = 0;

  std::cout << "\n[Miejsca zerowe funkcji]\nObliczanie miejsc zerowych funkcji liniowej (ax + b = 0):\n  Podaj [a]: ";
  std::cin >> a;
  std::cout << "  Podaj [b]: ";
  std::cin >> b;

  if (a == 0 && b != 0)
    std::cout << "\nBrak miejsca zerowego.";

  else if (a == 0 && b == 0)
    std::cout << "\nWszystkie liczby rzeczywiste są miejscami zerowymi funkcji.";

  else {
    double x0 = ((-1)*b)/a;
      std::cout << "\nX0 = " << x0;
  }

  return 0;
}