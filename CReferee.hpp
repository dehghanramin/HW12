#ifndef _CREFEREE_HPP_
#define _CREFEREE_HPP_

#include <string>

enum RefereeGrade {UNKNOWN, CLUB, STATE, NATIONAL, FIFA};

class CReferee
{
public:
    CReferee();
    CReferee(std::string const& = "R000", std::string const& = "None", std::string const& = "None", RefereeGrade const& = UNKNOWN);
    ~CReferee();
    friend std::istream& operator>>(std::istream&, CReferee&);
    friend std::ostream& operator<<(std::ostream&, CReferee&);
    void setGrade(RefereeGrade const&);
    RefereeGrade getGrade() const;
    std::string id;
    std::string firstname;
    std::string lastname;
private:
    RefereeGrade grade;
    void promptUser(std::string const&);
    RefereeGrade gradeSpinner();
    RefereeGrade convertShortToGrade(short const&);
};

#endif