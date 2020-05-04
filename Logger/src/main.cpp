#include <MyLogger/Logger.hpp>
#include <MyLogger/File.hpp>
#include "config.hpp"

int main()
{
    LOGI("An information %s", "the info");
    LOGD("A debug %s", "the debug");
    LOGW("A warning %s", "the warning");
    LOGF("A failure %s", "the failure");

    LOGD("Base Name of %s is %s",
         "/home/foo/tests/common/FileTests.cpp",
         File::baseName("/home/foo/tests/common/FileTests.cpp"));

    return 0;
}
