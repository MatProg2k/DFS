#pragma once
#include "AList.h"

AList::AList(std::vector<std::vector<int>> list)
{
	this->list = list;
}

void AList::GoToV(int v)
{
	if (this->color[v] == 2)
	{
		return;
	}
	this->color[v] = 2;
	std::cout << v << " ";

	for (int i = 0; i < this->list[v].size(); i++)
	{
		this->GoToV(this->list[v][i]);
	}

}

void AList::DFS()
{
	this->color.clear();
	for (int i = 0; i < this->list.size(); i++)
	{
		this->color.push_back(0);
	}
	std::cout << "Обход в глубину:" << std::endl;

	for (int i = 0; i < this->list.size(); i++)
	{
		this->GoToV(i);
	}
}
