#include<iostream>

class Entity {
private:
	float X, Y;
public:
	Entity() {
		X = 0.0f;
		Y = 0.0f;
	}

	Entity(float x, float y) {
		X = x;
		Y = y;
	}

	void Move(float dx, float dy) {
		X += dx;
		Y += dy;
	}
};

class Player : public Entity {
	const char* Name;
	Player() {
		Name = "";
	}

	Player(const char* name) {
		Name = name;
	}
};

int main() {
	//verificar este main
}