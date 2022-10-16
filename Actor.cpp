#include "Actor.h"

using namespace std;

    Actor::Actor()
    {
        this->firstName = "";
        this->lastName = "";
        this->birthYear = 0;
    }
    Actor::Actor(std::string firstName, std::string lastName, int birthYear)
    {
        setFirstName(firstName);
        setLastName(lastName);
        setBirthYear(birthYear);
    }

    void Actor::setFirstName(std::string firstName)
    {
        this->firstName = firstName;
    }
    std::string Actor::getFirstName()
    {
        return this->firstName;
    }

    void Actor::setLastName(std::string lastName)
    {
        this->lastName = lastName;
    }
    std::string Actor::getLastName()
    {
        return this->lastName;
    }

    void Actor::setBirthYear(int birthYear)
    {
        this->birthYear = birthYear;
    }
    int Actor::getBirthYear()
    {
        return this->birthYear;
    }


