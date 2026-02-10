#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player();
    ~Player();
    void move(int direction);
    void jump();
    void attack();
    int getScore();
    void setScore(int score);

private:
    int score;
};

#endif // PLAYER_H
