#ifndef CHARACTER_H
#define CHARACTER_H

enum class Gender
{
    MALE,
    FEMALE,
    OTHER
};

class Character
{
public:
    Character(char* firstName, char* lastName, Gender gender, int age, bool alive);
    Character(Character&);
    ~Character();

    // Getters
    const char* GetFirstName() const;
    const char* GetLastName() const;
    Gender GetGender() const;
    int GetAge() const;
    bool IsAlive() const;

    // Setters
    void SetFirstName(const char*);
    void SetLastName(const char*);
    void SetGender(Gender);
    void SetAge(int);
    void SetAlive(bool);

private:
    char* firstName;
    char* lastName;
    Gender gender;
    int age;
    bool alive;
};

#endif
