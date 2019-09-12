#include <iostream>
#include <vector>
#include <string>

/*
object
|_object
	|_object
		|_object

*/


/*
1
11
111
1111
11111
111111
*/





//namespace machina
//{
//	void std::cout(const char* value)
//	{
//		std::cout << value << std::endl;
//	}
//
//}




void PrintNumbers(int iterator, int count)
{
	if (iterator < count)
	{

		std::cout << iterator << std::endl;
		++iterator;
		PrintNumbers(iterator, count);
	}

}


void FibonacciArray(int max, int count=0, int previous=0, int current=1)
{
	if (count == 0)
	{
		std::cout << count << " : " << current <<  std::endl;
	}
	if (count < max - 1)
	{
		int nextNumber = previous + current;
		std::cout << count + 1 << " : " << nextNumber << std::endl;
		previous = current;
		++count;
		FibonacciArray(max, count, previous, nextNumber);
	}

}

//void Fibbonaci(int count, int N1, int N2, int n, int result)
//{
//	
//	
//
//	if ( count < n )
//	{
//	
//		result = N1 + N2;
//		N1 = N2;
//		N2 = result;
//
//
//		std::cout << result << std::endl;
//		++count;
//		Fibbonaci(n, count, result, N1, N2);
//
//	}
//
//}


int Sum(int numberOne, int numberTwo)
{
	int result = numberOne + numberTwo;

	return result;
}

int Divide(int numberOne, int numberTwo)
{
	int result = numberOne / numberTwo;

return result;

}

int Subtract(int numberOne, int numberTwo)
{
	int result = numberOne - numberTwo;

	return result;
}

int Multiply(int numberOne, int numberTwo)
{
	int result = numberOne * numberTwo;

	std::cout << "Rezultat mnozenja " << numberOne << " i " << numberTwo << " je " << result << std::endl;

	return result;
}


//void Steps (int step, int count=0, int n = 1)
//{
//	do 
//	{
//		int broj = n;
//		int pom = broj;
//		pom * 10 + broj;
//		++count;
//		std::cout << pom << std::endl;
//		Steps(step, count, n);
//	}
//	    while (count < step);
//
//}


/*
   0    1   2   3
| 115 | 5 | 6 | 10 |
*/


int main()
{

	//machina::cout("Machina output string");




	int twoDimensionalArray[3][3] =
	{   // y os
		{1, 5, 7}, //x os
	    {8, 3, 9},
	    {2, 4, 6}

	};



	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "[" << twoDimensionalArray[i][j] << "]" ;
		}
		std::cout << std::endl;
	}


	int threeDimensionalArray[3][3][3] =
	{   
		{
			{1, 5, 7}, 
			{8, 3, 9},
			{2, 4, 6}
		},
		{
			{10, 50, 70}, 
			{80, 30, 90},
			{20, 40, 60}
		},
		{
			{100, 500, 700}, 
			{800, 300, 900},
			{200, 400, 600}
		},
	};

	int matrica[4][4] = 
	{ 
		{9, -2, 8, 2}, 
		{-6, -2, 10, -9}, 
		{4, 5, 6, 1}, 
		{5, 3, 4, 9} 
	};

	int leftdiagonal = 0;
	int rightDiagonal = 0;
	int size = 4;
	for (int i = 0; i < 4; i++)
	{
		leftdiagonal += matrica[i][i];	
		rightDiagonal += matrica[--size][i];
	}

	
	for (int i = 3; i >= 0; i--)
	{
		

	}

	std::cout << leftdiagonal - rightDiagonal << std::endl;
	if (leftdiagonal - rightDiagonal == 0)
	{
		std::cout << "Matrica je najljepsa!" << std::endl;
	}
	else
	{
		std::cout << "Matrica je losa!" << std::endl;
	}


	/*int a = 0;
	int b = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i=j)
			{

				int A = matrica[i][j] + matrica[i][j]; 
				a = a + A;
			}
			
		}
		std::cout << std::endl;
	}


	for (int i = 3; i = 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i = j)
			{

				int A = matrica[i][j] + matrica[i][j];
				a = a + A;
			}

		}
		std::cout << std::endl;
	}*/

	std::cout << threeDimensionalArray[1][2][0] << std::endl;

	std::cin.get();
}