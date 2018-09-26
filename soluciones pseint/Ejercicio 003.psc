Proceso segundos
	Escribir "Ingrese la cantidad de segundos";
	Leer s;
	h <- TRUNC(s / 3600);
	s <- s - h * 3600;
	m <- TRUNC(s / 60);
	s <- s - m * 60;
	Escribir "Horas = ", h;
	Escribir "Minutos = ", m;
	Escribir "Segundos = ", s;
FinProceso
