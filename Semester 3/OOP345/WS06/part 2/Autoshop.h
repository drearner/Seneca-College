/**********************************************************************

Name: Jia Hua Zou

ID: 114383193

Date: Nov,11,2020

Lab6

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

**********************************************************************/
#ifndef SDDS_AUTOSHOP_H_
#define SDDS_AUTOSHOP_H_
#include <iostream>
#include <vector>
#include <list>
#include "Vehicle.h"

namespace sdds {

	class Autoshop
	{
	public:
		Autoshop();
		~Autoshop();

		Autoshop& operator +=(Vehicle* theVehicle);
		void display(std::ostream& out) const;

		template<typename T>
		void select(T test, std::list<const Vehicle*>& vehicles) {
			for (auto i = m_vehicles.begin(); i != m_vehicles.end(); i++)
			{
				if (test(*i))
				{
					vehicles.push_back(*i);
				}
			}
		}
	private:
		std::vector<Vehicle*> m_vehicles; //vector to store all vehicles
	};
}
#endif // !SDDS_AUTOSHOP_H_