/*#include <stdio.h>
#include <stdint.h>
#include <iostream>
using namespace std;
enum PlayerStatus
{
	PS_Walking,
	PS_Crouching,
	PS_Running
};
const float runSpeed = 700.f;
const float walkSpeed = 350.f;
const float crouchSpeed = 125.f;
const string walking = "walking.";
const string running = "running.";
const string crouching = "crouching.";
void UpdateMovementSpeed(PlayerStatus p_Status, float& speed);
void UpdateText(PlayerStatus p_Status, string& text);
int main(void)
{
	string text;
	float movementSpeed;
	PlayerStatus status = PS_Walking;
	UpdateText(status, text);
	UpdateMovementSpeed(status, movementSpeed);
	cout << "My speed is: " << movementSpeed << ", because im "<<text<< endl;
	return 0;
}
void UpdateMovementSpeed(PlayerStatus p_status, float& speed)
{
	switch (p_status)
	{
	case PS_Walking:
		speed = walkSpeed;
		break;
	case PS_Crouching:
		speed = crouchSpeed;
		break;
	case PS_Running:
		speed = runSpeed;
		break;
	default:
		speed = 350.f;
		break;
	}
}
void UpdateText(PlayerStatus p_Status, string& text)
{
	switch (p_Status)
	{
	case PS_Walking:
		text = walking;
		break;
	case PS_Crouching:
		text = crouching;
		break;
	case PS_Running:
		text = running;
		break;
	default:
		break;
	}
}*/