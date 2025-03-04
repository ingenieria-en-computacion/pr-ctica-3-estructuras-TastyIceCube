//desarrolla un tad para los complejos

struct NumComplex{
	int Preal;
	int Pimag;
} 

typedef struct NumComplex COMPLEJO;

COMPLEJO AsignarReal (COMPLEJO a, int r){
	COMPLEJO num,
	num.Preal = r;
	return num;
}

COMPLEJO AsignarImaginaria (COMPLEJO a, int i){
	COMPLEJO num,
	num.Pimag = i;
	return num;
}

COMPLEJO ParteReal (COMPLEJO a){
	printf("la parte real del numero complejo es %d \n", a.Preal);
	a.Preal = PartR;
	return PartR;
}

COMPLEJO ParteImaginaria (COMPLEJO a){
	printf("la parte imaginaria del numero complejo es %d i \n", a.Pimag);
	a.Pimag = PartI;
	return PartI;
}

COMPLEJO ModuloComplejo (COMPLEJO a, int m){
	int modres[];
	modres[0] = a.Preal % m;
	modres[1] = a.Pimag % m;
	return modres[];
}

COMPLEJO SumaCompleja (COMPLEJO a, COMPLEJO b){
	COMPLEJO S;
	S.Preal = a.Preal + b.Pimg;
	S.Pimag = a.Pimag + b.Pimg;
	return S;
}