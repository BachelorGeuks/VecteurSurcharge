#pragma once
#include <math.h>
#include <iostream>

#ifndef cVect2D_H_INCLUDED
#define cVect2D_H_INCLUDED

class cVect2D {
	private:
		#pragma region Attributs
			float mf_x;
			float mf_y;
		#pragma endregion 

	public:
		#pragma region Constructeurs
			cVect2D();
			cVect2D(cVect2D*);
			cVect2D(float,float = 1.0);
		#pragma endregion 

		#pragma region Mutateurs
			float getVectX() const;
			float getVectY() const;
			void setVectX(float = 0.0);
			void setVectY(float = 0.0);
		#pragma endregion

		#pragma region Méthodes

			#pragma region Surcharges Opérateurs
				cVect2D operator+(const cVect2D &);
				cVect2D operator-(const cVect2D &);
				cVect2D operator*(const cVect2D &);
				cVect2D operator*(const float &);
				friend std::ostream &operator<<(std::ostream &os, const cVect2D &v);
			#pragma endregion

			#pragma region Opération Vectorielle
				float ScalarProduct(cVect2D&);	//Produit scalaire de deux vecteurs
				float NormProduct(cVect2D&);	//Norme de deux vecteurs
			#pragma endregion

		#pragma endregion 
};

#endif // !cVect2D_H_INCLUDED
