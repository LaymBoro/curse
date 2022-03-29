#include "list.h"



using namespace std;

int main()
{
	List<MobilePhone> list;
	int menu;


	while (true)
	{
		cout << "1)Output \n"
			<< "2)Find by key \n"
			<< "3)Delete by index \n"
			<< "4)Push by index \n"
			<< "5)Push back random object \n"
			<< "6)Exit";

		cin >> menu;
		switch (menu)
		{

		case 1:
		{
			cout << "created list: \n";
			list.Print();
			break;
		}
		case 2:
		{
			int key;
			cout << "input key \n";
			cin >> key;
			list.findByKey(key);
			break;
		}
		case 3:
		{
			int key;
			cin >> key;
			list.erase(key);

			cout << "new list: \n";
			list.Print();
			break;
		}
		case 4:
		{
			size_t to;
			MobilePhone data;
			cout << "input object";
			cin >> data;
			cout << "input index to push";
			cin >> to;
			list.push_index(data, to);

			cout << "new list: \n";
			list.Print();
			break;
		}
		case 5:
		{
			MobilePhone obj;
			obj.setRangomObject();
			list.push_back(obj);
			break;
		}
		case 6:
		{
			exit(EXIT_SUCCESS);
			break;
		}
		}
	}
	
	return(0);
}