#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    int summa = 0;
    cin >> n;
    vector <int> numbers;
    k = 0;
    while (summa != n){
        if (summa < n){
            k++;
            numbers.push_back(k);
        }else if (summa > n){
            numbers.erase(find(numbers.begin(), numbers.end() ,summa - n));
            break;
        }
        summa += k; 
    }
    cout << numbers.size() << endl;
    for (auto number: numbers){
        cout << number << ' ';
    }
}