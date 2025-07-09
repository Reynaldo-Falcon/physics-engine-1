#include "System.h"
#include <vector>

//--------------------------
// Description:
//--------------------------

class System
{
private:

    // --- Forces ---
    std::vector<std::vector<float>> forceList;    // Force list

    // --- Torques ---
    std::vector<std::vector<float>> torqueList;  // Torque list

    // Translational Position and Velocity
    std::vector<float> pos;
    std::vector<float> vel;

    // Angular Position and Velocity
    std::vector<float> angPos;
    std::vector<float> angVel;

public:

    System(std::vector<std::vector<float>> forceList,
        std::vector<float> iniPos,
        std::vector<float> iniVel,
        std::vector<std::vector<float>> torqueList,
        std::vector<float> iniAngPos,
        std::vector<float> iniAngVel
        )
    {
        this->forceList = forceList;
        pos = iniPos;
        vel = iniVel;
        this->torqueList = torqueList;
        angPos = iniAngPos;
        angVel = iniAngVel;
    }

    // Setters
    void setPos(std::vector<float> pos) {this->pos = pos;}
    void setVel(std::vector<float> vel) {this->vel = vel;}
    void setAngPos(std::vector<float> angPos) {this->angPos = angPos;}
    void setAngVel(std::vector<float> angVel) {this->angVel = angVel;}

    // Getters
    std::vector<float> getPos() {return pos;}
    std::vector<float> getVel() {return vel;}
    std::vector<float> getAngPos() {return angPos;}
    std::vector<float> getAngVel() {return angVel;}

};
