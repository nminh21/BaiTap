#include <iostream>
using namespace std;

class tong{
public:
	int add(int a,int b){
		return a+b;
	}
};

int main(){
	int A,B;
	cin >> A >> B;
	tong s;
	int sum = s.add(A,B);
	cout << sum << endl;
	return 0;
}
