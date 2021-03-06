// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_DataMapIteratorOfDataMapOfIntegerArc_HeaderFile
#define _MAT_DataMapIteratorOfDataMapOfIntegerArc_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_MAT_Arc.hxx>
#include <Handle_MAT_DataMapNodeOfDataMapOfIntegerArc.hxx>
class Standard_NoSuchObject;
class MAT_Arc;
class TColStd_MapIntegerHasher;
class MAT_DataMapOfIntegerArc;
class MAT_DataMapNodeOfDataMapOfIntegerArc;



class MAT_DataMapIteratorOfDataMapOfIntegerArc  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MAT_DataMapIteratorOfDataMapOfIntegerArc();
  
  Standard_EXPORT MAT_DataMapIteratorOfDataMapOfIntegerArc(const MAT_DataMapOfIntegerArc& aMap);
  
  Standard_EXPORT   void Initialize (const MAT_DataMapOfIntegerArc& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Handle(MAT_Arc)& Value()  const;




protected:





private:





};







#endif // _MAT_DataMapIteratorOfDataMapOfIntegerArc_HeaderFile
