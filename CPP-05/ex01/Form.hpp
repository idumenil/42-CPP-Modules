#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
    Form( const std::string& name, int gradeToSign );
    Form( const std::string& name, int gradeToSign, int gradeToExecute, bool sign );
    Form( const Form& src );
    ~Form();

    Form&   operator=( const Form& rhs );

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    void        beSigned( const Bureaucrat& bureaucrat );

    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };

private:
    const std::string   _name;
    const int           _gradeToSign;
    const int           _gradeToExecute;
    bool                _signed;

};

std::ostream&   operator<<( std::ostream& o, const Form& rhs );

#endif