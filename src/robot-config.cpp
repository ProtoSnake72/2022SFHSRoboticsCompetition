#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);

motor LeftMotor = motor(PORT15, ratio18_1, false);
motor RightMotor = motor(PORT14, ratio18_1, true);

motor TLFourBar = motor(PORT13, ratio36_1, true);
motor TRFourBar = motor(PORT9, ratio36_1, false);
motor BLFourBar = motor(PORT12, ratio36_1, false);
motor BRFourBar = motor(PORT10, ratio36_1, true);

drivetrain Drivetrain = drivetrain(LeftMotor, RightMotor, 319.19, 320, 130, mm, 1);

motor ClawMotor = motor(PORT3, ratio18_1, false);



// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  Brain.Screen.print("Device initialization...");
  Brain.Screen.setCursor(2, 1);
  // calibrate the drivetrain gyro
  wait(200, msec);

  // reset the screen now that the calibration is complete
  Brain.Screen.clearScreen();
  Brain.Screen.setCursor(1,1);
  wait(50, msec);
  Brain.Screen.clearScreen();
}