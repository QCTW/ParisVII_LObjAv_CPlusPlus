/*
 * ArticleEnSolde.cpp
 *
 *  Created on: 29 oct. 2015
 *      Author: Quincy
 */

#include "ArticleEnSolde.hpp"
#include "Article.hpp"
#include <math.h>

ArticleEnSolde::ArticleEnSolde(string sNom, int nPrix, float fSetSolde):Article(nPrix,sNom)
{
	this->fPourcentage = fSetSolde;
}

ArticleEnSolde::~ArticleEnSolde()
{
}

float ArticleEnSolde::getSoldePercentage()
{
	return this->fPourcentage;
}

int ArticleEnSolde::getPrix()
{
	return round(getPrix() * getSoldePercentage());
}
