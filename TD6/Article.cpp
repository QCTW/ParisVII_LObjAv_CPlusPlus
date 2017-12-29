/*
 * Article.cpp
 *
 *  Created on: 29 oct. 2015
 *      Author: Quincy
 */

#include "Article.hpp"

Article::Article(int nNewPrix, string sNewNom) //Constructir ubutulization
{
	this->nPrix = nNewPrix;
	this->sNom = sNewNom;
}

Article::~Article()
{
	// TODO Auto-generated destructor stub
}

int Article::getPrix()
{
	return this->nPrix;
}

void Article::setPrix(int prix)
{
	this->nPrix = prix;
}

const string& Article::getNom()
{
	return this->sNom;
}

void Article::setNom(const string& nom)
{
	this->sNom = nom;
}
