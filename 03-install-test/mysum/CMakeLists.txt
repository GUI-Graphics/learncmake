add_library(mysum mysum.cpp)

install(TARGETS mysum DESTINATION bin)
install(FILES mysum.h DESTINATION include)