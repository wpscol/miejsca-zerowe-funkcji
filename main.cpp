#include <cmath>
#include <iostream>

struct SquareFunctionValues {
  double a = 0;
  double b = 0;
  double c = 0;
  double delta = 0;
  double p = 0;
  double q = 0;
  double x1 = 0;
  double x2 = 0;
};

void show_funtions_shapes(SquareFunctionValues& obj) {
  int choice = '7';

  while (choice != 9) {
    std::cout << "\n\nPrzekształć postać funkcji na:"
                 "\n [1] Postać ogólna"
                 "\n [2] Postać kanoniczna"
                 "\n [3] Postać iloczynowa\n"
                 "\n [9] Nie przekształcaj"
                 "\n\n Wybór: ";
    std::cin >> choice;
    switch (choice) {

    // Ax^2 + Bx + C = 0
    case 1:
      std::cout << "\n" << obj.a << "X^2 + " << obj.b << "X + " << obj.c << " = 0\n\n";
      break;

    // Y = A*(X - p)^2 + q
    case 2:
      std::cout << "\nY = " << obj.a << "(X - " << obj.p << ")^2 + " << obj.q << "\n\n";
      break;

    // F(X) = A(X - X1)(X - X2)
    case 3:
      if (obj.delta > 0)
        std::cout << "\n F(X) = " << obj.a << "(X - (" << obj.x1 << "))(X - (" << obj.x2 << "))\n\n";
      else
        std::cout << "\n Ta funkcja nie posiada postaci kanonicznej.\n\n";
      break;

    case 9:
      break;

    default:
      std::cout << "\n Wybrano błędną opcję! Spróbuj ponownie: ";
      break;
    }
  }
};

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

  SquareFunctionValues result;

  std::cout << "\nObliczanie miejsc zerowych funkcji [Ax^2 + Bx + C = 0]:\n  Podaj [A]: ";
  std::cin >> result.a;
  std::cout << "  Podaj [B]: ";
  std::cin >> result.b;
  std::cout << "  Podaj [C]: ";
  std::cin >> result.c;

  if (result.a == 0) {
    if (result.b == 0 && result.c != 0)
      std::cout << "\nBrak miejsca zerowego.";

    else if (result.b == 0 && result.c == 0)
      std::cout << "\nWszystkie liczby rzeczywiste są miejscami zerowymi funkcji.";

    else {
      result.x1 = ((-1) * result.c) / result.b;
      std::cout << "\nX0 = " << result.x1;
    }

    show_funtions_shapes(result);
    return;
  }

  result.delta = (result.b * result.b) - (4 * (result.a * result.c));
  result.x1 = (((-1) * result.b) - sqrt(result.delta)) / (2 * result.a);
  result.x2 = (((-1) * result.b) + sqrt(result.delta)) / (2 * result.a);
  std::cout << "\nDelta: " << result.delta;

  if (result.delta < 0)
    std::cout << "\nBrak miejsc zerowych.";

  else if (result.delta == 0)
    std::cout << "\nX0 = " << result.x1;

  else
    std::cout << "\nX1 = " << result.x1 << "\nX2 = " << result.x2;

  result.p = ((-1) * (result.b)) / (2 * result.a);
  result.q = ((-1) * (result.delta)) / (4 * result.a);
  show_funtions_shapes(result);
}

void y_a_x_p_2_q() {
  SquareFunctionValues result;

  std::cout << "\nObliczanie miejsc zerowych funkcji [Y = A*(X - p)^2 + q]:\n  Podaj [A]: ";
  std::cin >> result.a;
  std::cout << "  Podaj [p]: ";
  std::cin >> result.p;
  std::cout << "  Podaj [q]: ";
  std::cin >> result.q;

  result.b = (2 * result.a * result.p);
  result.c = (result.p * result.p + result.q);

  if (result.a == 0) {
    if (result.b == 0 && result.c != 0)
      std::cout << "\nBrak miejsca zerowego.";

    else if (result.b == 0 && result.c == 0)
      std::cout << "\nWszystkie liczby rzeczywiste są miejscami zerowymi funkcji.";

    else {
      result.x1 = ((-1) * result.c) / result.b;
      std::cout << "\nX0 = " << result.x1;
    }

    show_funtions_shapes(result);
    return;
  }

  result.delta = (result.b * result.b) - (4 * (result.a * result.c));
  result.x1 = (((-1) * result.b) - sqrt(result.delta)) / (2 * result.a);
  result.x2 = (((-1) * result.b) + sqrt(result.delta)) / (2 * result.a);
  std::cout << "\nDelta: " << result.delta;

  if (result.delta < 0)
    std::cout << "\nBrak miejsc zerowych.";

  else if (result.delta == 0)
    std::cout << "\nX0 = " << result.x1;

  else
    std::cout << "\nX1 = " << result.x1 << "\nX2 = " << result.x2;

  show_funtions_shapes(result);
}

void a_x_x1_x_x2() {
  SquareFunctionValues result;
  std::cout << "\nObliczanie miejsc zerowych funkcji [ F(X) = A(X - X1)(X - X2) ]:\n  Podaj [A]: ";
  std::cin >> result.a;
  std::cout << "  Podaj [X1]: ";
  std::cin >> result.x1;
  std::cout << "  Podaj [X2]: ";
  std::cin >> result.x2;

  result.b = ((-1) * result.a) * (result.x1 + result.x2);
  result.c = result.a * result.x1 * result.x2;
  result.delta = (result.b * result.b) - 4 * result.a * result.c;
  result.p = ((-1) * (result.b)) / (2 * result.a);
  result.q = ((-1) * (result.delta)) / (4 * result.a);
  show_funtions_shapes(result);
}

int main() {
  std::string banner = " -------------------------"
                       "\n|[Miejsca zerowe funkcji] |"
                       "\n| Wybierz równanie:       |"
                       "\n| [1] Ax + B = 0          |"
                       "\n| [2] Ax + By + C = 0     |"
                       "\n| [3] Ax^2 + Bx + C = 0   |"
                       "\n| [4] Y = A*(X - p)^2 + q |"
                       "\n -------------------------"
                       "\nWybór: ";

  std::cout << banner;
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

  case 4:
    y_a_x_p_2_q();
    break;

  default:
    std::cout << "\n[!] Błędna opcja. Spróbuj ponownie: ";
    goto itemChoose;
    break;
  }

  return 0;
}
