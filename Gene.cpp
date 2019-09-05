#include "Gene.h"

Gene::Gene(char allele1, char allele2)
{
	this->allele1=&allele1;
	this->allele2=&allele2;
}

Gene::~Gene()
{
	delete allele1;
	delete allele2;
}

char Gene::getAllele1()
{
	return *allele1;
	
}
char Gene::getAllele2()
{
	return *allele2;
}