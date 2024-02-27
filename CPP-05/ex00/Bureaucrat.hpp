#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <stdexcept>
#include <iostream>
#include <string>

class Bureaucrat {

    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &rhs);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

        void          incrementGrade();
        void          decrementGrade();

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    private:
        const std::string _name;
        int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif