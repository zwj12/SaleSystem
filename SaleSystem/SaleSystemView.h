
// SaleSystemView.h : interface of the CSaleSystemView class
//

#pragma once


class CSaleSystemView : public CView
{
protected: // create from serialization only
	CSaleSystemView() noexcept;
	DECLARE_DYNCREATE(CSaleSystemView)

// Attributes
public:
	CSaleSystemDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CSaleSystemView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SaleSystemView.cpp
inline CSaleSystemDoc* CSaleSystemView::GetDocument() const
   { return reinterpret_cast<CSaleSystemDoc*>(m_pDocument); }
#endif

