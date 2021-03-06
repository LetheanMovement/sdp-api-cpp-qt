/**
 * Lethean Binary API
 * Functionality to simplify using LTHN
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: contact@lethean.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef lthnSDP_ENUM_H
#define lthnSDP_ENUM_H

#include <QJsonValue>
#include <QMetaType>
#include <QString>

namespace lthn {
namespace sdp {
namespace api {

class lthnSDPEnum {
public:
    lthnSDPEnum() {}

    lthnSDPEnum(QString jsonString) {
        fromJson(jsonString);
    }

    virtual ~lthnSDPEnum() {}

    virtual QJsonValue asJsonValue() const {
        return QJsonValue(jstr);
    }

    virtual QString asJson() const {
        return jstr;
    }

    virtual void fromJson(QString jsonString) {
        jstr = jsonString;
    }

    virtual void fromJsonValue(QJsonValue jval) {
        jstr = jval.toString();
    }

    virtual bool isSet() const {
        return false;
    }

    virtual bool isValid() const {
        return true;
    }

private:
    QString jstr;
};

} // namespace lthn
} // namespace sdp
} // namespace api

Q_DECLARE_METATYPE(lthn::sdp::api::lthnSDPEnum)

#endif // lthnSDP_ENUM_H
