#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int diaInicio = 0;
	int horaInicio = 0;
	int minutoInicio = 0;
	int segundoInicio = 0;

	int diaFim = 0;
	int horaFim = 0;
	int minutoFim = 0;
	int segundoFim = 0;
		
	scanf("%*s %d", &diaInicio);
	scanf("%d %*s %d %*s %d", &horaInicio, &minutoInicio, &segundoInicio);

	scanf("%*s %d", &diaFim);
	scanf("%d %*s %d %*s %d", &horaFim, &minutoFim, &segundoFim);
	
	int totalDias = 0;
	int totalHoras = 0;
	int totalMinutos = 0;
	int totalSegundos = 0;
		
	if ((horaInicio == horaFim) && (minutoInicio == minutoFim) && (segundoInicio == segundoFim)) {
		totalDias = diaFim - diaInicio;
		totalHoras = 0;
		totalMinutos = 0;
		totalSegundos = 0;
	}
	else if (diaFim == diaInicio) {
		totalDias = 0;

		if (segundoInicio == segundoFim) {
			totalSegundos = 0;
		}
		else {
			int segundos = (60 - segundoInicio);
			totalSegundos = (segundos + segundoFim) >= 60 ? (segundos + segundoFim - 60) : (segundos + segundoFim);
		}

		if (minutoInicio == minutoFim) {
			totalMinutos = 0;
		}
		else {
			int minutos = (60 - minutoInicio);
			totalMinutos = (minutos + minutoFim) >= 60 ? (minutos + minutoFim - 60) : (minutos + minutoFim);
		}

		if (horaInicio == horaFim) {
			totalHoras = 0;
		}
		else {
			int horas = (24 - horaInicio);
			totalHoras = (horas + horaFim) >= 24 ? (horas + horaFim - 24) : (horas + horaFim);
		}
	}
	else {
		int segundos = 0;
		int minutos = 0;
		int horas = 0;
				
		segundos = (60 - segundoInicio);		
		totalSegundos = segundos + segundoFim;		
		if (totalSegundos >= 60) {			
			totalSegundos -= 60;
		}		
		minutos = ((24 - (horaInicio + 1)) * 60) + (60 - minutoInicio) + (horaFim * 60) + minutoFim;				
		totalHoras = minutos / 60;
		totalMinutos = (segundoInicio > segundoFim) ? (minutos - (totalHoras * 60))-1  : (minutos - (totalHoras * 60));
				
		totalDias = totalHoras / 24;
		totalHoras -= (totalDias * 24);

		totalDias += (diaFim - diaInicio == 1) ? 0 : (diaFim - diaInicio) - 1;		
	}

	cout << totalDias << " dia(s)" << endl;
	cout << totalHoras << " hora(s)" << endl;
	cout << totalMinutos << " minuto(s)" << endl;
	cout << totalSegundos << " segundo(s)" << endl;
	
	system("PAUSE");	
	return 0;
}
