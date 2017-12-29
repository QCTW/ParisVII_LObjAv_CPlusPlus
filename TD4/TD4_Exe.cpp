int main(void)
{
	CelluleChainee* ccFirst = new CelluleChainee(1);
	CelluleChainee* ccSecond = new CelluleChainee(2);
	ccFirst->setNextCellule(ccSecond);
	CelluleChainee* ccThird = new CelluleChainee(3);
	ccSecond->setNextCellule(ccThird);
	ListeChainee* lcList = new ListeChainee(*ccFirst);
	lcList->printList();
	return 0;
}
