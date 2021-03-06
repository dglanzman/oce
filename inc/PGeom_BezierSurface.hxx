// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_BezierSurface_HeaderFile
#define _PGeom_BezierSurface_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PGeom_BezierSurface.hxx>

#include <Handle_PColgp_HArray2OfPnt.hxx>
#include <Handle_PColStd_HArray2OfReal.hxx>
#include <Standard_Boolean.hxx>
#include <PGeom_BoundedSurface.hxx>
class PColgp_HArray2OfPnt;
class PColStd_HArray2OfReal;


class PGeom_BezierSurface : public PGeom_BoundedSurface
{

public:

  
  //! Creates a BezierSurface with default values.
  Standard_EXPORT PGeom_BezierSurface();
  
  //! Creates a BezierSurface with these values.
  Standard_EXPORT PGeom_BezierSurface(const Standard_Boolean aURational, const Standard_Boolean aVRational, const Handle(PColgp_HArray2OfPnt)& aPoles, const Handle(PColStd_HArray2OfReal)& aWeights);
  
  //! Set the field poles with <aPoles>.
  Standard_EXPORT   void Poles (const Handle(PColgp_HArray2OfPnt)& aPoles) ;
  
  //! Returns the value of the field poles.
  Standard_EXPORT   Handle(PColgp_HArray2OfPnt) Poles()  const;
  
  //! Set the value of the field weights with <aWeights>.
  Standard_EXPORT   void Weights (const Handle(PColStd_HArray2OfReal)& aWeights) ;
  
  //! Returns the value of the field weights.
  Standard_EXPORT   Handle(PColStd_HArray2OfReal) Weights()  const;
  
  //! Set the value of the field uRational with <aURational>.
  Standard_EXPORT   void URational (const Standard_Boolean aURational) ;
  
  //! Returns the value of the field uRational.
  Standard_EXPORT   Standard_Boolean URational()  const;
  
  //! Set the value of the field vRational with <aVRational>.
  Standard_EXPORT   void VRational (const Standard_Boolean aVRational) ;
  
  //! Returns the value of the field vRational.
  Standard_EXPORT   Standard_Boolean VRational()  const;

PGeom_BezierSurface(const Storage_stCONSTclCOM& a) : PGeom_BoundedSurface(a)
{
  
}
    Standard_Boolean _CSFDB_GetPGeom_BezierSurfaceuRational() const { return uRational; }
    void _CSFDB_SetPGeom_BezierSurfaceuRational(const Standard_Boolean p) { uRational = p; }
    Standard_Boolean _CSFDB_GetPGeom_BezierSurfacevRational() const { return vRational; }
    void _CSFDB_SetPGeom_BezierSurfacevRational(const Standard_Boolean p) { vRational = p; }
    Handle(PColgp_HArray2OfPnt) _CSFDB_GetPGeom_BezierSurfacepoles() const { return poles; }
    void _CSFDB_SetPGeom_BezierSurfacepoles(const Handle(PColgp_HArray2OfPnt)& p) { poles = p; }
    Handle(PColStd_HArray2OfReal) _CSFDB_GetPGeom_BezierSurfaceweights() const { return weights; }
    void _CSFDB_SetPGeom_BezierSurfaceweights(const Handle(PColStd_HArray2OfReal)& p) { weights = p; }



  DEFINE_STANDARD_RTTI(PGeom_BezierSurface)

protected:




private: 


  Standard_Boolean uRational;
  Standard_Boolean vRational;
  Handle(PColgp_HArray2OfPnt) poles;
  Handle(PColStd_HArray2OfReal) weights;


};







#endif // _PGeom_BezierSurface_HeaderFile
