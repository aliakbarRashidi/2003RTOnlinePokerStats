#if !defined(AFX_NUMERICEDIT_H__3C6DED83_3304_4D2D_8B14_A7351F391FD4__INCLUDED_)
#define AFX_NUMERICEDIT_H__3C6DED83_3304_4D2D_8B14_A7351F391FD4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NumericEdit.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNumericEdit window

class CNumericEdit : public CEdit
{
// Construction
public:
	CNumericEdit();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNumericEdit)
	//}}AFX_VIRTUAL

// Implementation
public:
	long GetValue();
	void SetMoneyValue(long dNewValue);
	long GetMoneyValue();
	virtual ~CNumericEdit();

	// Generated message map functions
protected:
	//{{AFX_MSG(CNumericEdit)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NUMERICEDIT_H__3C6DED83_3304_4D2D_8B14_A7351F391FD4__INCLUDED_)
