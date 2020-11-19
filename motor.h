#ifndef MOTORS_H_
#define MOTORS_H_

#define PTD0_Pin 0 	//Left forward
#define PTD1_Pin 1	//Left reverse
#define PTD2_Pin 2	//Right forward
#define PTD3_Pin 3	//Right reverse
#define ROBOT_FORWARD 1  //0001
#define ROBOT_BACKWARD 2 //0010
#define ROBOT_LEFT 4     //0100
#define ROBOT_RIGHT 8    //1000
#define ROBOT_STOP 0     //0000
#define FORWARD_LEFT 5 	 //0101
#define FORWARD_RIGHT 9  //1001
#define REVERSE_LEFT 6   //0110
#define REVERSE_RIGHT 10 //1010
//Duty cycle
#define FAST 100
#define MEDIUM 75
#define SLOW 40

int PWM(int);

void move(int);

void InitMotor(void);
#endif
