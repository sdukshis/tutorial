#include "hello.h"

std::ostream& hello::hello(std::ostream& stream) {
    return stream << "Hello, world!";
}
