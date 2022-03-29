#include "MobilePhone.h"
#include "time.h"

int Random()
{
	const int UP_BOUND = 1000;
	const int LOW_BOUND = 0;
	//srand(time(0));
	return (rand() % (LOW_BOUND - UP_BOUND + 1) + LOW_BOUND);
}

MobilePhone::MobilePhone()
{
	firm = "firm";
	size = 0;
	weight = 0;
	melodies = 0;
	price = 0;
	colorDisplay = false;
	vibratingAlert = false;
	notebook = false;
}

MobilePhone::MobilePhone(std::string firm = "firm", int size = 0, int weight = 0, int melodies = 0, int price = 0, bool colorDisplay = false, bool vibratingAlert = false, bool notebook = false, MobilePhone* next = nullptr)
{
	setFirm(firm);
	setSize(size);
	setWeight(weight);
	setMelodies(melodies);
	setPrice(price);
	setColorDisplay(colorDisplay);
	setVibratingAlert(vibratingAlert);
	setNotebook(notebook);
	this->next = next;
}

std::string MobilePhone::getFirm()
{
	return std::string(firm);
}

int MobilePhone::getSize()
{
	return (size);
}

int MobilePhone::getWeight()
{
	return (weight);
}

int MobilePhone::getMelodies()
{
	return (melodies);
}

int MobilePhone::getPrice()
{
	return (price);
}

int MobilePhone::getKey()
{
	return (key);
}

std::string MobilePhone::getColorDisplay()
{
	if (colorDisplay == true)
		return("color");
	else
		return("mono");
}

std::string MobilePhone::getVibratingAlert()
{
	if (vibratingAlert == true)
		return ("+");
	else
		return ("-");
}

std::string MobilePhone::getNotebook()
{
	if (notebook == true)
		return ("+");
	else
		return ("-");
}

void MobilePhone::setFirm(std::string firm)
{
	this->firm = firm;
	this->key += std::atoi(firm.c_str());
}

void MobilePhone::setSize(int size)
{
	this->size = size;
	this->key += size;
}

void MobilePhone::setKey(int key)
{
	this->key = key;
}



void MobilePhone::setWeight(int weight)
{
	this->weight = weight;
	this->key += weight;
}

void MobilePhone::setMelodies(int melodies)
{
	this->melodies = melodies;
	this->key += melodies;
}

void MobilePhone::setPrice(int price)
{
	this->price = price;
	this->key += price;
}

void MobilePhone::setColorDisplay(bool colorDisplay)
{
	this->colorDisplay = colorDisplay;
}

void MobilePhone::setVibratingAlert(bool vibratingAlert)
{
	this->vibratingAlert = vibratingAlert;
}

void MobilePhone::setNotebook(bool notebook)
{
	this->notebook = notebook;
}

void MobilePhone::setRangomObject()
{
	std::string firms[5] = {"apple", "samsung", "honor", "oneplus", "huawei"};
	int sizes[4] = {6, 7, 8, 9};
	int weights[5] = {100, 105, 110, 115, 120};
	int melodiess[5] = {15, 17, 20, 22, 25};
	int prices[5] = {300, 400, 500, 600};
	setFirm(firms[Random()%5]);
	setSize(sizes[Random() % 4]);
	setWeight(weights[Random() % 5]);
	setMelodies(melodiess[Random() % 5]);
	setPrice(prices[Random() % 5]);
	setColorDisplay(Random() % 2);
	setVibratingAlert(Random() % 2);
	setNotebook(Random() % 2);
}

std::ostream& operator<<(std::ostream& out, MobilePhone& P)
{
	std::cout << P.getFirm() << " " << P.getSize() << " " << P.getWeight() << " " << P.getColorDisplay() << " " << P.getVibratingAlert() << " " << P.getMelodies() << " " << P.getNotebook() << " " << P.getPrice() << " " << "Key: " << P.getKey() << "\n";

	return out;
}

std::istream& operator>>(std::istream& in, MobilePhone& P)
{
	std::cout << "firm, size, weight, number of melodies, price, color display, vibrating alert, notebook " << "\n";
	std::cout << "firm = ";
	std::cin >> P.firm;
	std::cout << "size = ";
	std::cin >> P.size;
	std::cout << "weight = ";
	std::cin >> P.weight;
	std::cout << "number of melodies = ";
	std::cin >> P.melodies;
	std::cout << "price = ";
	std::cin >> P.price;
	std::cout << "color display = ";
	std::cin >> P.colorDisplay;
	std::cout << "vibrating alert = ";
	std::cin >> P.vibratingAlert;
	std::cout << "notebook = ";
	std::cin >> P.notebook;


	return in;
}

