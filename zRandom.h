#pragma once
#include <random>

class Random {
	std::random_device rd;
	std::mt19937 gen;
public:
	Random() {
		gen.seed(rd());
	}
	float getRandomInt(float l, float u) {
		//std::uniform_int_distribution<long> dist(l, u);
		std::uniform_real_distribution<double> dist(l, u);
		return dist(gen);
	}
};