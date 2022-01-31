QT += network

HEADERS += \
# Models
# APIs
    $${PWD}/lthnSDPVpnApi.h \
# Others
    $${PWD}/lthnSDPHelpers.h \
    $${PWD}/lthnSDPHttpRequest.h \
    $${PWD}/lthnSDPObject.h \
    $${PWD}/lthnSDPEnum.h \
    $${PWD}/lthnSDPHttpFileElement.h \
    $${PWD}/lthnSDPServerConfiguration.h \
    $${PWD}/lthnSDPServerVariable.h \
    $${PWD}/lthnSDPOauth.h

SOURCES += \
# Models
# APIs
    $${PWD}/lthnSDPVpnApi.cpp \
# Others
    $${PWD}/lthnSDPHelpers.cpp \
    $${PWD}/lthnSDPHttpRequest.cpp \
    $${PWD}/lthnSDPHttpFileElement.cpp \
    $${PWD}/lthnSDPOauth.cpp
