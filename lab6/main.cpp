#include "Vector.h"
#include <iostream>

using namespace std;

Vector v(4);

void menu() {
  int inp;
  cout << "Выберите пункт меню:" << endl;
  cout << "1: Вывести имя класса" << endl;
  cout << "2: Сырое имя файла" << endl;
  cout << "3: Hash code" << endl;
  cout << "4: Выход" << endl;
  cin >> inp;

  switch (inp) {
  case 1: {
    cout << typeid(v).name() << endl;
    menu();
    break;
  };
  case 2: {
    cout << typeid(v).raw_name() << endl;
    menu();
    break;
  };
  case 3: {
    cout << typeid(v).hash_code() << endl;
    menu();
    break;
  };
  case 4: {
    break;
  };
  default:
    cout << "Неверный ввод";
    menu();
    break;
  }
}

int main() {
  setlocale(LC_ALL, "Russian");
  menu();

  return 0;
}
