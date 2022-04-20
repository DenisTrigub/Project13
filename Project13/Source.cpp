#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int M;
    cout << "Введите размер массива: ";
    cin >> M;
    int* a = new int[M];

    cout << "Введите значения массива: ";
    for (int i = 0; i < M; i++)
    {
        cin >> a[i];
    }

    while (true)
    {
        int n;
        cout << "\nMenu:" << endl;
        cout << "1 -Удалить четные значения массива" << endl;
        cout << "2 - Удалить нечетные значения массива" << endl;
        cout << "3 - Показать текущий массив" << endl;
        cout << "4 - Выход" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            for (int i = 0; i < M; i++)
            {
                if (a[i] % 2 == 0)
                {
                    for (int j = i; j < M - 1; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    M--;
                    i--;
                }
            }
        } break;
        case 2:
        {
            for (int i = 0; i < M; i++)
            {
                if (!(a[i] % 2 == 0))
                {
                    for (int j = i; j < M - 1; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    M--;
                    i--;
                }
            }
        } break;
        case 3:
        {
            cout << "Массив: ";
            for (int i = 0; i < M; i++)
            {
                cout << a[i] << " ";
            }
        } break;

        case 4:
        {
            delete[] a;
            return 0;
        } break;
        default:
        {
            cout << "\nОшибка. Пожалуйста, введите правильный номер" << endl;
        }
        }
    }
}