#ifndef	FIFOLIFO_HPP
#define FIFOLIFO_HPP

#include<iostream>
#include<vector>
#include<string>

//First-In First-Out
void FifoPush(std::vector<std::string>& container, const std::string& item);
void FifoPop(std::vector<std::string>& container);

//Last-In First-Out
void LifoPush(std::vector<std::string>& container, const std::string& item);
void LifoPop(std::vector<std::string>& container);

//Shared functionality
bool IsContainerEmpty(const std::vector<std::string>& container);
void PrintContainer(const std::vector<std::string>& container);

//Test Functions
bool TestFifo();
bool TestLifo();

#endif
