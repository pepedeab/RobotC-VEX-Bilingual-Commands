#pragma config(Sensor, in1,    sigueLinea,   sensorLineFollower)
#pragma config(Sensor, in2,    regulador,  sensorPotentiometer)
#pragma config(Sensor, in3,    fotoSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  botonFin,    sensorTouch)
#pragma config(Sensor, dgtl2,  boton,     sensorTouch)
#pragma config(Sensor, dgtl3,  cuentaVueltas,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_cm)
#pragma config(Sensor, dgtl12, led,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           motorIzquierdo,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port8,           linterna,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
#pragma config(Motor,  port10,          motorDerecho,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "robotx.h"	//Includes the RobotX library

task main()
{
	// Escriba su c�digo aqu�
	while (true)											//Bucle infinito (Comprueba continuamente)
	{
		if (valor(boton) == 1)					//Si se pulsa el bot�n (valor = 1)
		{
			ponMotor(motorIzquierdo, 90);	//Enciende Motor Izquierdo con velocidad 90
			espera(2);										//Espera 2 segundos y luego continua el programa
			retrocede(50);								//Retrocede con velocidad 50
			espera(1);										//Espera 1 segundo
			giroIzquierdaTiempo(90, 2);		//Gira a la izquierda con velocidad 90 durante 2 segundos y despu�s para
			giroDerechaTiempo(90, 2);			//Gira a la derecha con velocidad 90 durante 2 segundos y despu�s para
			avanzaTiempo(95, 2);					//Avanza con una velocidad de 95 durante 2 segundos y despu�s para
			giroRapido(-50, 3); 					//Giro rapido hacia la izquierda (negativo) durante 1 segundo y despues para
			para();												//Para los motores izquierdo y derecho
		}
	}
}
