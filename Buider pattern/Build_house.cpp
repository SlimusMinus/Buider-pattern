#include "Build_house.h"


int main()
{
	Director dir;
	Elite_House_1 EH1;
	Elite_House_2 EH2;
	Elite_House_3 EH3;

	House* el1 = dir.createHouseBuilder(EH1);
	House* el2 = dir.createHouseBuilder(EH2);
	House* el3 = dir.createHouseBuilder(EH3);

	cout << "Elite House # 1 have" << endl;
	Sleep(1000);
	el1->build();
	cout << "\nElite House # 2 have:" << endl;
	Sleep(1000);
	el2->build();
	cout << "\nElite House # 3 have:" << endl;
	Sleep(1000);
	el3->build();
	return 0;
}


