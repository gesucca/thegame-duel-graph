#include <SFML/Window.hpp>

#define MAX_PATH_LEN 30

typedef struct {
	sf::Keyboard::Key goRight;
	sf::Keyboard::Key goLeft;
	sf::Keyboard::Key goUp;
	sf::Keyboard::Key goDown;

	sf::Keyboard::Key teleport;

	sf::Keyboard::Key ability1;
	sf::Keyboard::Key ability2;
	sf::Keyboard::Key ability3;
	sf::Keyboard::Key ability4;
} ControlSet;

typedef struct {
	float dmg;
	float bulletWeight;
	float bulletSpeed;
	float shootSpeed;
	float manaCost;
	char bulletImg[MAX_PATH_LEN];
	char bulletExplImg[MAX_PATH_LEN];
	char bulletSoundFx[MAX_PATH_LEN];
	int explFrames;
	int explDecay;
	int crazyness;
} Ability;

typedef struct {
	Ability a1;
	Ability a2;
	Ability a3;
	Ability a4;
} AbilitySet;

typedef struct {
	float hp;
	float maxHp;
	float mp;
	float maxMp;
	float manaRegen;
	float weigth;
	float collisionDmg;
	float maxSpeed;
	float accel;
	float decel;
	float teleportDist;
	AbilitySet ws;
} Stats;