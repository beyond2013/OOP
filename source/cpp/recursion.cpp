#include <iostream>
using namespace std;
int fact(int);
int main(){
	int num, i;
	int result=0;

	cout << "Enter number to calculate factorial";
	cin >> num;
  result = fact(num);
	cout << "factorial of " << num << " is " << result;
  return 0;

}
	int fact(int n){
    int answer=1;
		if(n <= 0 ){
			return answer;
		}
		answer *= n * fact(n-1);
	}
