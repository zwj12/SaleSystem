// CUserDlg.cpp : implementation file
//

#include "pch.h"
#include "SaleSystem.h"
#include "CUserDlg.h"


// CUserDlg

IMPLEMENT_DYNCREATE(CUserDlg, CFormView)

CUserDlg::CUserDlg()
	: CFormView(IDD_DIALOG_USER)
	, m_user(_T(""))
	, m_name(_T(""))
	, m_newpassword(_T(""))
	, m_makesurepassword(_T(""))
{

}

CUserDlg::~CUserDlg()
{
}

void CUserDlg::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_user);
	DDX_Text(pDX, IDC_EDIT3, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_newpassword);
	DDX_Text(pDX, IDC_EDIT4, m_makesurepassword);
}

BEGIN_MESSAGE_MAP(CUserDlg, CFormView)
END_MESSAGE_MAP()


// CUserDlg diagnostics

#ifdef _DEBUG
void CUserDlg::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CUserDlg::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CUserDlg message handlers
