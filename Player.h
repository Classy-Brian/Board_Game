#ifndef PLAYER_H
#define PLAYER_H


#include <vector>
#include <string>


// player
    class Player{

        private:
            std::string name; 
            int score;
            std::vector<std::string> playerItems; 


        public:
            Player();
            Player(const std::string& name, int score, const std::string&playerItems);
            ~Player();

            std::string getName() const;
            int getScore() const;
            std::vector<std::vector<int>> getPlayerItems() const;

            void setName(const std::string& name);
            void setScore(int score);
            void add_items(std::string& playerItems);
            void remove_items(std::string& playerItems);
            void print_items(const std::vector<std::vector<int>> playerItems);
      
    };






#endif