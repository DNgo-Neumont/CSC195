#pragma once
class Animal
{
public:
	Animal(int lifeSpan) {
		int setLifeSpan = lifeSpan;
	}
	~Animal() {
		std::cout << "Animal OBJECT destroyed";
	}
protected:
	void virtual Speak();
};

