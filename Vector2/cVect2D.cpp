#include "cVect2D.h"

#pragma region Constructeurs
	
	//BUT : Constructeur qui permet d'initialisé les variables membres de la classe à 0.
	//ENTREE : 
	//SORTIE :
	cVect2D::cVect2D()
	{
		this->mf_x = 0.0f;
		this->mf_y = 0.0f;
	}

	//BUT : Constructeur qui permet d'initialisé les variables membres de la classe par un cVect2D.
	//ENTREE : 	- cVect2D *v : La variable qui va être utilisé pour initialiser.
	//SORTIE :
	cVect2D::cVect2D(cVect2D *v)
	{
		this->mf_x = v->mf_x;
		this->mf_y = v->mf_y;
	}

	//BUT : Constructeur qui permet d'initialisé les variables membres de la classe par deux variables de type Float.
	//ENTREE :	- float f_x : La valeur de X.
	//			- float f_y : La valeur de Y.
	//SORTIE:
	cVect2D::cVect2D(float f_x, float f_y)
	{
		this->mf_x = f_x;
		this->mf_y = f_y;
	}

#pragma endregion 

#pragma region Mutateurs
	//BUT : Retourne la variable X de la classe cVect2D.
	//ENTREE : 
	//SORTIE :	- float : La variable X.
	float cVect2D::getVectX() const
	{
		return this->mf_x;
	}

	//BUT : Retourne la variable Y de la classe cVect2D.
	//ENTREE : 
	//SORTIE :	- float : La variable Y.
	float cVect2D::getVectY() const
	{
		return this->mf_y;
	}

	//BUT: Initialise la variable X de la classe cVect2D.
	//ENTREE:	- float f_x : La variable X.
	//SORTIE:
	void cVect2D::setVectX(float f_x)
	{
		this->mf_x = f_x;
	}

	//BUT: Initialise la variable Y de la classe cVect2D.
	//ENTREE:	- float f_y : La variable Y.
	//SORTIE:
	void cVect2D::setVectY(float f_y)
	{
		this->mf_y = f_y;
	}
#pragma endregion

#pragma region Surcharges Opérateurs
	//BUT: Surcharge de l'opérateur "+" afin de permettre l'addition de deux types cVect2D.
	//ENTREE:	- cVect2D &v : La variable qui va être ajouté.
	//SORTIE:	- cVect2D : Le résultat.
	cVect2D cVect2D::operator+(const cVect2D &v)
	{
		return cVect2D(this->mf_x + v.mf_x, this->mf_y + v.mf_y);
	}

	//BUT: Surcharge de l'opérateur "-" afin de permettre la soustraction de deux types cVect2D.
	//ENTREE:	- cVect2D &v : La variable qui va être soustraite.
	//SORTIE:	- cVect2D : Le résultat.
	cVect2D cVect2D::operator-(const cVect2D &v)
	{
		return new cVect2D(this->mf_x - v.mf_x, this->mf_y - v.mf_y);
	}

	//BUT: Surcharge de l'opérateur "*" afin de permettre la multiplication de deux types cVect2D.
	//ENTREE:	- cVect2D &v : La variable qui va être utilisé pour multiplié.
	//SORTIE:	- cVect2D : Le résultat.
	cVect2D cVect2D::operator*(const cVect2D &v)
	{
		return new cVect2D(this->mf_x * v.mf_x, this->mf_y * v.mf_y);
	}

	//BUT: Surcharge de l'opérateur "*" afin de permettre la multiplication d'un type cVect2D avec un type float.
	//ENTREE:	- float &f_x : La variable qui va être utilisé pour multiplié.
	//SORTIE:	- cVect2D : Le résultat.
	cVect2D cVect2D::operator*(const float &f_x)
	{
		return new cVect2D(this->mf_x * f_x, this->mf_y * f_x);
	}

	//BUT: Surcharge de l'opérateur "<<" afin de permettre l'affichage d'un type cVect2D.
	//ENTREE:	- ostream &os : La variable qui va permettre de stocker le flux.
	//			- cVect2D &v : La variable qui va être utilisé pour afficher.
	//SORTIE:	- ostream : Le résultat.
	std::ostream &operator<<(std::ostream &os, const cVect2D &v)
	{
		return os << "X : " << v.mf_x << std::endl << "Y: " << v.mf_y << std::endl;
	}
#pragma endregion

#pragma region Opération Vectorielle
	//BUT: Produit scalaire de deux vecteurs
	//ENTREE:	- cVect2D &v : La variable qui va être utilisé pour faire le produit.
	//SORTIE:	- float : Le résultat.
	float cVect2D::ScalarProduct(cVect2D &v)
	{
		return this->mf_x * v.mf_x + this->mf_y * v.mf_y;
	}

	//BUT: Norme de deux vecteurs
	//ENTREE:	- cVect2D &v : La variable qui va être utilisé pour la norme.
	//SORTIE:	- float : Le résultat.
	float cVect2D::NormProduct(cVect2D &v)
	{
		const int nPow = 2;
		return sqrt(pow((v.mf_x - this->mf_x), nPow) + pow((v.mf_y - this->mf_y), nPow));
	}
#pragma endregion