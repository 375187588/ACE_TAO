// -*- C++ -*-

//=============================================================================
/**
 *  @file    ComponentInstallation_Impl.h
 *
 *  $Id$
 *
 *  This file contains implementation for the servant of
 *  Components::Deployment::ComponentInstallation interface.
 *
 *  @author Nanbor Wang <nanbor@cs.wustl.edu>
 */
//=============================================================================


#ifndef CIAO_SERVERACTIVATOR_IMPL_H
#define CIAO_SERVERACTIVATOR_IMPL_H
#include "ace/pre.h"

#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "CCM_DeploymentS.h"

namespace CIAO
{
  /**
   * @class ComponentInstallation_Impl
   *
   * @brief Servant implementation for Components::Deployment::ComponentInstallation
   *
   * This class implements the Components::Deployment::ComponentInstallation
   * interface as defined by the CCM spcification.  As the interface
   * implies, this is actually part of the deployment interface and is
   * used to manage the lifecycle of containers running on the server.
   */
  class CIAO_SERVER_Export ComponentInstallation_Impl
    : public virtual POA_Components::Deployment::ComponentInstallation,
      public virtual PortableServer::RefCountServantBase
  {
  public:
    /// Constructor
    ComponentInstallation_Impl (CORBA::ORB_ptr o);

    /// Destructor
    virtual ~ComponentInstallation_Impl (void);

    /// Get the containing POA.  This operation does *not*
    /// increase the reference count of the POA.
    virtual PortableServer::POA_ptr _default_POA (void);

    /// Initialize the ComponentInstallation.
    int init (ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

    /// Components::Deployment::ComponentInstallation defined attributes/operations.

    virtual void install (const char * implUUID,
                          const char * component_loc
                          ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       Components::Deployment::InvalidLocation,
                       Components::Deployment::InstallationFailure));

    virtual void replace (const char * implUUID,
                          const char * component_loc
                          ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       Components::Deployment::InvalidLocation,
                       Components::Deployment::InstallationFailure));

    virtual void remove (const char * implUUID
                         ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       Components::Deployment::UnknownImplId,
                       Components::RemoveFailure));

    virtual char * get_implementation (const char * implUUID
                                       ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       Components::Deployment::UnknownImplId,
                       Components::Deployment::InstallationFailure));

  protected:
    /// Keep a pointer to the managing ORB serving this servant.
    CORBA::ORB_var orb_;

    /// Keep a pointer to the managing POA.
    PortableServer::POA_var poa_;
  };
}

#if defined (__ACE_INLINE__)
# include "ComponentInstallation_Impl.inl"
#endif /* __ACE_INLINE__ */

#include "ace/post.h"
#endif /* CIAO_SERVERACTIVATOR_IMPL_H */
