#include "iostream"
#include "string"
enum MonsterType
{
	Dragon,
	Goblin,
	Ogre,
	Orc,
	Skeleton,
	Troll,
	Vampire,
	Zombie,
	MAX_MONSTER_TYPES
};

class Monster
{
public:
	Monster(MonsterType type, std::string name, int health): m_type(type), m_name(name), m_health(health)
	{
	}
	std::string getTypeString()
	{
		switch (m_type)
		{
		case Dragon:
			return "Dragon";
			break;
		case Goblin:
			return "Goblin";
			break;
		case Ogre:
			return "Ogre";
			break;
		case Orc:
			return "Orc";
			break;
		case Skeleton:
			return "Skeleton";
			break;
		case Troll:
			return "Troll";
			break;
		case Vampire:
			return "Vampire";
			break;
		case Zombie:
			return "Zombie";
			break;
		default:
			break;
		}
	}
	void Print() 
	{
		std::cout << m_name << " is the " << getTypeString() << " that have " << m_health << " health points" << std::endl;
	}
private:
	MonsterType m_type;
	std::string m_name;
	int m_health;
};

static class MosterGenerator
{
public:
	static Monster generateMonster()
	{
		return Monster(MonsterType::Orc, "Jack", 90);
	}
	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}
};

int main()
{
	Monster m = MosterGenerator::generateMonster();
	m.Print();

	return 0;
}