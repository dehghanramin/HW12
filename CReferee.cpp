#include "CReferee.hpp"
#include <iostream>

CReferee::CReferee() :
id("R000"),
firstname("None"),
lastname("None"),
grade(UNKNOWN) {}

CReferee::CReferee(std::string const& id_, std::string const& first, std::string const& last, RefereeGrade const& grade_) :
id(id_),
firstname(first),
lastname(last),
grade(grade_) {}

CReferee::~CReferee() {}

void CReferee::setGrade(RefereeGrade const& grade_)
{
    grade = grade_;
}

RefereeGrade CReferee::getGrade() const
{
    return grade;
}

std::istream& operator>>(std::istream& ins, CReferee& obj) // Equilivant of getInfo()
{
    obj.promptUser("ID");
    ins >> obj.id;
    obj.promptUser("First Name");
    ins >> obj.firstname;
    obj.promptUser("Last Name");
    ins >> obj.lastname;
    obj.grade = obj.gradeSpinner();
}

void CReferee::promptUser(std::string const& prompt)
{
    std::cout << "Please Enter " << prompt << ":";
}

RefereeGrade CReferee::gradeSpinner()
{
    std::cout << "\tSelect Grade:\n"
              << "1. UNKNOWN\n"
              << "2. CLUB\n"
              << "3. STATE\n"
              << "4. NATIONAL\n"
              << "5. FIFA" << std::endl;
    short input;
    std::cin >> input;
    return convertShortToGrade(input);
}

RefereeGrade CReferee::convertShortToGrade(short const& input)
{
    switch (input)
    {
    case 1:
        return UNKNOWN;
        break;
    case 2:
        return CLUB;
        break;
    case 3:
        return STATE;
        break;
    case 4:
        return NATIONAL;
        break;
    case 5:
        return FIFA;
        break;
    default:
        std::cerr << "Error in conversion!" << std::endl;
        break;
    }
}