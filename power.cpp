#include <iostream>
using namespace std;

/*struct InpData
	{



	};
*/

class Solar_Invertor
{
public:
	int m_nSolar_power;
	float m_nLoad_power;
	float m_nOgg;
	float m_nOutput_current;
	float m_nInput_current;
	float m_nInput_voltage;
	float m_nOutput_voltage;
	float m_nInput_power;

Solar_Invertor()
	:m_nSolar_power(0)
	,m_nLoad_power(0)
	,m_nOgg(0)
	,m_nInput_current(0)
	,m_nOutput_current(0)
	,m_nInput_voltage(0)
	,m_nOutput_voltage(0)
	,m_nInput_power(0)
	{
	m_nSolar_power = solar_panel_power ( );
	m_nOutput_current = power_invertor ( );	
	m_nOgg = calc_Ogg( );
	}	

	int solar_panel_power(int h = 10,int solPwr = 100 )
		{
		return h * solPwr;
		}
	float  power_invertor(float Load_power = 150, float Output_voltage = 220)
		{
		return Load_power / Output_voltage;
		}
	float calc_Ogg(float Load_power = 150, float Input_power = 165)
		{
		return Load_power / Input_power * 100;
		} 
~Solar_Invertor()
	{

	}
};




int main()
{
Solar_Invertor calcul;
/*cout<<"Input load power "<<endl;
cin>> calcul.m_nLoad_power;

cout<<"Input Output_current "<<endl;
cin>> calcul.m_nOutput_current;

cout<<"Input Input_voltage "<<endl;
cin>> calcul.m_nInput_voltage;

cout<<"Input Output_voltage "<<endl;
cin>> calcul.m_nOutput_voltage;

cout<<"Input Input_power "<<endl;
cin>> calcul.m_nInput_power;
*/
cout<<"Solar_power "<< calcul.m_nSolar_power <<endl;
cout<<"Output_current "<< calcul.m_nOutput_current <<endl;
cout<<"Ogg "<< calcul.m_nOgg <<endl;
//cout<<" "<< <<endl;

return 0;
}

