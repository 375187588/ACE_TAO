/* -*- C++ -*- */
// $Id $
// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html
//
// Hand modified by Vishal Kachroo <vishal@cs.wustl.edu>
//

#if !defined (_CORBA_ORB_OBJECTIDLIST_I_)
#define _CORBA_ORB_OBJECTIDLIST_I_

// *************************************************************
// Inline operations for class CORBA::ORB::ObjectIdList_var
// *************************************************************

ACE_INLINE
CORBA_ORB_ObjectIdList_var::CORBA_ORB_ObjectIdList_var (void) // default constructor
  : ptr_ (0)
{}

ACE_INLINE
CORBA_ORB_ObjectIdList_var::CORBA_ORB_ObjectIdList_var (CORBA_ORB_ObjectIdList *p)
  : ptr_ (p)
{}

ACE_INLINE
CORBA_ORB_ObjectIdList_var::CORBA_ORB_ObjectIdList_var (const CORBA_ORB_ObjectIdList_var &p) // copy constructor
{
  if (p.ptr_)
    this->ptr_ = new CORBA_ORB_ObjectIdList(*p.ptr_);
  else
    this->ptr_ = 0;
}

ACE_INLINE
CORBA_ORB_ObjectIdList_var::~CORBA_ORB_ObjectIdList_var (void) // destructor
{
  delete this->ptr_;
}

ACE_INLINE CORBA_ORB_ObjectIdList_var &
CORBA_ORB_ObjectIdList_var::operator= (CORBA_ORB_ObjectIdList *p)
{
  delete this->ptr_;
  this->ptr_ = p;
  return *this;
}

ACE_INLINE CORBA_ORB_ObjectIdList_var &
CORBA_ORB_ObjectIdList_var::operator= (const CORBA_ORB_ObjectIdList_var &p) // deep copy
{
  if (this != &p)
  {
    delete this->ptr_;
    this->ptr_ = new CORBA_ORB_ObjectIdList (*p.ptr_);
  }
  return *this;
}

ACE_INLINE const CORBA_ORB_ObjectIdList *
CORBA_ORB_ObjectIdList_var::operator-> (void) const
{
  return this->ptr_;
}

ACE_INLINE CORBA_ORB_ObjectIdList *
CORBA_ORB_ObjectIdList_var::operator-> (void)
{
  return this->ptr_;
}

ACE_INLINE 
CORBA_ORB_ObjectIdList_var::operator const CORBA_ORB_ObjectIdList &() const // cast
{
  return *this->ptr_;
}

ACE_INLINE 
CORBA_ORB_ObjectIdList_var::operator CORBA_ORB_ObjectIdList &() // cast 
{
  return *this->ptr_;
}

ACE_INLINE 
CORBA_ORB_ObjectIdList_var::operator CORBA_ORB_ObjectIdList &() const// cast 
{
  return *this->ptr_;
}

ACE_INLINE TAO_SeqElem_String_Manager 
CORBA_ORB_ObjectIdList_var::operator[] (CORBA::ULong index)
{
  return this->ptr_->operator[] (index);
}

ACE_INLINE const CORBA_ORB_ObjectIdList &
CORBA_ORB_ObjectIdList_var::in (void) const
{
  return *this->ptr_;
}

ACE_INLINE CORBA_ORB_ObjectIdList &
CORBA_ORB_ObjectIdList_var::inout (void)
{
  return *this->ptr_;
}

// mapping for variable size 
ACE_INLINE CORBA_ORB_ObjectIdList *&
CORBA_ORB_ObjectIdList_var::out (void)
{
  delete this->ptr_;
  this->ptr_ = 0;
  return this->ptr_;
}

ACE_INLINE CORBA_ORB_ObjectIdList *
CORBA_ORB_ObjectIdList_var::_retn (void)
{
  CORBA_ORB_ObjectIdList *tmp = this->ptr_;
  this->ptr_ = 0;
  return tmp;
}

ACE_INLINE CORBA_ORB_ObjectIdList *
CORBA_ORB_ObjectIdList_var::ptr (void) const
{
  return this->ptr_;
}

// *************************************************************
// Inline operations for class CORBA_ORB_ObjectIdList_out
// *************************************************************

ACE_INLINE
CORBA_ORB_ObjectIdList_out::CORBA_ORB_ObjectIdList_out (CORBA_ORB_ObjectIdList *&p)
  : ptr_ (p)
{
  this->ptr_ = 0;
}

ACE_INLINE
CORBA_ORB_ObjectIdList_out::CORBA_ORB_ObjectIdList_out (CORBA_ORB_ObjectIdList_var &p) // constructor from _var
  : ptr_ (p.out ())
{
  delete this->ptr_;
  this->ptr_ = 0;
}

ACE_INLINE
CORBA_ORB_ObjectIdList_out::CORBA_ORB_ObjectIdList_out (const CORBA_ORB_ObjectIdList_out &p) // copy constructor
  : ptr_ (ACE_const_cast (CORBA_ORB_ObjectIdList_out&,p).ptr_)
{}

ACE_INLINE CORBA_ORB_ObjectIdList_out &
CORBA_ORB_ObjectIdList_out::operator= (const CORBA_ORB_ObjectIdList_out &p)
{
  this->ptr_ = ACE_const_cast (CORBA_ORB_ObjectIdList_out&,p).ptr_;
  return *this;
}

ACE_INLINE CORBA_ORB_ObjectIdList_out &
CORBA_ORB_ObjectIdList_out::operator= (CORBA_ORB_ObjectIdList *p)
{
  this->ptr_ = p;
  return *this;
}

ACE_INLINE 
CORBA_ORB_ObjectIdList_out::operator CORBA_ORB_ObjectIdList *&() // cast
{
  return this->ptr_;
}

ACE_INLINE CORBA_ORB_ObjectIdList *&
CORBA_ORB_ObjectIdList_out::ptr (void) // ptr
{
  return this->ptr_;
}

ACE_INLINE CORBA_ORB_ObjectIdList *
CORBA_ORB_ObjectIdList_out::operator-> (void)
{
  return this->ptr_;
}

ACE_INLINE TAO_SeqElem_String_Manager 
CORBA_ORB_ObjectIdList_out::operator[] (CORBA::ULong index)
{
  return this->ptr_->operator[] (index);
}


#endif /* end #if !defined */

ACE_INLINE CORBA::Boolean
operator<< (
    TAO_OutputCDR &,
    const CORBA::ORB_ptr
  );
ACE_INLINE CORBA::Boolean
operator>> (
    TAO_InputCDR &,
    CORBA::ORB_ptr &
  );

ACE_INLINE CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA_ORB_ObjectIdList &_tao_sequence
  )
{
  if (strm << _tao_sequence.length ())
  {
    // encode all elements
    CORBA::Boolean _tao_marshal_flag = 1;
    for (CORBA::ULong i = 0; i < _tao_sequence.length () && _tao_marshal_flag; i++)
      _tao_marshal_flag = (strm << _tao_sequence[i].in ());
    return _tao_marshal_flag;
  }
  return 0; // error
}

ACE_INLINE CORBA::Boolean operator>> (TAO_InputCDR &strm, CORBA_ORB_ObjectIdList &_tao_sequence)
{
  CORBA::ULong _tao_seq_len;
  if (strm >> _tao_seq_len)
  {
    // set the length of the sequence
    _tao_sequence.length (_tao_seq_len);
    // retrieve all the elements
    CORBA::Boolean _tao_marshal_flag = 1;
    for (CORBA::ULong i = 0; i < _tao_sequence.length () && _tao_marshal_flag; i++)
      _tao_marshal_flag = (strm >> _tao_sequence[i].out ());
    return _tao_marshal_flag;
  }
  return 0; // error
}






