#include <iostream>
using namespace std;
int main(){
int k, n, a[10] = { 0 }; // забиваем массив нулями
cin >> n; // вводим "границу" массива
for (int i = 0; i < n; i++)
{
	cin >> k; // вводим числа
	a[k]++; // ввели 1, значит a1 = 1, вввели ещё раз 1, значит а1 = 2
}
for (int i = 0; i < 10; i++) if (a[i]) cout << i << ": " << a[i] << endl;
// цикл, для вывода кол-ва, if необходим для вывода только существующих чисел
return 0;
}