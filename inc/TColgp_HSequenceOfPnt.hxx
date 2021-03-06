// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HSequenceOfPnt_HeaderFile
#define _TColgp_HSequenceOfPnt_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColgp_HSequenceOfPnt.hxx>

#include <TColgp_SequenceOfPnt.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_Pnt;
class TColgp_SequenceOfPnt;



class TColgp_HSequenceOfPnt : public MMgt_TShared
{

public:

  
    TColgp_HSequenceOfPnt();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const gp_Pnt& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TColgp_HSequenceOfPnt)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const gp_Pnt& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColgp_HSequenceOfPnt)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const gp_Pnt& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TColgp_HSequenceOfPnt)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const gp_Pnt& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TColgp_HSequenceOfPnt)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TColgp_HSequenceOfPnt) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const gp_Pnt& anItem) ;
  
  Standard_EXPORT  const  gp_Pnt& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   gp_Pnt& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TColgp_SequenceOfPnt& Sequence()  const;
  
      TColgp_SequenceOfPnt& ChangeSequence() ;




  DEFINE_STANDARD_RTTI(TColgp_HSequenceOfPnt)

protected:




private: 


  TColgp_SequenceOfPnt mySequence;


};

#define Item gp_Pnt
#define Item_hxx <gp_Pnt.hxx>
#define TheSequence TColgp_SequenceOfPnt
#define TheSequence_hxx <TColgp_SequenceOfPnt.hxx>
#define TCollection_HSequence TColgp_HSequenceOfPnt
#define TCollection_HSequence_hxx <TColgp_HSequenceOfPnt.hxx>
#define Handle_TCollection_HSequence Handle_TColgp_HSequenceOfPnt
#define TCollection_HSequence_Type_() TColgp_HSequenceOfPnt_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_




#endif // _TColgp_HSequenceOfPnt_HeaderFile
