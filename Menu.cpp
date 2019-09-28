//
//  Menu.cpp
//  Rock-Paper-Scissors
//
//  Created by sean on 9/27/19.
//  Copyright © 2019 Sean. All rights reserved.
//

#include "Menu.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Menu::Menu()
{
    cout << "Welcome to Rock-Paper-Sciccors game\n";
    cout << "1. Start game\n 2. Show your result\n 3. Quit\n"; 
}

void Menu::start()
{
    cout << "Game started\n";
    
}

void Menu::quit()
{
    
    cout << "Game ends\n";
    exit(1);
}

void Menu::result()
{
    cout << "Here is your results\n";
}
