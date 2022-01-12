#include <iostream>
#include <vector>
#include <algorithm>
#include "make_random_vector.hpp"

using namespace std;

template<class T>
int fun(const T& a, const T& b)
{
    return a > b;
}

class A
{
public:
    int operator()(const int& a, const int& b) { return a > b; }
    int operator()(const int& a) { return a > _a; }

    int _a;
};

int fun(const int& a)
{
    return a > 7;
}

class Student
{
public:
    int idx;

};

int main()
{
	cout << "Hello!" << endl;
    /*
    auto vec = make_random_vector< int >(10, 0, 100);
        sort(vec.begin(), vec.end());
    unique(vec.begin(), vec.end());
        vec.resize(unique(vec.begin(), vec.end()) - vec.begin());

    for (auto& a : vec)
            cout << a << ", ";
    cout << endl;

    vector< Student > svec(vec.size());
    for (int i = 0; i < vec.size(); ++i)
        svec[i].idx = vec[i];
    for (auto& a : svec)
        cout << a.idx << ", ";
    cout << endl;

    cout << count_if(svec.begin(), svec.end(), [](const Student& a) { return a.idx > 55; }) << endl;*/

	/* auto vec = make_random_vector< int >(10, 0, 10);
	for (auto& a : vec) cout << a << ", ";
    cout << endl;
	
	sort(vec.begin(), vec.end());
    //sort(&vec[0], vec.end());		ale elementy musza byc tego samego typu
    for (auto& a : vec) cout << a << ", ";
    cout << endl;

	int a = count(vec.begin(), vec.end(), 7);
    cout << a << endl;

	//sort(vec.begin(), vec.end(), fun<int>);
    sort(vec.begin(), vec.end(), A());
    for (auto& a : vec)
        cout << a << ", ";
    cout << endl;

    //A b;
    //cin >> b._a;
    cout << count_if(vec.begin(), vec.end(), fun) << endl;
    //cout << count_if(vec.begin(), vec.end(), b) << endl;

    // Lambda
    //[to co chcemy zlapac](argumenty) {cialo}
    auto lambda_sin = [](double x) { return sin(x); };
    cout << lambda_sin(10) << endl;
    cout << lambda_sin(3.141592) << endl;

    int  b;
    cin >> b;
    //auto comp = [&](const int& a) { return a > b; };    //& to przechwycenie wszystkiego
    //auto comp = [b](const int& a) { return a > b; };
    //cout << count_if(vec.begin(), vec.end(), comp) << endl;

    cout << count_if(vec.begin(), vec.end(), [b](const int& a) { return a > b; }) << endl;*/


    auto vec = make_random_vector< int >(10, 0, 10);
    for (auto& a : vec) cout << a << ", ";
    cout << endl;

    reverse(vec.begin(), vec.end());
    for (auto& a : vec) cout << a << ", ";
    cout << endl;

	return 0;
}