include(clang_format)

project(decorate)

add_executable(
    "${CMAKE_PROJECT_NAME}"
    main.cc
    mailer.hpp
    mailer_decorator.hpp
    mailer_decorator.cc
    basic_mailer.hpp
    basic_mailer.cc
    cooldown_mailer.hpp
    cooldown_mailer.cc
)
format("${CMAKE_PROJECT_NAME}")
