/*
 * Copyright(c) 2006 to 2020 ZettaScale Technology and others
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
 * v. 1.0 which is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 */

#ifndef DDS_SECURITY_API_ERR_H
#define DDS_SECURITY_API_ERR_H

#if defined(__cplusplus)
extern "C" {
#endif

#define DDS_SECURITY_ERR_OK_CODE 0
#define DDS_SECURITY_ERR_OK_MESSAGE "OK"
#define DDS_SECURITY_ERR_CANNOT_GENERATE_RANDOM_CODE 100
#define DDS_SECURITY_ERR_CANNOT_GENERATE_RANDOM_MESSAGE "Can not generate random data"
#define DDS_SECURITY_ERR_IDENTITY_EMPTY_CODE 110
#define DDS_SECURITY_ERR_IDENTITY_EMPTY_MESSAGE "Identity empty"
#define DDS_SECURITY_ERR_PARTICIPANT_CRYPTO_HANDLE_EMPTY_CODE 111
#define DDS_SECURITY_ERR_PARTICIPANT_CRYPTO_HANDLE_EMPTY_MESSAGE "Participant Crypto Handle empty"
#define DDS_SECURITY_ERR_PERMISSION_HANDLE_EMPTY_CODE 112
#define DDS_SECURITY_ERR_PERMISSION_HANDLE_EMPTY_MESSAGE "Permission Handle empty"
#define DDS_SECURITY_ERR_INVALID_CRYPTO_HANDLE_CODE 113
#define DDS_SECURITY_ERR_INVALID_CRYPTO_HANDLE_MESSAGE "Invalid Crypto Handle"
#define DDS_SECURITY_ERR_INVALID_CRYPTO_ARGUMENT_CODE 114
#define DDS_SECURITY_ERR_INVALID_CRYPTO_ARGUMENT_MESSAGE "Invalid argument"
#define DDS_SECURITY_ERR_INVALID_CRYPTO_TOKEN_CODE 115
#define DDS_SECURITY_ERR_INVALID_CRYPTO_TOKEN_MESSAGE "Invalid Crypto token"
#define DDS_SECURITY_ERR_INVALID_PARAMETER_CODE 116
#define DDS_SECURITY_ERR_INVALID_PARAMETER_MESSAGE "Invalid parameter"
#define DDS_SECURITY_ERR_INVALID_FILE_PATH_CODE 117
#define DDS_SECURITY_ERR_INVALID_FILE_PATH_MESSAGE \
  "File could not be found, opened or is empty, path: %s"
#define DDS_SECURITY_ERR_INVALID_CRYPTO_TRANSFORMATION_CODE 118
#define DDS_SECURITY_ERR_INVALID_CRYPTO_TRANSFORMATION_MESSAGE \
  "Unknown or unexpected transformation kind"
#define DDS_SECURITY_ERR_INVALID_CRYPTO_SIGN_CODE 119
#define DDS_SECURITY_ERR_INVALID_CRYPTO_SIGN_MESSAGE \
  "Message cannot be authenticated, incorrect signature"
#define DDS_SECURITY_ERR_INVALID_TRUSTED_CA_DIR_CODE 120
#define DDS_SECURITY_ERR_INVALID_TRUSTED_CA_DIR_MESSAGE "Can not open trusted CA directory"
#define DDS_SECURITY_ERR_CA_NOT_TRUSTED_CODE 121
#define DDS_SECURITY_ERR_CA_NOT_TRUSTED_MESSAGE "Identity CA is not trusted"
#define DDS_SECURITY_ERR_CERT_STARTDATE_IN_FUTURE_CODE 122
#define DDS_SECURITY_ERR_CERT_STARTDATE_IN_FUTURE_MESSAGE "Certificate start date is in the future"
#define DDS_SECURITY_ERR_CERT_EXPIRED_CODE 123
#define DDS_SECURITY_ERR_CERT_EXPIRED_MESSAGE "Certificate expired"
#define DDS_SECURITY_ERR_INVALID_CRYPTO_RECEIVER_SIGN_CODE 124
#define DDS_SECURITY_ERR_CERT_AUTH_ALGO_KIND_UNKNOWN_CODE 125
#define DDS_SECURITY_ERR_CERT_AUTH_ALGO_KIND_UNKNOWN_MESSAGE \
  "Certificate authentication algorithm unknown"
#define DDS_SECURITY_ERR_ALLOCATION_FAILED_CODE 126
#define DDS_SECURITY_ERR_ALLOCATION_FAILED_MESSAGE "Failed to allocate internal structure"
#define DDS_SECURITY_ERR_INVALID_SMIME_DOCUMENT_CODE 127
#define DDS_SECURITY_ERR_INVALID_SMIME_DOCUMENT_MESSAGE "Failed to parse PKCS7 SMIME document"
#define DDS_SECURITY_ERR_MISSING_PROPERTY_CODE 128
#define DDS_SECURITY_ERR_MISSING_PROPERTY_MESSAGE "Property is missing: (%s)"
#define DDS_SECURITY_ERR_INVALID_PERMISSION_DOCUMENT_PROPERTY_CODE 129
#define DDS_SECURITY_ERR_INVALID_PERMISSION_DOCUMENT_PROPERTY_MESSAGE \
  "Permissions document is invalid"
#define DDS_SECURITY_ERR_INVALID_GOVERNANCE_DOCUMENT_PROPERTY_CODE 130
#define DDS_SECURITY_ERR_INVALID_GOVERNANCE_DOCUMENT_PROPERTY_MESSAGE \
  "Governance document is invalid"
#define DDS_SECURITY_ERR_OPERATION_NOT_PERMITTED_CODE 131
#define DDS_SECURITY_ERR_OPERATION_NOT_PERMITTED_MESSAGE "Operation is not permitted in this state"
#define DDS_SECURITY_ERR_MISSING_REMOTE_PERMISSIONS_DOCUMENT_CODE 132
#define DDS_SECURITY_ERR_MISSING_REMOTE_PERMISSIONS_DOCUMENT_MESSAGE \
  "Remote permissions document is not available"
#define DDS_SECURITY_ERR_INVALID_CERTIFICATE_CODE 133
#define DDS_SECURITY_ERR_INVALID_CERTICICATE_MESSAGE "Certificate is invalid"
#define DDS_SECURITY_ERR_CERTIFICATE_TYPE_NOT_SUPPORTED_CODE 134
#define DDS_SECURITY_ERR_CERTIFICATE_TYPE_NOT_SUPPORTED_MESSAGE "Certificate type is not supported"
#define DDS_SECURITY_ERR_GOVERNANCE_PROPERTY_REQUIRED_CODE 135
#define DDS_SECURITY_ERR_GOVERNANCE_PROPERTY_REQUIRED_MESSAGE "Governance property is required"
#define DDS_SECURITY_ERR_PERMISSIONS_CA_PROPERTY_REQUIRED_CODE 136
#define DDS_SECURITY_ERR_PERMISSIONS_CA_PROPERTY_REQUIRED_MESSAGE \
  "Permissions CA property is required"
#define DDS_SECURITY_ERR_CAN_NOT_PARSE_GOVERNANCE_CODE 137
#define DDS_SECURITY_ERR_CAN_NOT_PARSE_GOVERNANCE_MESSAGE "Can not parse governance file"
#define DDS_SECURITY_ERR_CAN_NOT_PARSE_PERMISSIONS_CODE 138
#define DDS_SECURITY_ERR_CAN_NOT_PARSE_PERMISSIONS_MESSAGE "Can not parse permissions file"
#define DDS_SECURITY_ERR_CAN_NOT_FIND_TOPIC_PERMISSIONS_CODE 139
#define DDS_SECURITY_ERR_CAN_NOT_FIND_TOPIC_PERMISSIONS_MESSAGE \
  "Could not find permissions for topic"
#define DDS_SECURITY_ERR_CAN_NOT_FIND_DOMAIN_IN_PERMISSIONS_CODE 140
#define DDS_SECURITY_ERR_CAN_NOT_FIND_DOMAIN_IN_PERMISSIONS_MESSAGE \
  "Could not find domain %d in permissions"
#define DDS_SECURITY_ERR_CAN_NOT_FIND_DOMAIN_IN_GOVERNANCE_CODE 141
#define DDS_SECURITY_ERR_CAN_NOT_FIND_DOMAIN_IN_GOVERNANCE_MESSAGE \
  "Could not find domain %d in governance"
#define DDS_SECURITY_ERR_CAN_NOT_FIND_TOPIC_IN_DOMAIN_CODE 142
#define DDS_SECURITY_ERR_CAN_NOT_FIND_TOPIC_IN_DOMAIN_MESSAGE \
  "Could not find %s topic attributes for domain(%d) in governance"
#define DDS_SECURITY_ERR_INCOMPATIBLE_REMOTE_PLUGIN_CLASSNAME_CODE 143
#define DDS_SECURITY_ERR_INCOMPATIBLE_REMOTE_PLUGIN_CLASSNAME_MESSAGE \
  "PluginClass in remote token is incompatible"
#define DDS_SECURITY_ERR_INCOMPATIBLE_REMOTE_PLUGIN_MAJORVERSION_CODE 144
#define DDS_SECURITY_ERR_INCOMPATIBLE_REMOTE_PLUGIN_MAJORVERSION_MESSAGE \
  "MajorVersion in remote token is incompatible"
#define DDS_SECURITY_ERR_ACCESS_DENIED_CODE 145
#define DDS_SECURITY_ERR_ACCESS_DENIED_MESSAGE "Access denied by access control"
#define DDS_SECURITY_ERR_INVALID_SUBJECT_NAME_CODE 146
#define DDS_SECURITY_ERR_INVALID_SUBJECT_NAME_MESSAGE "Subject name is invalid"
#define DDS_SECURITY_ERR_VALIDITY_PERIOD_EXPIRED_CODE 147
#define DDS_SECURITY_ERR_VALIDITY_PERIOD_EXPIRED_MESSAGE \
  "Permissions validity period expired for %s (expired: %s)"
#define DDS_SECURITY_ERR_VALIDITY_PERIOD_NOT_STARTED_CODE 148
#define DDS_SECURITY_ERR_VALIDITY_PERIOD_NOT_STARTED_MESSAGE \
  "Permissions validity period has not started yet for %s (start: %s)"
#define DDS_SECURITY_ERR_CAN_NOT_FIND_PERMISSIONS_GRANT_CODE 149
#define DDS_SECURITY_ERR_CAN_NOT_FIND_PERMISSIONS_GRANT_MESSAGE \
  "Could not find valid grant in permissions"
#define DDS_SECURITY_ERR_URI_TYPE_NOT_SUPPORTED_CODE 150
#define DDS_SECURITY_ERR_URI_TYPE_NOT_SUPPORTED_MESSAGE "Unsupported URI type: %s"
#define DDS_SECURITY_ERR_INVALID_CRYPTO_DATA_NOT_ALIGNED_CODE 151
#define DDS_SECURITY_ERR_INVALID_CRYPTO_DATA_NOT_ALIGNED_MESSAGE \
  "The payload is not aligned at 4 bytes"
#define DDS_SECURITY_ERR_TRUSTED_CA_DIR_MAX_EXCEEDED_CODE 152
#define DDS_SECURITY_ERR_TRUSTED_CA_DIR_MAX_EXCEEDED_MESSAGE \
  "Cannot open trusted CA directory: maximum number of CA directories (%d) exceeded"

#define DDS_SECURITY_ERR_UNDEFINED_CODE 200
#define DDS_SECURITY_ERR_UNDEFINED_MESSAGE "Undefined Error Message"

#define DDS_SECURITY_ERR_CIPHER_ERROR 301

#if defined(__cplusplus)
}
#endif

#endif /* DDS_SECURITY_API_ERR_H */
