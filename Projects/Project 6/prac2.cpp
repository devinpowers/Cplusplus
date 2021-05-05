

#include <string>
#include <iostream>
#include <vector>

using namespace std;

// reverse vector function
vector<int> reverse_vec(const vector<int>& n)
{
  vector<int> ret(n.rbegin(), n.rend());
  return ret;
}

//initialize vector function
void initializer(int s, vector<int>& n){

    for (int i = 0; i< s; ++i){
        n.push_back(i);
    }
}

// print vector function
void print_vector(vector<int> n){

    for (int i = 0; i<n.size(); ++i){
        cout << n[i] << " ";
    }
}

int main () {
    vector <int> numbers;
    int size;

    cin >> size;
    initializer(size,numbers);

    vector <int> new2(numbers.size());

    cout << "Old ";;
    print_vector(numbers);
    cout << endl;

    new2 =  reverse_vec(numbers);

    cout << "New ";
    print_vector(new2);

    cout << endl;

    return 0;

}


