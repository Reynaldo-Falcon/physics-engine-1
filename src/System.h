#include <vector>

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
        );

    // Setters
    void setPos(std::vector<float> pos);
    void setVel(std::vector<float> vel);
    void setAngPos(std::vector<float> angPos);
    void setAngVel(std::vector<float> angVel);

    // Getters
    std::vector<float> getPos();
    std::vector<float> getVel();
    std::vector<float> getAngPos();
    std::vector<float> getAngVel();

};