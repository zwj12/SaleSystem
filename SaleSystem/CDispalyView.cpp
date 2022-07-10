// CDispalyView.cpp : implementation file
//

#include "pch.h"
#include "SaleSystem.h"
#include "CDispalyView.h"


// CDispalyView

IMPLEMENT_DYNCREATE(CDispalyView, CFormView)

CDispalyView::CDispalyView()
	: CFormView(IDD_CDispalyView)
{

}

CDispalyView::~CDispalyView()
{
}

void CDispalyView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CDispalyView, CFormView)
END_MESSAGE_MAP()


// CDispalyView diagnostics

#ifdef _DEBUG
void CDispalyView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CDispalyView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CDispalyView message handlers
