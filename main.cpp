#include <cmath>
#include <iostream>

struct funkcja_kwadratowa {
  double a = 0;
  double b = 0;
  double c = 0;
  double delta = 0;
  double p = 0;
  double q = 0;
  double x1 = 0;
  double x2 = 0;
};

void pokaz_postacie_funkcji(funkcja_kwadratowa& obiekt)
{
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
  double a = 0;
  double b = 0;
  double c = 0;

  std::cout << "\nObliczanie miejsc zerowych funkcji [Ax^2 + Bx + C = 0]:\n  Podaj [A]: ";
  std::cin >> a;
  std::cout << "  Podaj [B]: ";
  std::cin >> b;
  std::cout << "  Podaj [C]: ";
  std::cin >> c;
  
    funkcja_kwadratowa wynik;
    wynik.a = a;
    wynik.b = b;
    wynik.c = c;
  

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
    
    wynik.p = ((-1) * (wynik.b)) / (2 * wynik.a);
    wynik.q = ((-1) * (wynik.delta)) / (4 * wynik.a);
    pokaz_postacie_funkcji(wynik);
    
    
    
    
    
}

void y_a_x_p_2_q() {
  double a =0;
  double p =0 ;
  double q =0;

  std::cout << "\nObliczanie miejsc zerowych funkcji [Y = A*(X - p)*2 + q]:\n  Podaj [A]: ";
  std::cin >> a;
  std::cout << "  Podaj [p]: ";
  std::cin >> p;
  std::cout << "  Podaj [q]: ";
  std::cin >> q;

  double b = (2 * a * p);
  double c=(p * p + q);
  
   funkcja_kwadratowa wynik;
    wynik.a = a;
    wynik.b = b;
    wynik.c = c;
  

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
    
    wynik.p = ((-1) * (wynik.b)) / (2 * wynik.a);
    wynik.q = ((-1) * (wynik.delta)) / (4 * wynik.a);
    pokaz_postacie_funkcji(wynik);

}
void iloczynowa() {
	
   std::cout << "Obliczanie miejsc zerowych funkcji kwadratowej w postaci f(x)=a(x-x1)(x-x2)" <<  std::endl;
   std::cout << "Podaj wartosc A :";
   std::cin >> a;
   std::cout << "Podaj wartosc X1 : " <<  std::endl;
   std::cin >> x1;
   std::cout << "Podaj wartosc X2 : " <<  std::endl;
   std::cin >> x2;

    funkcja_kwadratowa wynik;
    wynik.a = a;
    wynik.x1 = x1;
    wynik.x2 = x2;
    wynik.b = ((-1) * wynik.a) * (x1 + x2);
    wynik.c = wynik.a * wynik.x1 * wynik.x2;
    wynik.delta = (wynik.b * wynik.b) - 4 * wynik.a * wynik.c;
    wynik.p = ((-1) * (wynik.b)) / (2 * wynik.a);
    wynik.q = ((-1) * (wynik.delta)) / (4 * wynik.a);
    pokaz_postacie_funkcji(wynik);

}


int main()  {
  std::string banner = " -------------------------"
                       "\n|[Miejsca zerowe funkcji] |"
                       "\n| Wybierz równanie:       |"
                       "\n| [1] Ax + B = 0          |"
                       "\n| [2] Ax + By + C = 0     |"
                       "\n| [3] Ax^2 + Bx + C = 0   |"
                       "\n| [4] Y = A*(X - p)*2 + q |"
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
  case 5:
    iloczynowa();
    break;
  default:
    std::cout << "\n[!] Wrong option. Try again: ";
    goto itemChoose;
    break;
  }

  return 0;
}
