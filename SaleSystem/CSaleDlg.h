#pragma once



// CSaleDlg form view

class CSaleDlg : public CFormView
{
	DECLARE_DYNCREATE(CSaleDlg)

protected:
	CSaleDlg();           // protected constructor used by dynamic creation
	virtual ~CSaleDlg();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_Sale };
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


