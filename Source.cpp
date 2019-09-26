#include <iostream>
#include <string>

/*napisati funkciju koja prima jedan pozitivan broj
u sluèaju da je djeljiv s 3 naka vrati 'fizz'
u sluèaju da je djeljiv s 5 neka vrati buzz
u sluèaju da je djeljiv s 3 i 5 neka vrati fizz-buzz
u sluèaju da je djeljiv sa ni jednim  neka vrati " " (prazan string")
*/

std::string myFoo(unsigned int i)
{
	if (i % 3 == 0)
	{
		if (i % 5 == 0)
		{
			return "fizz-buzz";
		}
		return "fizz";

	}

	if (i % 5 == 0)
	{
		return "buzz";
	}
	else
	{
		return "    ";
	}

}
/*napisati prvi broj koje je djeljiv sa svim brojevima u intervalu od 1-4*/



int main()
{
	/*int i = 0;
	std::cout << "Unesite pozitivan broj: ";
	std::cin >> i;
	std::cout << myFoo(i) << std::endl;*/

	int i = 1;
	for (; ; ++i)
	{
		bool ivanovaCigareta = true;
		for (int j = 1; j <= 4; ++j)
		{
			if (i % j != 0)
			{
				ivanovaCigareta = false;
				break;
			}

		}
		if (ivanovaCigareta == true)
		{
			std::cout << i << std::endl;
			break;
		}

	}

	system("pause");
}