#include <iostream>
using namespace std;
class Matrix
{
	private:
		int matrix[2][2];
	public:
		Matrix()
		{
			matrix[0][0] =1;
			matrix[0][1] =2;
			matrix[1][0] =3;
			matrix[1][1] =4;
		}

		void display(void){ 
			int row=0, col=0; 
			for(row=0; row < 2; row++)
			{
				for(col=0; col <2; col++)
				{
					cout<<matrix[row][col]<<"\t";
				}
				cout<<endl;
			}
		}
};

int main()
{
	Matrix m1;

	cout << "m1 : " << endl;
	m1.display();
}

