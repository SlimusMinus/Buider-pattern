#include <iostream>
#include <vector>
#include <windows.h>


using namespace std;
class Foundation
{
public:
	void build() { cout << "foundation" << endl; }
};
class Walls
{
public:
	void build() { cout << "walls" << endl; }
};
class Roof
{
public:
	void build() { cout << "Roof" << endl; }
};
class Windows
{
public:
	void build() { cout << "Windows" << endl; }
};
class Doors
{
public:
	void build() { cout << "doors" << endl; }
};
class Home_decoration
{
public:
	void build() { cout << "home decoration" << endl; }
};

class Pool
{
public:
	void build() { cout << "pool" << endl; }
};
class Lounge_area
{
public:
	void build() { cout << "lounge area" << endl; }
};

class Garden
{
public:
	void build() { cout << "garden" << endl; }
};

class House
{
public:
	vector<Foundation> vFound;
	vector<Walls> vWalls;
	vector<Roof> vRoof;
	vector<Windows> vWind;
	vector<Doors> vDoor;
	vector<Home_decoration> vHD;
	vector<Pool> vPool;
	vector<Lounge_area> vLA;
	vector<Garden> vGard;

	void build()
	{
		int i;
		for (i = 0; i < vFound.size(); ++i)  vFound[i].build();
		Sleep(200);
		for (i = 0; i < vWalls.size(); ++i)  vWalls[i].build();
		Sleep(200);
		for (i = 0; i < vRoof.size(); ++i)  vRoof[i].build();
		Sleep(200);
		for (i = 0; i < vWind.size(); ++i)  vWind[i].build();
		Sleep(200);
		for (i = 0; i < vDoor.size(); ++i)  vDoor[i].build();
		Sleep(200);
		for (i = 0; i < vHD.size(); ++i)  vHD[i].build();
		Sleep(200);
		for (i = 0; i < vPool.size(); ++i)  vPool[i].build();
		Sleep(200);
		for (i = 0; i < vLA.size(); ++i)  vLA[i].build();
		Sleep(200);
		for (i = 0; i < vGard.size(); ++i)  vGard[i].build();
		Sleep(200);
	}
};


class HouseBuilder
{
protected:
	House* p;
public:
	HouseBuilder() : p(0) {}
	virtual ~HouseBuilder() {}
	virtual void create_HouseBuilder() {}
	virtual void build_Foundation() {}
	virtual void buil_Walls() {}
	virtual void build_Roof() {}
	virtual void build_Windows() {}
	virtual void build_Doors() {}
	virtual void build_Home_decoration() {}

	virtual void build_Pool() {}
	virtual void build_Lounge_area() {}
	virtual void build_Garden() {}
	virtual House* getHouseBuilder() { return p; }
};


class Elite_House_1 : public HouseBuilder
{
public:
	void create_HouseBuilder() { p = new House; }
	void buil_Walls() { p->vWalls.push_back(Walls()); }
	void build_Foundation() { p->vFound.push_back(Foundation()); }
	void build_Roof() { p->vRoof.push_back(Roof()); }
	void build_Windows() { p->vWind.push_back(Windows()); }
	void build_Doors() { p->vDoor.push_back(Doors()); }
	void build_Home_decoration() { p->vHD.push_back(Home_decoration()); }
	void build_Pool() { p->vPool.push_back(Pool()); }
};


class Elite_House_2 : public HouseBuilder
{
public:
	void create_HouseBuilder() { p = new House; }
	void build_Foundation() { p->vFound.push_back(Foundation()); }
	void buil_Walls() { p->vWalls.push_back(Walls()); }
	void build_Roof() { p->vRoof.push_back(Roof()); }
	void build_Windows() { p->vWind.push_back(Windows()); }
	void build_Doors() { p->vDoor.push_back(Doors()); }
	void build_Home_decoration() { p->vHD.push_back(Home_decoration()); }
	void build_Pool() { p->vGard.push_back(Garden()); }

};

class Elite_House_3 : public HouseBuilder
{
public:
	void create_HouseBuilder() { p = new House; }
	void build_Foundation() { p->vFound.push_back(Foundation()); }
	void buil_Walls() { p->vWalls.push_back(Walls()); }
	void build_Roof() { p->vRoof.push_back(Roof()); }
	void build_Windows() { p->vWind.push_back(Windows()); }
	void build_Doors() { p->vDoor.push_back(Doors()); }
	void build_Home_decoration() { p->vHD.push_back(Home_decoration()); }
	void build_Pool() { p->vLA.push_back(Lounge_area()); }

};


class Director
{
public:
	House* createHouseBuilder(HouseBuilder& builder)
	{
		builder.create_HouseBuilder();
		builder.buil_Walls();
		builder.build_Foundation();
		builder.build_Roof();
		builder.build_Windows();
		builder.build_Doors();
		builder.build_Home_decoration();
		builder.build_Garden();
		builder.build_Lounge_area();
		builder.build_Pool();
		return(builder.getHouseBuilder());
	}
};



