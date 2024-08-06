#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

class Player
{
private:
    std::string name; 
    int score;
    std::vector<std::string> playerItems; 

public:
    Player();
    Player(const std::string& name, int score, const std::vector<std::string>& playerItems);
    ~Player();

    std::string getName() const;
    int getScore() const;
    std::vector<std::string> getPlayerItems() const;

    void setName(const std::string& name);
    void setScore(int score);
    void setPlayerItems(const std::vector<std::string>& items);

    void addItems(const std::string& playerItems);
    void removeItems(const std::string& items);
    
    void printItems() const;
    
};

#endif