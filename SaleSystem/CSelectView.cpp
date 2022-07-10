// CSelectView.cpp : implementation file
//

#include "pch.h"
#include "SaleSystem.h"
#include "CSelectView.h"
#include "MainFrm.h"

// CSelectView

IMPLEMENT_DYNCREATE(CSelectView, CTreeView)

CSelectView::CSelectView()
{

}

CSelectView::~CSelectView()
{
}

BEGIN_MESSAGE_MAP(CSelectView, CTreeView)
	ON_NOTIFY_REFLECT(TVN_SELCHANGED, &CSelectView::OnTvnSelchanged)
END_MESSAGE_MAP()


// CSelectView diagnostics

#ifdef _DEBUG
void CSelectView::AssertValid() const
{
	CTreeView::AssertValid();
}

#ifndef _WIN32_WCE
void CSelectView::Dump(CDumpContext& dc) const
{
	CTreeView::Dump(dc);
}
#endif
#endif //_DEBUG


// CSelectView message handlers


void CSelectView::OnInitialUpdate()
{
	CTreeView::OnInitialUpdate();

	this->m_treeCtrl = &GetTreeCtrl();

	HICON icon = AfxGetApp()->LoadIconW(IDI_ICON_RE);
	m_imageList.Create(30, 30, ILC_COLOR32,1,1);
	m_imageList.Add(icon);

	m_treeCtrl->SetImageList(&m_imageList, TVSIL_NORMAL);

	m_treeCtrl->InsertItem(TEXT("个人信息"),0,0);
	m_treeCtrl->InsertItem(TEXT("销售管理"), 0, 0);
	m_treeCtrl->InsertItem(TEXT("库存信息"), 0, 0);
	m_treeCtrl->InsertItem(TEXT("库存添加"), 0, 0);
	m_treeCtrl->InsertItem(TEXT("库存删除"), 0, 0);

	// TODO: Add your specialized code here and/or call the base class
}


void CSelectView::OnTvnSelchanged(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO: Add your control notification handler code here

	HTREEITEM item= this->m_treeCtrl->GetSelectedItem();
	CString str=m_treeCtrl->GetItemText(item);
	//MessageBox(str);

	if (str == TEXT("个人信息"))
	{
		::PostMessage(AfxGetMainWnd()->GetSafeHwnd(), NM_A, (WPARAM)NM_A, (LPARAM)0);
	}
	else if (str == TEXT("销售管理")) {
		::PostMessage(AfxGetMainWnd()->GetSafeHwnd(), NM_B, (WPARAM)NM_B, (LPARAM)0);
	}

	*pResult = 0;
}
