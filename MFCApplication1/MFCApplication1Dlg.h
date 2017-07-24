
// MFCApplication1Dlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "opencv2/opencv.hpp"
#include "stdio.h"

#include "stdio.h"
#include <cstring>
#include <string>

using namespace cv;

// CMFCApplication1Dlg dialog
class CMFCApplication1Dlg : public CDialogEx
{
// Construction
public:
	CMFCApplication1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	CStatic BMpic1;
	CStatic BMpic2;
	CString filepath;
	Mat resize, gray;/**/
	Mat readpic(CString str) {
		CStringA strA(str); // a helper string
		LPCSTR ptr = strA;
		/*convert image to bitmap*/
		return imread(ptr, CV_LOAD_IMAGE_UNCHANGED);
	};
public:
	afx_msg void OnBnClickedBtn1();	
	afx_msg void OnBnClickedBtn2();
};