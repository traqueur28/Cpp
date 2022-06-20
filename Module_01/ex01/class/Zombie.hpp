#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class   Zombie
{

public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    void    announce(void);
    void    yourname(std::string name);
    static int  nbzombie;

private:
    std::string _name;
};


Zombie* zombieHorde(int N, std::string name);

#endif