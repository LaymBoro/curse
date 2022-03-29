#pragma once
#include<string>
#include<iostream>



	class MobilePhone
	{
	private:

		std::string firm;
		int size, weight, melodies, price;
		bool colorDisplay, vibratingAlert, notebook;
		MobilePhone* next;
		int key = 0;

	public:
		MobilePhone();
		MobilePhone(std::string firm, int size, int weight, int melodies, int price, bool colorDisplay, bool vibratingAlert, bool notebook, MobilePhone* next);
		friend std::ostream& operator << (std::ostream& out, MobilePhone& P);
		friend std::istream& operator >> (std::istream& in, MobilePhone& P);
		std::string getFirm();
		int getSize();
		int getWeight();
		int getMelodies();
		int getPrice();
		int getKey();
		std::string getColorDisplay();
		std::string getVibratingAlert();
		std::string getNotebook();
		void setFirm(std::string firm);
		void setSize(int size);
		void setKey(int key);
		void setWeight(int weight);
		void setMelodies(int melodies);
		void setPrice(int price);
		void setColorDisplay(bool colorDisplay);
		void setVibratingAlert(bool vibratingAlert);
		void setNotebook(bool notebook);
		void setRangomObject();
	};

