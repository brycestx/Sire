// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Mol2Params.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "mol2params.h"

#include "mol2params.h"

SireMM::Mol2Params __copy__(const SireMM::Mol2Params &other){ return SireMM::Mol2Params(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Mol2Params_class(){

    { //::SireMM::Mol2Params
        typedef bp::class_< SireMM::Mol2Params, bp::bases< SireMol::MoleculeProperty, SireMol::MolViewProperty, SireBase::Property > > Mol2Params_exposer_t;
        Mol2Params_exposer_t Mol2Params_exposer = Mol2Params_exposer_t( "Mol2Params", "This class holds all of the extra parameter data that has been\nread into the molecule from a Mol2 file\n\nAuthor: Lester Hedges\n", bp::init< >("Construct an empty set of parameters") );
        bp::scope Mol2Params_scope( Mol2Params_exposer );
        Mol2Params_exposer.def( bp::init< SireMol::MoleculeView const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() ), "Construct so that the parameters for the passed molecule molecule can be created") );
        Mol2Params_exposer.def( bp::init< SireMol::MoleculeInfo const & >(( bp::arg("molinfo") ), "Constructor when we only have the molecule info") );
        Mol2Params_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "Constructor when we only have the molecule info") );
        Mol2Params_exposer.def( bp::init< SireMM::Mol2Params const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::Mol2Params::info
        
            typedef ::SireMol::MoleculeInfo ( ::SireMM::Mol2Params::*info_function_type)(  ) const;
            info_function_type info_function_value( &::SireMM::Mol2Params::info );
            
            Mol2Params_exposer.def( 
                "info"
                , info_function_value
                , "Return the MoleculeInfo that describes the molecule whose parameters\nare stored in this object" );
        
        }
        { //::SireMM::Mol2Params::isCompatibleWith
        
            typedef bool ( ::SireMM::Mol2Params::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMM::Mol2Params::isCompatibleWith );
            
            Mol2Params_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "Return whether or not these parameters are compatible with the molecule\nwhose info is in molinfo" );
        
        }
        Mol2Params_exposer.def( bp::self != bp::self );
        { //::SireMM::Mol2Params::operator=
        
            typedef ::SireMM::Mol2Params & ( ::SireMM::Mol2Params::*assign_function_type)( ::SireMM::Mol2Params const & ) ;
            assign_function_type assign_function_value( &::SireMM::Mol2Params::operator= );
            
            Mol2Params_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Mol2Params_exposer.def( bp::self == bp::self );
        { //::SireMM::Mol2Params::propertyMap
        
            typedef ::SireBase::PropertyMap const & ( ::SireMM::Mol2Params::*propertyMap_function_type)(  ) const;
            propertyMap_function_type propertyMap_function_value( &::SireMM::Mol2Params::propertyMap );
            
            Mol2Params_exposer.def( 
                "propertyMap"
                , propertyMap_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the property map used to map data to molecular properties" );
        
        }
        { //::SireMM::Mol2Params::setPropertyMap
        
            typedef void ( ::SireMM::Mol2Params::*setPropertyMap_function_type)( ::SireBase::PropertyMap const & ) ;
            setPropertyMap_function_type setPropertyMap_function_value( &::SireMM::Mol2Params::setPropertyMap );
            
            Mol2Params_exposer.def( 
                "setPropertyMap"
                , setPropertyMap_function_value
                , ( bp::arg("map") )
                , "Set the property map that is used to map data to molecular properties" );
        
        }
        { //::SireMM::Mol2Params::toString
        
            typedef ::QString ( ::SireMM::Mol2Params::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::Mol2Params::toString );
            
            Mol2Params_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of these parameters" );
        
        }
        { //::SireMM::Mol2Params::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::Mol2Params::typeName );
            
            Mol2Params_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::Mol2Params::updateFrom
        
            typedef void ( ::SireMM::Mol2Params::*updateFrom_function_type)( ::SireMol::MoleculeView const & ) ;
            updateFrom_function_type updateFrom_function_value( &::SireMM::Mol2Params::updateFrom );
            
            Mol2Params_exposer.def( 
                "updateFrom"
                , updateFrom_function_value
                , ( bp::arg("molview") )
                , "Update these parameters from the contents of the passed molecule. This\nwill only work if these parameters are compatible with this molecule" );
        
        }
        { //::SireMM::Mol2Params::validate
        
            typedef ::QStringList ( ::SireMM::Mol2Params::*validate_function_type)(  ) const;
            validate_function_type validate_function_value( &::SireMM::Mol2Params::validate );
            
            Mol2Params_exposer.def( 
                "validate"
                , validate_function_value
                , "Validate that the parameters in this object are correct and consistent.\nThis returns a list of errors if there are any problems. An empty list\nmeans that everything is ok." );
        
        }
        Mol2Params_exposer.staticmethod( "typeName" );
        Mol2Params_exposer.def( "__copy__", &__copy__);
        Mol2Params_exposer.def( "__deepcopy__", &__copy__);
        Mol2Params_exposer.def( "clone", &__copy__);
        Mol2Params_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::Mol2Params >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Mol2Params_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::Mol2Params >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Mol2Params_exposer.def( "__str__", &__str__< ::SireMM::Mol2Params > );
        Mol2Params_exposer.def( "__repr__", &__str__< ::SireMM::Mol2Params > );
    }

}
