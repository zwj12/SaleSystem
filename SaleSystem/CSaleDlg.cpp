// CSaleDlg.cpp : implementation file
//

#include "pch.h"
#include "SaleSystem.h"
#include "CSaleDlg.h"


// CSaleDlg

IMPLEMENT_DYNCREATE(CSaleDlg, CFormView)

CSaleDlg::CSaleDlg()
	: CFormView(IDD_DIALOG_Sale)
{

}

CSaleDlg::~CSaleDlg()
{
}

void CSaleDlg::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CSaleDlg, CFormView)
END_MESSAGE_MAP()


// CSaleDlg diagnostics

#ifdef _DEBUG
void CSaleDlg::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CSaleDlg::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CSaleDlg message handlers
