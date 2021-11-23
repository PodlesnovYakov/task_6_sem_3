#include <iostream>
#include <algorithm>
#include <vector>
#include <string> 
#include <fstream>
using namespace std;
typedef pair<float, pair<int, int>> para;
bool comp(para lhs, para rhs) {
    
     if (lhs.first == rhs.first ) {
        return lhs.second.second > rhs.second.second;
    }
     else {
         return lhs.first < rhs.first;
     }
}

int main()
{
    vector<para> a;
    string s;
    int o = 0;
    int k, K, N, p, t;
    double q;
    string ss;
    ifstream file("1.txt"); 
   
    while (getline(file, s)) {
        
        
            if (o == 0) {
                k = s.find(' ');
                ss = s.substr(0,k);
                K = stoi(ss);
                ss = s.substr(k + 1);
                N = stoi(ss);
                o = 1;
            }
            else {
                k = s.find(' ');
                ss = s.substr(0, k);
                p = stoi(ss);
                ss = s.substr(k + 1);
                t = stoi(ss);
                q = double(t / p);
                a.push_back(make_pair(q, make_pair(p, t)));
                
       }    
            cout << s << endl;
            
    }

    file.close();
    sort(a.begin(), a.end(), comp);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i].first <<" " << a[i].second.first <<" " << a[i].second.second << endl;
    }
    

    return 0;
}


