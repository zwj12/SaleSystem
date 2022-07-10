
// SaleSystemView.cpp : implementation of the CSaleSystemView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "SaleSystem.h"
#endif

#include "SaleSystemDoc.h"
#include "SaleSystemView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSaleSystemView

IMPLEMENT_DYNCREATE(CSaleSystemView, CView)

BEGIN_MESSAGE_MAP(CSaleSystemView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CSaleSystemView construction/destruction

CSaleSystemView::CSaleSystemView() noexcept
{
	// TODO: add construction code here

}

CSaleSystemView::~CSaleSystemView()
{
}

BOOL CSaleSystemView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CSaleSystemView drawing

void CSaleSystemView::OnDraw(CDC* /*pDC*/)
{
	CSaleSystemDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CSaleSystemView printing

BOOL CSaleSystemView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSaleSystemView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSaleSystemView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CSaleSystemView diagnostics

#ifdef _DEBUG
void CSaleSystemView::AssertValid() const
{
	CView::AssertValid();
}

void CSaleSystemView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSaleSystemDoc* CSaleSystemView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSaleSystemDoc)));
	return (CSaleSystemDoc*)m_pDocument;
}
#endif //_DEBUG


// CSaleSystemView message handlers
