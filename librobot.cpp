#include "librobot.h"
#include <vector>
#include <iostream>

namespace mathStruct
{
	template<typename T>
	using matrix = std::vector<std::vector<T>>;

	template<typename T>
	matrix<T> init(std::size_t size)
	{
		matrix<T> m(size, std::vector<T>(size, T(0)));
		for (std::size_t i = 0; i < size; i++)
			m[i][i] = T(1);
		return m;
	}
}

template<typename T>
void Robot2D<T>::setMotion(const mathStruct::Point2D<T>& motion)
{
	auto size {std::size_t(T(3))};
	auto A = mathStruct::init<T>(size);
	A[0][2] = motion.x;
	A[1][2] = motion.y;

	std::vector<T> B {Robot2D<T>::m_point.x, Robot2D<T>::m_point.y, T(1)};
	std::vector<T> C(size, T(0));

	for (std::size_t i = 0; i < size; i++)
		for (std::size_t j = 0; j < size; j++)
			C[i] += A[i][j] * B[j];

	Robot2D<T>::m_point = mathStruct::Point2D<T>{C[0], C[1]};
}

template<typename T>
void Robot3D<T>::setMotion(const mathStruct::Point3D<T>& motion)
{
	auto size {std::size_t(T(4))};
	auto A = mathStruct::init<T>(size);
	A[0][3] = motion.x;
	A[1][3] = motion.y;
	A[2][3] = motion.z;

	std::vector<T> B {Robot3D<T>::m_point.x, Robot3D<T>::m_point.y, Robot3D<T>::m_point.z, T(1)};
	std::vector<T> C(size, T(0));

	for (std::size_t i = 0; i < size; i++)
		for (std::size_t j = 0; j < size; j++)
			C[i] += A[i][j] * B[j];

	Robot3D<T>::m_point = mathStruct::Point3D<T>{C[0], C[1], C[2]};
}

template class Robot2D<int>;
template class Robot3D<int>;

template class Robot2D<long>;
template class Robot3D<long>;

template class Robot2D<double>;
template class Robot3D<double>;

template class Robot2D<float>;
template class Robot3D<float>;