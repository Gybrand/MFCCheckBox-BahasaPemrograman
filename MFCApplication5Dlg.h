
// MFCApplication5Dlg.h : header file
//

#pragma once


// CMFCApplication5Dlg dialog
class CMFCApplication5Dlg : public CDialogEx
{
// Construction
public:
	CMFCApplication5Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION5_DIALOG };
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
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck1();
	BOOL m_hobby1;
	BOOL m_hobby2;
	BOOL m_hobby3;
	BOOL m_hobby4;
	BOOL m_hobby5;
	CString m_nama;
	CString m_alamat;
	CString m_jurusan;
	CString m_tampilan;
	afx_msg void OnBnClickedButton1();
};
