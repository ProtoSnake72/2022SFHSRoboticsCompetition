using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern drivetrain Drivetrain;
extern motor ClawMotor;
extern motor ArmMotor;
extern motor LeftMotor;
extern motor RightMotor;
extern motor TLFourBar;
extern motor TRFourBar;
extern motor BLFourBar;
extern motor BRFourBar;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );