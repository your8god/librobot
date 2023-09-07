#include <iostream>
#include "librobot.h"

#define END_BLOCK std::cout << std::endl << std::endl << std::endl;
#pragma comment(lib, "librobot.lib")

using namespace mathStruct;

int main()
{
    Robot2D<double> r2dd;
    auto startP2dd = Point2D<double>{ 1.5, 1.5 };
    r2dd.setPosition(startP2dd);
    std::cout << "Start pos of Robot2D double:\n" << startP2dd.x << " " << startP2dd.y << std::endl;
    auto motionP2dd = Point2D<double>{ 8.6, -5 };
    std::cout << "Motion of Robot2D double:\n" << motionP2dd.x << " " << motionP2dd.y << std::endl;
    r2dd.setMotion(motionP2dd);
    auto resP2dd = r2dd.getPosition();
    std::cout << "Res pos of Robot2D double:\n" << resP2dd.x << " " << resP2dd.y << std::endl;
    END_BLOCK;


    Robot3D<double> r3dd;
    auto startP3dd = Point3D<double>{ 1.5, 1.5, -4.78 };
    r3dd.setPosition(startP3dd);
    std::cout << "Start pos of Robot3D double:\n" << startP3dd.x << " " << startP3dd.y << " " << startP3dd.z << std::endl;
    auto motionP3dd = Point3D<double>{ 8.6, -5, 4};
    std::cout << "Motion of Robot3D double:\n" << motionP3dd.x << " " << motionP3dd.y << " " << motionP3dd.z << std::endl;
    r3dd.setMotion(motionP3dd);
    auto resP3dd = r3dd.getPosition();
    std::cout << "Res pos of Robot3D double:\n" << resP3dd.x << " " << resP3dd.y << " " << resP3dd.z << std::endl;
    END_BLOCK;

    
    Robot2D<int> r2di;
    auto startP2di = Point2D<int>{};
    r2di.setPosition(startP2di);
    std::cout << "Start pos of Robot2D int:\n" << startP2di.x << " " << startP2di.y << std::endl;
    auto motionP2di = Point2D<int>{ 4, 8 };
    std::cout << "Motion of Robot2D int:\n" << motionP2di.x << " " << motionP2di.y << std::endl;
    r2di.setMotion(motionP2di);
    auto resP2di = r2di.getPosition();
    std::cout << "Res pos of Robot2D int:\n" << resP2di.x << " " << resP2di.y << std::endl;
    END_BLOCK;


    Robot3D<int> r3di;
    auto startP3di = Point3D<int>{ -5, 4, 8 };
    r3di.setPosition(startP3di);
    std::cout << "Start pos of Robot3D int:\n" << startP3di.x << " " << startP3di.y << " " << startP3di.z << std::endl;
    auto motionP3di = Point3D<int>{ 8, -5, 4 };
    std::cout << "Motion of Robot3D int:\n" << motionP3di.x << " " << motionP3di.y << " " << motionP3di.z << std::endl;
    r3di.setMotion(motionP3di);
    auto resP3di = r3di.getPosition();
    std::cout << "Res pos of Robot3D int:\n" << resP3di.x << " " << resP3di.y << " " << resP3di.z << std::endl;
    END_BLOCK;
}