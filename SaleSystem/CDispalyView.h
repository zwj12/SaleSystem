#pragma once



// CDispalyView form view

class CDispalyView : public CFormView
{
	DECLARE_DYNCREATE(CDispalyView)

protected:
	CDispalyView();           // protected constructor used by dynamic creation
	virtual ~CDispalyView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CDispalyView };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};


