cmake+AF8-minimum+AF8-required(VERSION 3.5)
project(test+AF8-sakahara+AF8-hello+AF8-world)

+ACM- Default to C99
if(NOT CMAKE+AF8-C+AF8-STANDARD)
  set(CMAKE+AF8-C+AF8-STANDARD 99)
endif()

+ACM- Default to C++14-
if(NOT CMAKE+AF8-CXX+AF8-STANDARD)
  set(CMAKE+AF8-CXX+AF8-STANDARD 14)
endif()

if(CMAKE+AF8-COMPILER+AF8-IS+AF8-GNUCXX OR CMAKE+AF8-CXX+AF8-COMPILER+AF8-ID MATCHES +ACI-Clang+ACI-)
  add+AF8-compile+AF8-options(-Wall -Wextra -Wpedantic)
endif()

+ACM- find dependencies
find+AF8-package(ament+AF8-cmake REQUIRED)
find+AF8-package(rclcpp REQUIRED)
+ACM- uncomment the following section in order to fill in
+ACM- further dependencies manually.
+ACM- find+AF8-package(+ADw-dependency+AD4- REQUIRED)

if(BUILD+AF8-TESTING)
  find+AF8-package(ament+AF8-lint+AF8-auto REQUIRED)
  +ACM- the following line skips the linter which checks for copyrights
  +ACM- remove the line when a copyright and license is present in all source files
  set(ament+AF8-cmake+AF8-copyright+AF8-FOUND TRUE)
  +ACM- the following line skips cpplint (only works in a git repo)
  +ACM- remove the line when this package is a git repo
  set(ament+AF8-cmake+AF8-cpplint+AF8-FOUND TRUE)
  ament+AF8-lint+AF8-auto+AF8-find+AF8-test+AF8-dependencies()
endif()

add+AF8-executable(test+AF8-sakahara+AF8-hello+AF8-world src/main.cpp)
ament+AF8-target+AF8-dependencies(test+AF8-sakahara+AF8-hello+AF8-world rclcpp)

install(TARGETS
	test+AF8-sakahara+AF8-hello+AF8-world
	DESTINATION +ACQ-ENV+AHs-D+AF8-ROS2+AF8-ROOT+AH0-/bin/+ACQAew-PROJECT+AF8-NAME+AH0-
)

ament+AF8-package()
