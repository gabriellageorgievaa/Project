#include "Character.h"
#include <cstring>

#if __cplusplus < 201103L
#ifndef nullptr
#define nullptr NULL
#endif // nullptr
#endif // __cplusplus < 201103L

Character::Character(char* firstName, char* lastName, Gender gender, int age, bool alive)
{
    SetFirstName(firstName);
    SetLastName(lastName);
    SetGender(gender);
    SetAge(age);
    SetAlive(alive);
}

Character::Character(Character& character)
{
    SetFirstName(character.firstName);
    SetLastName(character.lastName);
    SetGender(character.gender);
    SetAge(character.age);
    SetAlive(character.alive);
}

Character::~Character()
{
    delete[] firstName;
    delete[] lastName;
}

const char* Character::GetFirstName() const
{
    return firstName;
}

const char* Character::GetLastName() const
{
    return lastName;
}

const char* Character::GetGender() const
{
    return gender;
}

const char* Character::GetAge() const
{
    return age;
}

const char* Character::IsAlive() const
{
    return alive;
}

void Character::(const char* firstName)
{
    delete[] this.firstName;
    if (firstName != nullptr)
    {
        size_t len = strlen(firstName);
        if (strlen(firstName) != 0)
        {
            this.firstName = new char[len + 1];
            strcpy(this.firstName, firstName);
        }
        else
        {
            this.firstName = new char[1];
            this.firstName[0] = '\0';
        }
    }
    else
    {
        this.firstName = new char[1];
        this.firstName[0] = '\0';
    }
}

void Character::(const char* lastName)
{
    delete[] this.lastName;
    if (lastName != nullptr)
    {
        size_t len = strlen(lastName);
        if (strlen(lastName) != 0)
        {
            this.lastName = new char[len + 1];
            strcpy(this.lastName, lastName);
        }
        else
        {
            this.lastName = new char[1];
            this.lastName[0] = '\0';
        }
    }
    else
    {
        this.lastName = new char[1];
        this.lastName[0] = '\0';
    }
}

void Character::SetGender(Gender gender)
{
    this.gender = gender;
}

void Character::SetAge(int age)
{
    this.age = age;
}

void Character::SetAlive(bool alive)
{
    this.alive = alive;
}