#include <iostream>
#include <vector>
#include <string>

class Vector3
{
public:
	Vector3()
	{
		x = 0; y = 0; z = 0;
	}

	Vector3(int xPos, int yPos, int zPos)
	{
		x = xPos;
		y = yPos;
		z = zPos;
		floatingMember = 33.33f;
	}

	~Vector3()
	{
		std::cout << "Unistio sm se!" << std::endl;
	}

	Vector3 operator+(Vector3 second)
	{
		Vector3 result;
		result.x = x + second.x;
		result.y = y + second.y;
		result.z = z + second.z;
		return result;
	}
	
	//overloadat operatore -, *, /, !=, ==

	Vector3 operator-(Vector3 second)
	{
		Vector3 result;
		result.x = x - second.x;
		result.y = y - second.y;
		result.z = z - second.z;
		return result;
	}
	
	Vector3 operator*(Vector3 second)
	{
		Vector3 result;
		result.x = x * second.x;
		result.y = y * second.y;
		result.z = z * second.z;
		return result;
	}

	Vector3 operator/(Vector3 second)
	{
		Vector3 result;
		result.x = x / second.x;
		result.y = y / second.y;
		result.z = z / second.z;
		return result;
	}

	bool operator==(Vector3 second)
	{
		{
			if (x == second.x && y == second.y && z == second.z)
			{
				return true;
			}
			return false;
		}
	}

	bool operator!=(Vector3 second)
	{
		{
			if (x == second.x && y == second.y && z == second.z)
			{
				return false;
			}
			return true;
		}
	}


	

	void Print()
	{
		std::cout << "[" << x << ", " << y << ", " << z << "]" << std::endl;
	}

	int x, y, z;
	   
	int SumOfCoordinates()
	{
		return x + y + z;
	}

	float GetfloatingMember()
		{
			return floatingMember;
		}
	
	// DZ:
	//overloadat operatore ++, --, *=, /=
	//za hrabre: overloadat cout i cin 

	friend std::ostream & operator <<(std::ostream &output, const Vector3 &value) 
	{
		output << "[ " << value.x << ", " << value.y << ", " << value.z << "]";
		return output;
	}


	friend std::istream & operator >>(std::istream &input, Vector3 &value)
	{

		bool error = false;
		while (!error)
		{
			std::cout << "Enter value X: ";
			if (!(input >> value.x))
			{
				error = false;
			}
			else
			{
				error = true;
			}	
			std::cout << std::endl;		
			input.clear();
			input.ignore(10000, '\n');		
		}
		

		bool error2 = false;
		while (!error2)
		{
			std::cout << "Enter value Y: ";
			if (!(input >> value.y))
			{
				error2 = false;
			}
			else
			{
				error2 = true;
			}
			std::cout << std::endl;
			input.clear();
			input.ignore(10000, '\n');
		}

		bool error3 = false;
		while (!error3)
		{
			std::cout << "Enter value Z: ";
			if (!(input >> value.z))
			{
				error3 = false;
			}
			else
			{
				error3 = true;
			}
			std::cout << std::endl;
			input.clear();
			input.ignore(10000, '\n');
		}
		
		return input;
	}
private: 
	float floatingMember;
};

void iterate(int *arr)
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << *arr << std::endl;
		arr++;
	}
	//std::cout << i << std::endl; - i is out of scope and no longer exists!
}


int main()
{
	int number = 10;
	int number2 = 3;
	int* ref = &number;
	int** doubleRef = &ref;

	float fNumber = 10.5f;
	float* fRef = &fNumber;
	*ref = 30;
	int& refference = number;
	refference = number2;

	int* ptr = &number;
	std::cout << *ptr << std::endl;

	ptr = &number2;
	std::cout << *ptr << std::endl;
	

	Vector3 person = Vector3(10, 20, 30);
	

	std::cout << "Sum of person coordinates: " << person.SumOfCoordinates() << std::endl;
	std::cout << "Person's coordinate x: " << person.x << std::endl;
	std::cout << "Person's coordinate y: " << person.y << std::endl;
	std::cout << "Person's coordinate z: " << person.z << std::endl;

    std::cout << "Person's floating member value is: " << person.GetfloatingMember() << std::endl; 

	void* personPtr = &person;
	std::cout << ref << std::endl;
	std::cout << ptr << std::endl;
	std::cout << *ref << std::endl;
	
	int arr[] = { 1, 7, 3 };

	iterate(arr);

	std::cout << "Double refference: " << std::endl;
	std::cout << "Double refference address: " <<doubleRef << std::endl;
	std::cout << "Double refference value: " << *doubleRef << std::endl;
	std::cout << "Refference address: " << ref << std::endl;
	std::cout << "Refference value: " << *ref << std::endl;
	std::cout << "Double refference refference value: " << **doubleRef << std::endl;
	std::cout << "position vector je van scopea" << std::endl;

	{
		Vector3 position = Vector3(1, 2, 3);
	}
	
	Vector3 playerPosition = Vector3(35,28,13);
	Vector3 playerTwoPosition = Vector3(100, 100, 100);
	Vector3 sum = playerPosition + playerTwoPosition;
	Vector3 sub = playerPosition - playerTwoPosition;
	Vector3 multiply = playerPosition * playerTwoPosition;
	Vector3 devide = playerPosition / playerTwoPosition;
	

	std::cout << "Vrijednost sum vectora je: ";
	sum.Print();
	std::cout << std::endl;

	std::cout << "Vrijednost sub vectora je: ";
	sub.Print();
	std::cout << std::endl;

	std::cout << "Vrijednost multiply vectora je: ";
	multiply.Print();
	std::cout << std::endl;

	std::cout << "Vrijednost divide vectora je: ";
	devide.Print();
	std::cout << std::endl;
	
	
	if (playerPosition == playerTwoPosition)
	{
		std::cout << "Vrijednost oba vektora je jednaka! " << std::endl;		
	}
	else std::cout << "Ova dva vektora su razlicita" << std::endl;
	

	std::cin >> sum;
	std::cout << sum << std::endl; 


	system("pause");

}