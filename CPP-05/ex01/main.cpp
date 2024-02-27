#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat buro("Bernard", 21);
        //Bureaucrat buro("Bernard", 17);
        Form form("Formulaire 924B", 20);

        buro.signForm(form);

        std::cout << form << std::endl;
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}