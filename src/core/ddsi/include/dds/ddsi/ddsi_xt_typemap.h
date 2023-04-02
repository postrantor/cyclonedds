/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: ddsi_xt_typemap.h
  Source: ddsi_xt_typemap.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSI_XT_TYPEMAP_H
#define DDSI_XT_TYPEMAP_H

#include "dds/cdr/dds_cdrstream.h"
#include "dds/ddsc/dds_public_impl.h"
#include "dds/ddsi/ddsi_xt_typeinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERTYPEOBJECTPAIR_DEFINED
#define DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERTYPEOBJECTPAIR_DEFINED
typedef struct dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair
{
  uint32_t _maximum;
  uint32_t _length;
  struct DDS_XTypes_TypeIdentifierTypeObjectPair * _buffer;
  bool _release;
} dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair;

#define dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair__alloc() \
  ((dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair *)dds_alloc( \
    sizeof(dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair)));

#define dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair_allocbuf(l) \
  ((struct DDS_XTypes_TypeIdentifierTypeObjectPair *)dds_alloc(          \
    (l) * sizeof(struct DDS_XTypes_TypeIdentifierTypeObjectPair)))
#endif /* DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERTYPEOBJECTPAIR_DEFINED */

#ifndef DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERTYPEOBJECTPAIR_DEFINED
#define DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERTYPEOBJECTPAIR_DEFINED
typedef struct dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair
{
  uint32_t _maximum;
  uint32_t _length;
  struct DDS_XTypes_TypeIdentifierTypeObjectPair * _buffer;
  bool _release;
} dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair;

#define dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair__alloc() \
  ((dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair *)dds_alloc( \
    sizeof(dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair)));

#define dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair_allocbuf(l) \
  ((struct DDS_XTypes_TypeIdentifierTypeObjectPair *)dds_alloc(          \
    (l) * sizeof(struct DDS_XTypes_TypeIdentifierTypeObjectPair)))
#endif /* DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERTYPEOBJECTPAIR_DEFINED */

#ifndef DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERPAIR_DEFINED
#define DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERPAIR_DEFINED
typedef struct dds_sequence_DDS_XTypes_TypeIdentifierPair
{
  uint32_t _maximum;
  uint32_t _length;
  struct DDS_XTypes_TypeIdentifierPair * _buffer;
  bool _release;
} dds_sequence_DDS_XTypes_TypeIdentifierPair;

#define dds_sequence_DDS_XTypes_TypeIdentifierPair__alloc() \
  ((dds_sequence_DDS_XTypes_TypeIdentifierPair *)dds_alloc( \
    sizeof(dds_sequence_DDS_XTypes_TypeIdentifierPair)));

#define dds_sequence_DDS_XTypes_TypeIdentifierPair_allocbuf(l) \
  ((struct DDS_XTypes_TypeIdentifierPair *)dds_alloc(          \
    (l) * sizeof(struct DDS_XTypes_TypeIdentifierPair)))
#endif /* DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERPAIR_DEFINED */

typedef struct DDS_XTypes_TypeMapping
{
  dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair identifier_object_pair_minimal;
  dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair identifier_object_pair_complete;
  dds_sequence_DDS_XTypes_TypeIdentifierPair identifier_complete_minimal;
} DDS_XTypes_TypeMapping;

DDS_EXPORT extern const dds_topic_descriptor_t DDS_XTypes_TypeMapping_desc;

#define DDS_XTypes_TypeMapping__alloc() \
  ((DDS_XTypes_TypeMapping *)dds_alloc(sizeof(DDS_XTypes_TypeMapping)));

#define DDS_XTypes_TypeMapping_free(d, o) dds_sample_free((d), &DDS_XTypes_TypeMapping_desc, (o))

DDS_EXPORT extern const struct dds_cdrstream_desc DDS_XTypes_TypeMapping_cdrstream_desc;

#ifdef __cplusplus
}
#endif

#endif /* DDSI_XT_TYPEMAP_H */
