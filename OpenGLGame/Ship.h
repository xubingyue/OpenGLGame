/*
 * This is a class for generic ships. Any size, class, race, faction, type... all go here
 * Templates will probably be loaded from a .xml file, similar to Artemis
*/
#ifndef _SHIP_H_
#define _SHIP_H_

#include "SpaceObject.h"

typedef struct
{
	float maxSpeed; //In m/s
	float maxAcceleration; //In m/s
	float maxTurnRate; //In deg/s
	float maxTurnAcceleration; //In deg/s
	//float maxHitPoints;
	//float maxArmor;
	//float maxShields;
	//int maxEnergy;
	//bool friendly;
	//float beamDamage;
	//float missileDamage;
} ShipInfo;

class Ship : public SpaceObject
{
private:
	//Constants
	float maxSpeed;
	float maxAcceleration;
	float maxTurnRate;
	float maxTurnAcceleration;
	//int maxHitPoints;
	//int maxArmor;
	//int maxShields;
	//int maxEnergy;
	//bool friendly;
	//Variables
	float velocity;
	float turnRate;
	float rollRate;
	glm::vec2 destination;

public:
	Ship(ShipInfo info);
	~Ship();

	void SetDestination(vec2 dest);
	vec2 GetDestination();
	float GetVelocity();
	void Stop();

	virtual void Update(float seconds);
	virtual void Render(ShaderProgram *shader);
};

#endif