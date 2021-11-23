#include <iostream>
#include <iterator>  
#include <set>       
#include <ctime>
#include <iterator>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    pair <int, int> count(0,0);
    pair <int, int> temp(0,0);
    set <int> A;
    set <int> P;
    set <int> Q;
    for (int i = 15; i <= 33; i++) {
        P.insert(i);
    }
    for (int i = 45; i <= 68; i++) {
        Q.insert(i);
    }
    for (int i = 0; i <= 100; i++) {
        A.insert(i);
    }
    for (int i = 0; i <= 100; i++) {
        if (((A.find(i) != A.end()) && !(Q.find(i) != Q.end())) <=((Q.find(i) != Q.end()) || (P.find(i) != P.end()))) {
            if (i - count.first == 1) {
                count.first = i;
                count.second++;
            }
            else {
                
                temp.first = count.first;
                temp.second = count.second;
                count.first = i;
                count.second = 1;
            }
        }
        else A.erase(i);
    }
    
    cout << A.size() << endl;
    copy(A.begin(), A.end(), ostream_iterator<int>(cout, " "));

    return 0;
}
