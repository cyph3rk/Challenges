#include <iostream>

using namespace std;

int main()
{
	int h_Inicio = 0;
	int m_Inicio = 0;

	int h_Fim = 0;
	int m_Fim = 0;

	int horas = 0;	
	int minutos = 0;
						
	scanf("%d %d %d %d", &h_Inicio, &m_Inicio, &h_Fim, &m_Fim);
		
	int totalMinutos = 0;
		
	if ( (h_Inicio == h_Fim) ) {
		if (m_Inicio == m_Fim) {
			horas = 24;
			minutos = 0;
		}
		else {
			horas = 0;
			minutos = m_Fim - m_Inicio;
		}
	}
	else {
		int aux = (60 - m_Inicio);
		int horaInicio = h_Inicio + 1;
		totalMinutos = 0;	

		if (horaInicio <= h_Fim)
		{
			totalMinutos = ((h_Fim - horaInicio) * 60) + m_Fim + aux;
		}
		else {
			totalMinutos = (((24 - horaInicio) + h_Fim) * 60) + m_Fim + aux;
		}

		horas = totalMinutos / 60;
		minutos = totalMinutos - (horas * 60);
	}
	
	cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
		
	return 0;
}
