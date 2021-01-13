//Калугин Кирилл М8О-207Б-19
//Создать класс TransNumber для работы с трансцендентными числами. 
//Трансцендентное число представлено парой (a, b), где a – действительная часть,
//b – трансцендентная часть. Трансцендентная часть представляет собой 
//действительное число b, умноженное на константу. Реализовать арифметические
//операции (по аналогии с операциями над комплексными числами в алгебраической форме),
// и операции сравнения по значению (a + b). 

#include <iostream>

using namespace std;


class TransNumber { //объявление класса
    public:
        double A;
        double B;
        
        void setTrans (double a, double b) { //задание параметров числа
            A = a;
            B = b;
        }
    
        void getTrans () { //получение параметров числа
            cout << "(" << A << ", " << B << "*C)";
        }
        
};

TransNumber operator+ (TransNumber a, TransNumber b) {//перегрузка оператора сложения
    TransNumber c;
    c.A = a.A + b.A;
    c.B = a.B + b.B;
    return (c);
}

TransNumber operator- (TransNumber a, TransNumber b) {//перегрузка оператора вычитания
    TransNumber c;
    c.A = a.A - b.A;
    c.B = a.B - b.B;
    return (c);
}

TransNumber operator* (TransNumber a, TransNumber b) {//перегрузка оператора умножения
    TransNumber c;
    c.A = (a.A * b.A) - (a.B * b.B);
    c.B = (a.A * b.B) + (a.B * b.A);
    return (c);
}

TransNumber operator/ (TransNumber a, TransNumber b) {//перегрузка оператора деления
    TransNumber c;
    c.A = (a.A * b.A) + (a.B * b.B);
    c.B = (a.B * b.A) - (a.A * b.B);
    return (c);
}

bool operator== (TransNumber a, TransNumber b) {//перегрузка оператора равенства
    if (a.A * a.B == b.A * b.B) {
        return (true);
    }
    else {
        return (false);
    }
}

bool operator> (TransNumber a, TransNumber b) {//перегрузка оператора "больше"
    if (a.A * a.B > b.A * b.B) {
        return (true);
    }
    else {
        return (false);
    }
}

bool operator< (TransNumber a, TransNumber b) {//перегрузка оператора "меньше"
    if (a.A * a.B < b.A * b.B) {
        return (true);
    }
    else {
        return (false);
    }
}

int main() {
    int a;
    int b;
    int fflag = 0;
    int sflag = 0;
    TransNumber First;
    TransNumber Second;
    TransNumber Third;
    int c = 0;
    while (c != 9) {
        cout << "\n---\n1.Параметры первого числа \n2.Параметры второго числа \n3.Сложение чисел \n4.Вычитание чисел \n5.Умножение чисел \n6.Деление чисел \n7.Сравнение чисел \n8.Просмотр чисел \n9. Выход \n---";
        cout << "\nВведите команду: ";
        cin >> c;
        switch (c) {
            case 1:
                cout << "\nЗадайте параметры первого числа: ";
                cin >> a >> b;
                First.setTrans (a, b);
                fflag = 1;
                break;
            case 2:
                cout << "\nЗадайте параметры второго числа: ";
                cin >> a >> b;
                Second.setTrans (a, b);
                sflag = 1;
                break;
            case 3:
                if (fflag == 1 && sflag == 1) { //проверка непустоты параметров чисел
                    Third = First + Second;
                    Third.getTrans ();
                }
                else {
                    if (fflag != 1) {
                        cout << "\nПараметры первого числа не заданы!";
                    }
                    if (sflag != 1) {
                        cout << "\nПараметры второго числа не заданы!";
                    }
                }
                break;
            case 4:
                if (fflag == 1 && sflag == 1) { //проверка непустоты параметров чисел
                    Third = First - Second;
                    Third.getTrans ();
                }
                else {
                    if (fflag != 1) {
                        cout << "\nПараметры первого числа не заданы!";
                    }
                    if (sflag != 1) {
                        cout << "\nПараметры второго числа не заданы!";
                    }
                }
                break;
            case 5:
                if (fflag == 1 && sflag == 1) { //проверка непустоты параметров чисел
                    Third = First * Second;
                    Third.getTrans ();
                }
                else {
                    if (fflag != 1) {
                        cout << "\nПараметры первого числа не заданы!";
                    }
                    if (sflag != 1) {
                        cout << "\nПараметры второго числа не заданы!";
                    }
                }
                break;
            case 6:
                if (fflag == 1 && sflag == 1) { //проверка непустоты параметров чисел
                    Third = First / Second;
                    Third.getTrans ();
                }
                else {
                    if (fflag != 1) {
                        cout << "\nПараметры первого числа не заданы!";
                    }
                    if (sflag != 1) {
                        cout << "\nПараметры второго числа не заданы!";
                    }
                }
                break;
            case 7:
                if (fflag == 1 && sflag == 1) { //проверка непустоты параметров чисел
                    if (First == Second) {
                        cout << "Числа равны";
                    } else
                    if (First > Second){
                        cout << "Первое число больше";
                    } else
                    if (First < Second){
                        cout << "Второе число больше";
                    }
                }
                else {
                    if (fflag != 1) {
                        cout << "\nПараметры первого числа не заданы!";
                    }
                    if (sflag != 1) {
                        cout << "\nПараметры второго числа не заданы!";
                    }
                }
                break;
            case 8:
                if (fflag == 1 && sflag == 1) { //проверка непустоты параметров чисел
                    First.getTrans();
                    Second.getTrans();
                }
                else {
                    if (fflag != 1) {
                        cout << "\nПараметры первого числа не заданы!";
                    }
                    if (sflag != 1) {
                        cout << "\nПараметры второго числа не заданы!";
                    }
                }
                break;
            case 9:
                break;
            default:
                cout << "Неверная команда\n";
            break;
        }
    }
    return 0;
}




