#include <cmath>
#include <iostream>

void ax_b_0() {

  double a = 0;
  double b = 0;

  std::cout << "\nObliczanie miejsc zerowych funkcji [Ax + B = 0]:\n  Podaj [A]: ";
  std::cin >> a;
  std::cout << "  Podaj [B]: ";
  std::cin >> b;

  if (a == 0 && b != 0)
    std::cout << "\nBrak miejsca zerowego.";

  else if (a == 0 && b == 0)
    std::cout << "\nWszystkie liczby rzeczywiste są miejscami zerowymi funkcji.";

  else {
    double x0 = ((-1) * b) / a;
    std::cout << "\nX0 = " << x0;
  }
}

void ax_by_c_0() {
  double a = 0;
  double b = 0;
  double c = 0;

  std::cout << "\nObliczanie miejsc zerowych funkcji [Ax + By + C = 0]:\n  Podaj [A]: ";
  std::cin >> a;
  std::cout << "  Podaj [B]: ";
  std::cin >> b;
  std::cout << "  Podaj [C]: ";
  std::cin >> c;

  if (b == 0 || a == 0) {
    std::cout << "\n [!] Współczynnik A i B nie może równać się 0.";
    return;
  }

  double x0 = (-c / b);
  double y0 = (-c / a);

  std::cout << "\n x0 = " << x0 << "\n y0 = " << y0;
}

void ax2_by_c_0() {
  double a = 0;
  double b = 0;
  double c = 0;

  std::cout << "\nObliczanie miejsc zerowych funkcji [Ax^2 + Bx + C = 0]:\n  Podaj [A]: ";
  std::cin >> a;
  std::cout << "  Podaj [B]: ";
  std::cin >> b;
  std::cout << "  Podaj [C]: ";
  std::cin >> c;

  if (a == 0) {
    if (b == 0 && c != 0)
      std::cout << "\nBrak miejsca zerowego.";

    else if (b == 0 && c == 0)
      std::cout << "\nWszystkie liczby rzeczywiste są miejscami zerowymi funkcji.";

    else {
      double x0 = ((-1) * c) / b;
      std::cout << "\nX0 = " << x0;
    }
    return;
  }

  double delta = (b * b) - 4 * (a * c);
  std::cout << "\nDelta: " << delta;

  if (delta < 0)
    std::cout << "\nBrak miejsc zerowych.";

  else if (delta == 0)
    std::cout << "\nX0 = " << ((-1) * b) / (2 * a);

  else
    std::cout << "\nX1 = " << (((-1) * b) - sqrt(delta)) / (2 * a) << "\nX2 = " << (((-1) * b) + sqrt(delta)) / (2 * a);
}

auto main() -> int {

  std::cout << "[Miejsca zerowe funkcji]\n\n Wybierz równanie:\n [1] Ax + B = 0\n [2] Ax + By + C = 0\n [3] Ax^2 + Bx "
               "+ C = 0\nWybór: ";
  int choice = 0;

itemChoose:
  std::cin >> choice;

  switch (choice) {

  case 1:
    ax_b_0();
    break;

  case 2:
    ax_by_c_0();
    break;

  case 3:
    ax2_by_c_0();
    break;

  default:
    std::cout << "\n[!] Wrong option. Try again: ";
    goto itemChoose;
    break;
  }

  return 0;
}