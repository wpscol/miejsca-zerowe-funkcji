#include <iostream>

auto main() -> int {

  double a = 0;
  double b = 0;

  std::cout << "\n[Miejsca zerowe funkcji]\nObliczanie miejsc zerowych funkcji liniowej  (ax + b = 0):\n  [a != 0] Podaj [a]: ";
  std::cin >> a;
  std::cout << "  Podaj [b]: ";
  std::cin >> b;

  double x0 = ((-1)*b)/a;
  std::cout << "\nX0 = " << x0;

  return 0;
}