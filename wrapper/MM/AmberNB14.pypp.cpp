// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AmberNB14.pypp.hpp"

namespace bp = boost::python;

#include "AmberParams.h"

#include "SireCAS/expression.h"

#include "SireMol/angleid.h"

#include "SireMol/atomidx.h"

#include "SireMol/bondid.h"

#include "SireMol/dihedralid.h"

#include "SireMol/improperid.h"

#include "SireMol/molecule.h"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "amberparams.h"

#include "amberparams.h"

SireMM::AmberNB14 __copy__(const SireMM::AmberNB14 &other){ return SireMM::AmberNB14(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AmberNB14_class(){

    { //::SireMM::AmberNB14
        typedef bp::class_< SireMM::AmberNB14 > AmberNB14_exposer_t;
        AmberNB14_exposer_t AmberNB14_exposer = AmberNB14_exposer_t( "AmberNB14", "This simple class holds Amber parameters for a 1-4 scale factor", bp::init< bp::optional< double, double > >(( bp::arg("cscl")=0, bp::arg("ljscl")=0 ), "") );
        bp::scope AmberNB14_scope( AmberNB14_exposer );
        AmberNB14_exposer.def( bp::init< SireMM::AmberNB14 const & >(( bp::arg("other") ), "") );
        { //::SireMM::AmberNB14::cscl
        
            typedef double ( ::SireMM::AmberNB14::*cscl_function_type)(  ) const;
            cscl_function_type cscl_function_value( &::SireMM::AmberNB14::cscl );
            
            AmberNB14_exposer.def( 
                "cscl"
                , cscl_function_value
                , "" );
        
        }
        { //::SireMM::AmberNB14::ljscl
        
            typedef double ( ::SireMM::AmberNB14::*ljscl_function_type)(  ) const;
            ljscl_function_type ljscl_function_value( &::SireMM::AmberNB14::ljscl );
            
            AmberNB14_exposer.def( 
                "ljscl"
                , ljscl_function_value
                , "" );
        
        }
        AmberNB14_exposer.def( bp::self != bp::self );
        { //::SireMM::AmberNB14::operator=
        
            typedef ::SireMM::AmberNB14 & ( ::SireMM::AmberNB14::*assign_function_type)( ::SireMM::AmberNB14 const & ) ;
            assign_function_type assign_function_value( &::SireMM::AmberNB14::operator= );
            
            AmberNB14_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AmberNB14_exposer.def( bp::self == bp::self );
        { //::SireMM::AmberNB14::operator[]
        
            typedef double ( ::SireMM::AmberNB14::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::AmberNB14::operator[] );
            
            AmberNB14_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMM::AmberNB14::toString
        
            typedef ::QString ( ::SireMM::AmberNB14::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::AmberNB14::toString );
            
            AmberNB14_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        AmberNB14_exposer.def( "__copy__", &__copy__);
        AmberNB14_exposer.def( "__deepcopy__", &__copy__);
        AmberNB14_exposer.def( "clone", &__copy__);
        AmberNB14_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::AmberNB14 >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberNB14_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::AmberNB14 >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberNB14_exposer.def( "__str__", &__str__< ::SireMM::AmberNB14 > );
        AmberNB14_exposer.def( "__repr__", &__str__< ::SireMM::AmberNB14 > );
    }

}
