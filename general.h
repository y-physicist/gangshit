//
// Created by yPhysicist on 20.06.2022.
//
#include <iostream>

#ifndef GANGSHIT_GENERAL_H
#define GANGSHIT_GENERAL_H


class Animal {
public:
    friend std::ostream& operator<<(std::ostream& x, const Animal& y);
    Animal();
    Animal(int Age, std::string Vid, std::string Gender);
    void set_Age(int Age);
    void set_Vid(std::string Vid);
    void set_Gender(std::string Gender);
    int get_Age() const;
    std::string get_Vid() const;
    std::string get_Gender() const;
protected:
    int age;
    std::string vid, gender;
};

class Human : protected Animal {
public:
    Human();
    Human(int age1, std::string vid1, std::string gender1, std::string Family_Pos);
    //void getInfo();
protected:
    std::string family_pos;
};

class Buebus : protected Human {
public:
    Buebus();
    Buebus(int age2, std::string vid2, std::string gender2, std::string Family_Pos1, int Room);
    //void getInfo();
private:
    int room;
};


#endif //GANGSHIT_GENERAL_H
