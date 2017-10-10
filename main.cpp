#include <iostream>

using namespace std;

int main() {
  int n, m, k;
  cout << "" << endl;
  cin >> n;
  cout << "" << endl;
  cin >> m;
  cout << "" << endl;
  cin >> k;
  int a[n][m];
  int b[m][k];
  int c[n][k];
  cout << "Ввеите первую матрицу" << endl;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];

  cout << "Введите вторую матрицу" << endl;
  for (int i = 0; i < m; i++)
    for (int j = 0; j < k; j++) cin >> b[i][j];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < k; j++) c[i][j] = 0;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < k; j++)
      for (int p = 0; p < m; p++) c[i][j] += a[i][p] * b[p][j];

  cout << "Результат" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) cout << c[i][j] << " ";
    cout << endl;
  }
  return 0;
}
