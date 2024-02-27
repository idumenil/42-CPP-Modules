#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
    {
        Intern  someRandomIntern;
        AForm*   rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }

    try 
    {
        Bureaucrat bureaucrat("Jean", 8);
        ShrubberyCreationForm FormA("Shrubbery");
        RobotomyRequestForm FormB("Robotomy");
        PresidentialPardonForm FormC("President");

        std::cout << "\n********** FORM A - SHRUBERRY **********" << std::endl;
        bureaucrat.signForm(FormA);
        bureaucrat.executeForm(FormA);
        std::cout << "\n********** FORM B - ROBOTOMY **********" << std::endl;
        bureaucrat.signForm(FormB);
        bureaucrat.executeForm(FormB);
        bureaucrat.executeForm(FormB);
        bureaucrat.executeForm(FormB);
        bureaucrat.executeForm(FormB);
        std::cout << "\n********** FORM C - PRESIDENT **********" << std::endl;
        bureaucrat.signForm(FormC);
        bureaucrat.executeForm(FormC);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}