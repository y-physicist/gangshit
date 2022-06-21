//
// Created by yPhysicist on 20.06.2022.
//

#include "general.h"

Animal::Animal() {
    age = 0;
    vid, gender = "";
};

Animal::Animal(int Age, std::string Vid, std::string Gender) {
    age = Age;
    vid = Vid;
    gender = Gender;
};
std::ostream& operator<<(std::ostream& x, const Animal& y) {

    return x << "Age: " << y.get_Age() << ". Vid: " << y.get_Vid() << ". Gender: " << y.get_Gender() << "\n";
};

void Animal::set_Age(int Age) {
    age = Age;
};
void Animal::set_Vid(std::string Vid) {
    vid = Vid;
};
void Animal::set_Gender(std::string Gender) {
    gender = Gender;
};
int Animal::get_Age() const {
    return age;
};
std::string Animal::get_Vid() const {
    return vid;
};
std::string Animal::get_Gender() const {
    return gender;
};

Human::Human() : Animal() {
    family_pos = "";
};
Human::Human(int age1, std::string vid1, std::string gender1, std::string Family_Pos) : Animal(age1, vid1, gender1) {
    family_pos = Family_Pos;
};
/*void Human::getInfo() {
    std::cout << "Age: " << age << ". Vid: " << vid << ". Gender: " << gender << ". Family position: " << family_pos << std::endl;
};*/

Buebus::Buebus() {
    int room = 0;
};
Buebus::Buebus(int age2, std::string vid2, std::string gender2, std::string Family_Pos1, int Room) : Human(age2, vid2, gender2, Family_Pos1) {
    room = Room;
};
/*void Buebus::getInfo() {
    std::cout << "Age: " << age << ". Vid: " << vid << ". Gender: " << gender << ". Family position: " << family_pos << ". Room: " << room << std::endl;
};*/