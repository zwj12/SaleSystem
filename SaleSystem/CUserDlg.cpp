// CUserDlg.cpp : implementation file
//

#include "pch.h"
#include "SaleSystem.h"
#include "CUserDlg.h"
#include "CInfoFile.h"

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
	ON_BN_CLICKED(IDC_BUTTON1, &CUserDlg::OnBnClickedButton1)
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


void CUserDlg::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();

	// TODO: Add your specialized code here and/or call the base class

	m_user =TEXT("销售员");
	CInfoFile file;
	CString pw;
	file.ReadLogin( m_name,  pw);
	UpdateData(false);


}


void CUserDlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here

	UpdateData(true);

	if (m_newpassword.IsEmpty()) {
		MessageBox(TEXT("新密码不能为空"));
		return;
	}

	if (m_newpassword != m_makesurepassword) {
		MessageBox(TEXT("新密码不一致"));
		return;
	}

	CInfoFile file;
	CStringA usname( m_name);
	CStringA password ( m_newpassword);

	file.WritePwd(usname.GetBuffer(), password.GetBuffer());

	CString str(TEXT("Hello World"));
	CStringA strA(str);
	char* strC = strA.GetBuffer();
}
