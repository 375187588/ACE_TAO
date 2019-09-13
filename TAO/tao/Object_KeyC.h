// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.5.6
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       https://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     https://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be\be_codegen.cpp:153

#ifndef _TAO_IDL_ORIG_OBJECT_KEYC_H_
#define _TAO_IDL_ORIG_OBJECT_KEYC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "tao/TAO_Export.h"
#include "tao/ORB.h"
#include "tao/Environment.h"
#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:48

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{

  // TAO_IDL - Generated from
  // be\be_visitor_sequence/sequence_ch.cpp:101

#if !defined (_TAO_OBJECTKEY_CH_)
#define _TAO_OBJECTKEY_CH_

  class ObjectKey;

  typedef
    TAO_FixedSeq_Var_T<
        ObjectKey
      >
    ObjectKey_var;

  typedef
    TAO_Seq_Out_T<
        ObjectKey
      >
    ObjectKey_out;

  class TAO_Export ObjectKey
    : public
        TAO::unbounded_value_sequence<
            CORBA::Octet
          >
  {
  public:
    ObjectKey (void);
    ObjectKey (CORBA::ULong max);
    ObjectKey (
        CORBA::ULong max,
        CORBA::ULong length,
        CORBA::Octet* buffer,
        CORBA::Boolean release = false
      );
#if defined (ACE_HAS_CPP11)
    ObjectKey (const ObjectKey &) = default;
    ObjectKey (ObjectKey &&) = default;
    ObjectKey& operator= (const ObjectKey &) = default;
    ObjectKey& operator= (ObjectKey &&) = default;
#endif /* ACE_HAS_CPP11 */
    ~ObjectKey (void);

    typedef ObjectKey_var _var_type;

#if (TAO_NO_COPY_OCTET_SEQUENCES == 1)
    ObjectKey (
        CORBA::ULong length,
        const ACE_Message_Block* mb
      )
      : TAO::unbounded_value_sequence<CORBA::Octet> (length, mb) {}
#endif /* TAO_NO_COPY_OCTET_SEQUENCE == 1 */

    // Hand crafted.

    static void encode_sequence_to_string (
        char* & str,
        TAO::unbounded_value_sequence<CORBA::Octet> const & seq);
    static void decode_string_to_sequence (
        TAO::unbounded_value_sequence<CORBA::Octet> &seq,
        char const * str);
    static CORBA::Boolean is_legal (unsigned char c);

    /// A special method that gives no regard to how the ORB has
    /// configured  the resource factory. This will be used only
    /// during Profile decoding and should be safe. This is a solution
    /// for the bug report [Bug 1616]
    static CORBA::Boolean demarshal_key (ObjectKey & key,
                                         TAO_InputCDR & cdr);
  };

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:66

} // module TAO

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:61

// Traits specializations.
namespace TAO
{
}

// TAO_IDL - Generated from
// be\be_visitor_sequence/cdr_op_ch.cpp:71

#if !defined _TAO_CDR_OP_TAO_ObjectKey_H_
#define _TAO_CDR_OP_TAO_ObjectKey_H_

TAO_Export CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const TAO::ObjectKey &
  );
TAO_Export CORBA::Boolean operator>> (
    TAO_InputCDR &,
    TAO::ObjectKey &
  );

#endif /* _TAO_CDR_OP_TAO_ObjectKey_H_ */

// TAO_IDL - Generated from
// be\be_codegen.cpp:955

TAO_END_VERSIONED_NAMESPACE_DECL

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#include /**/ "ace/post.h"

#endif /* ifndef */


