#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat buroA("Bureaucrate A", 1);
        std::cout << buroA << std::endl;
        buroA.incrementGrade();
    } 
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat buroB("Bureaucrate B", 150);
        std::cout << buroB << std::endl;
        buroB.decrementGrade();
    } 
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}