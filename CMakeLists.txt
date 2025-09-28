#release 를 원하는 파일명으로 바꿔서 저장후 Shift 5로 빌드 & 실행
cmake_minimum_required(VERSION 3.0)
project(15654) #변경
set(CMAKE_CXX_COMPILER g++)
set(SOURCES release_test/15654.cpp) #변경
set(CMAKE_BUILD_TYPE Release)
message("build type :" ${CMAKE_BUILD_TYPE})
add_executable(${PROJECT_NAME} ${SOURCES})

    # std::chrono::system_clock::time_point start = std::chrono::system_clock::now();

    # 시간을 잴 구문
    
    # std::chrono::duration<double>sec = std::chrono::system_clock::now() - start;
    # std::cout << "for문을 돌리는데 걸리는 시간(초) : " << sec.count() <<"seconds";