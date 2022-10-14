#include <iostream>
#include <string>
using namespace std;
class Matrix
{
	private:
		static const int  row=2, col=2 ;
		int matrix[row][col];
	public:
		Matrix()
		{
			matrix[0][0] =1;
			matrix[0][1] =2;
			matrix[1][0] =3;
			matrix[1][1] =4;
		}

		string dim(void)
		{
			string str="";
			str += to_string(row);
		  str += " x ";
			str += to_string(col);
			return str;
		}

		string display(void){ 
			int r=0, c=0; 
			string strMatrix="";
			for(r=0; r < row; r++)
			{
				for(c=0; c < col; c++)
				{
					strMatrix+=to_string(matrix[r][c]) + "\t";
				}
				strMatrix += "\n";
			}
			return strMatrix;
		}
};

int main()
{
	Matrix m1;

	cout <<"Matrix m1: " << endl << m1.display();
	cout <<"Order of matrix: " << m1.dim()<<endl;
}

