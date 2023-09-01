#pragma once
class Stringg
{

	class Stringg
	{
	private:
		char* str = nullptr;
		int size;
		int usedsize;
		void usedsizer();

	public:
		Stringg();
		Stringg(int);
		Stringg(char*, int);
		Stringg(Stringg*);
		char* GetStr();
		void Print();
		int GetSize();
		int GetUsedSize();
	};


};

