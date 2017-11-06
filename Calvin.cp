//
//  main.cpp
//  Cow
//
//  Created by F.R. on 1/27/16.
//  Copyright? Nah
//

#include <iostream>
#include <string>

int main(void) {
    using std::cin;
    using std::cout;
    using std::string;
    string feeling = "";
    string food = "";
    string cow = "";
    cout << "Hey, user! :)\nMy name is Calvin!\nWhat's your name?\nIf it says lldb, say continue\nthen say your name. :)\n";
    string name = "";
    cin >> name;
    cout << "Well then, hello " << name.c_str() << "!\nI'm doing quite fine today being a program!\n How are you feeling today?\n:) \n";
    cin >> feeling;
    cout << "I am glad that you are feeling " << feeling.c_str() << "!\n But if you are sad, I am sorry for offending you.\n Now, what's your favorite food? :)";
    cin >> food;
    cout << "Wow! Such a coincidence!\nI love " << food.c_str() << "! \nCan you get me some right now? \nJust joking, i'm a personal robot to talk to when you are bored. \nWell, it was nice to get to know you. \nI think I'm getting tired now. \nI'm going to go to sleep. Night.\nType in kill to help me go to sleep.\nDon't worry, I will still be alive.\nJust open me again!\n;)\n";
    cin >> cow;
    return 0;
}
