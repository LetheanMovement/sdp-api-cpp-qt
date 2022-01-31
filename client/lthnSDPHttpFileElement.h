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

#ifndef lthnSDP_HTTP_FILE_ELEMENT_H
#define lthnSDP_HTTP_FILE_ELEMENT_H

#include <QJsonValue>
#include <QMetaType>
#include <QString>

namespace lthn {
namespace sdp {
namespace api {

class lthnSDPHttpFileElement {

public:
    QString variable_name;
    QString local_filename;
    QString request_filename;
    QString mime_type;
    void setMimeType(const QString &mime);
    void setFileName(const QString &name);
    void setVariableName(const QString &name);
    void setRequestFileName(const QString &name);
    bool isSet() const;
    bool fromStringValue(const QString &instr);
    bool fromJsonValue(const QJsonValue &jval);
    bool fromByteArray(const QByteArray &bytes);
    bool saveToFile(const QString &variable_name, const QString &local_filename, const QString &request_filename, const QString &mime, const QByteArray &bytes);
    QString asJson() const;
    QJsonValue asJsonValue() const;
    QByteArray asByteArray() const;
    QByteArray loadFromFile(const QString &variable_name, const QString &local_filename, const QString &request_filename, const QString &mime);
};

} // namespace lthn
} // namespace sdp
} // namespace api

Q_DECLARE_METATYPE(lthn::sdp::api::lthnSDPHttpFileElement)

#endif // lthnSDP_HTTP_FILE_ELEMENT_H
