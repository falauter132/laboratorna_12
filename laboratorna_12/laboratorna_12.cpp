#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, x, sum = 0, count = 0;

    cin >> n;
    while (cin >> x && x <= n) {
        if (x > 0) {
            sum += x;
            count++;
        }
    }
    cout << sum / count << endl;

    return 0;
}

//2///////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int ціна = 1700000, сума = 0, місяці = 0, хабар;

    while (сума < ціна) {
        місяці++;
        cout << "Хабар за місяць " << місяці << ": ";
        cin >> хабар;
        сума += хабар;
    }

    cout << "Чиновник зібрав " << ціна << " грн за " << місяці << " місяців." << endl;
    return 0;
}

//3///////////////////////////////////////////////////////////

int main() {
    for (int num = 9999; num >= 1000; num--) {
        int sum = num / 1000 + (num / 100 % 10) + (num / 10 % 10) + (num % 10);
        if (sum == 27) {
            cout << num << endl;
        }
    }

    return 0;
}

//4/////////////////////////////////////////////////////////

int main() {
    int num, count = 0;
    cout << "Введіть число: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            count++;
        }
        num /= 10;
    }

    cout << "Кількість парних цифр: " << count << endl;
    return 0;
}

//5/////////////////////////////////////////////////////////

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
   
	const int n = 11;
	int A[n];
	int a = 0;

	cout << "Введіть цілі елементи масиву:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
		
	cout << "Елементи, які є парними числами:" << endl;
	for (int i = 0; i < n; i++) {
		if (A[i] % 2 == 0) {
			cout << A[i] << " ";
			a += A[i];
		}
	}

	cout << endl; << sqrt(a);
}

//6/////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int Z[12] = { -5, 3, -1, 4, -9, 7, 2, -3, 6, -8, 10, -4 };
    int minElem = Z[0], minIndex = 0;
    int sumNeg = 0, countNeg = 0;

    for (int i = 0; i < 12; i++) {
        if (Z[i] < minElem) {
            minElem = Z[i];
            minIndex = i;
        }
        if (Z[i] < 0) {
            sumNeg += Z[i];
            countNeg++;
        }
    }

    double avgNeg = 0;
    if (countNeg > 0) {
        avgNeg = (double)sumNeg / countNeg;
    }

    Z[minIndex] = abs(avgNeg);

    cout << "Мінімальний елемент: " << minElem << endl;
    cout << "Середнє арифметичне від'ємних елементів: " << avgNeg << endl;

    cout << "Початковий масив: ";
    for (int i = 0; i < 12; i++) {
        cout << Z[i] << " ";
    }
    cout << endl;

    cout << "Перетворений масив: ";
    for (int i = 0; i < 12; i++) {
        cout << Z[i] << " ";
    }
    cout << endl;

    return 0;
}

//7//////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int X[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    bool isSorted = true;

    for (int i = 0; i < 9; i++) {
        if (X[i] <= X[i + 1]) {
            isSorted = false;
            break;
        }
    }

    cout << "Заданий масив: ";
    for (int i = 0; i < 10; i++) {
        cout << X[i] << " ";
    }
    cout << endl;

    if (isSorted) {
        cout << "Масив упорядкований за зменшенням." << endl;
    }
    else {
        cout << "Масив не упорядкований за зменшенням." << endl;
    }

    return 0;
}
