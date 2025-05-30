#include <vector>

//--------------------------
// Description:
//--------------------------

class System
{
private:
    // --- Forces ---
    std::vector<float> forceComp;    // Force Components
    std::vector<forceComp> forceList;    // Force list

    // --- Torques ---
    std::vector<float> torqueComp;   // Torque Components
    std::vector<torqueComp> torqueList;  // Torque list

public:
    System(std::vector<forceComp> forceList,
        std::vector<float> iniPos,
        std::vector<float> iniVel,
        std::vector<torqueComp> torqueList,
        std::vector<float> iniRotPos,
        std::vector<float> iniRotVel,
        )
}


// Make constructor for a system that includes the forces and torques that act on it, and its initial position and velocity.
// This will allow me to update velocity and position accordingly
void main()
{

}

