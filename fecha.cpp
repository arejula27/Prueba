void fixFechas(Fecha* f) {
	int temp = f->mes;
	f->mes = f->dia;
	f->mes = temp;
}