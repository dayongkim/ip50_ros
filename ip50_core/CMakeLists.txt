cmake_minimum_required(VERSION 3.0.2)
project(ip50_core)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  tf
  nav_msgs
  ip50_msgs
)

catkin_package(
 LIBRARIES ip50_core
 CATKIN_DEPENDS roscpp std_msgs tf nav_msgs
)

include_directories(
  include 
  ${catkin_INCLUDE_DIRS}
)

add_executable(ip50_driver src/ip50_driver.cpp)
target_link_libraries(ip50_driver ${catkin_LIBRARIES} )
