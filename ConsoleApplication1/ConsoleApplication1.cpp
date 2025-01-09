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
	std::string getTypeString(MonsterType type)
	{
		switch (type)
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
		std::cout << m_name << "is the " << getTypeString(m_type) << " that have " << m_health << " health points" << std::endl;
	}
private:
	MonsterType m_type;
	std::string m_name;
	int m_health;
};

int main()
{
	Monster jack(MonsterType::Orc, "Jack", 90);
	jack.Print();
	return 0;
}