CMAKE_MINIMUM_REQUIRED (VERSION 2.6)
PROJECT (person)

SET (VERSION_MAJOR 1)
SET (VERSION_MINOR 0)

CONFIGURE_FILE ("${PROJECT_SOURCE_DIR}/config.hpp.in" "${PROJECT_BINARY_DIR}/config.hpp")

# overwrite MY_PREFIX by `cmake -DMY_PREFIX=foo .`
if (NOT DEFINED MY_PREFIX)
  SET (MY_PREFIX "$ENV{HOME}/local")
endif ()
INCLUDE_DIRECTORIES ("${MY_PREFIX}/include")
SET (CMAKE_LIBRARY_PATH "${MY_PREFIX}/lib")

SET (BIN_FILE
  bin/main.cpp
)
FILE (GLOB LIB_FILES
  lib/*.cpp lib/*/*.cpp lib/*/*/*.cpp
  lib/*.c   lib/*/*.c   lib/*/*/*.c
)
FILE (GLOB TEST_FILES
  t/picotest/picotest.c
  t/runner.cpp
  t/test_*.cpp
)

SET (WARNING_FLAGS   "-Wall -Wextra -Werror")
SET (CMAKE_C_FLAGS   "-O2 -g ${WARNING_FLAGS} ${CMAKE_C_FLAGS}")
SET (CMAKE_CXX_FLAGS "-O2 -g ${WARNING_FLAGS} ${CMAKE_CXX_FLAGS}")

# ADD_LIBRARY (person SHARED ${LIB_FILES})
ADD_LIBRARY (person STATIC ${LIB_FILES})
ADD_EXECUTABLE (runner ${TEST_FILES})
ADD_EXECUTABLE (main ${BIN_FILE})
TARGET_LINK_LIBRARIES (runner person)
TARGET_LINK_LIBRARIES (main person)

ADD_CUSTOM_TARGET (check prove ./runner DEPENDS runner)

# example of linking library
# FIND_LIBRARY (ATS_LIBRARY atscppapi REQUIRED)
# TARGET_LINK_LIBRARIES (main ${ATS_LIBRARY})
