#pragma once

namespace mathStruct
{
	template<typename T>
	struct Point2D
	{
		T x{ T(0) };
		T y{ T(0) };
	};

	template<typename T>
	struct Point3D
	{
		T x{ T(0) };
		T y{ T(0) };
		T z{ T(0) };
	};
}

template<typename T>
class IRobot
{
public:
	void setPosition(const T& point) { m_point = point; };
	virtual void setMotion(const T& motion) = 0;
	T getPosition() const { return m_point; };

protected:
	T m_point;
};

template<typename T>
class Robot2D : public IRobot<mathStruct::Point2D<T>>
{
public:
	Robot2D() {}

	void setMotion(const mathStruct::Point2D<T>& motion) override;
};

template<typename T>
class Robot3D : public IRobot<mathStruct::Point3D<T>>
{
public:
	Robot3D() {}

	void setMotion(const mathStruct::Point3D<T>& motion) override;
};