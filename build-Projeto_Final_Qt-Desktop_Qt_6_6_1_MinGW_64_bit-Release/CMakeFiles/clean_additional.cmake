# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Projeto_Final_Qt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Projeto_Final_Qt_autogen.dir\\ParseCache.txt"
  "Projeto_Final_Qt_autogen"
  )
endif()
