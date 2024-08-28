#include <iostream>
#include <cstring>
#include <iomanip> //library untuk setw()
#include <ctime>


using namespace std;

int main ()
{

	
	string fullAttend[] = {"a1", "b2", "c3"}; 		//full nama nama murid
	string onAttend[] = {};
	string lateAttend[] = {};
	
	
	int x;
	time_t curr_time;
	string name;
	
	while (true)
	{
		cin >> name;
		x=0;	
		
		while (x < sizeof(fullAttend) / sizeof(string))		// looping when x is less then the length of array itself. in this situation is 3.
		{																					
			if (name != fullAttend[x])
			{
				x++;										//when the input is not match with array1, then will checking match with array2 and so on..
			}												// until it reach the last array and no matching. then input again.
			else
			{
				// di area ini harusnya ada if lagi untuk check waktu
				// setelah check waktu. input ditambahkan ke array yang sesuai
				// pertinyiinyi gimana check waktunya cok
				// updated terjawab dengan tm_local
				
				curr_time = time(0);
				tm *tm_local = localtime(&curr_time);
				
				if ((tm_local->tm_hour <= 15)) 
				{
					cout << name;
					cout << " success";
					//masukin ke array onattend
				}
				else
				{
					cout << "LATE";
					//masukin ke array lateattend
				}
															
				break;										
			}
		}
	}														
	
		//setelah input masuk ke array. bagaimana cara menghentikan looping input name
		//dan memasuki fase result atau report
		//sebelum itu bagaimana cara membuat array atau langsung memanggil orang yang tidak datang
	

	
	

	
	
	return 0;
}
