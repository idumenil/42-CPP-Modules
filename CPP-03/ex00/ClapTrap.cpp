#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap constructor called: " << _name << " is created!" << std::endl;
    return;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap destructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap( const ClapTrap &rhs ) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = rhs;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& rhs ) {
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void    ClapTrap::attack( std::string const& target ) {
    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (_hitPoints <= amount) {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
    _hitPoints -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (_energyPoints <= amount) {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    _energyPoints -= 1;
    _hitPoints += amount;
}

void    ClapTrap::displayStatus( void ) {
    std::cout << std::endl;
    std::cout << _name << "'s statut:" << std::endl;
    std::cout << "hitPoints: " << _hitPoints << std::endl;
    std::cout << "energyPoints: " << _energyPoints << std::endl;
    std::cout << "attackDamage: " << _attackDamage << std::endl;
    std::cout << std::endl;
}