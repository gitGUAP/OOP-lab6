#include "Vector.h"
#include <iostream>
#include <typeinfo>

using namespace std;

Vector v(1);

void menu() {
  int inp;
  cout << endl << "�������� ����� ����:" << endl;
  cout << "1: ������� ��� ������" << endl;
  cout << "2: ����� ��� �����" << endl;
  cout << "3: Hash code" << endl;
  cout << "4: ������" << endl;
  cout << "0: �����" << endl;
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
    cout << sizeof Vector << endl;
    menu();
    break;
  };
  case 0: {
    break;
  };
  default:
    cout << "�������� ����";
    menu();
    break;
  }
}

int main() {
  setlocale(LC_ALL, "Russian");
  menu();

  return 0;
}
