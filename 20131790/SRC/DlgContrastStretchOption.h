#pragma once


// DlgContrastStretchOption 대화 상자입니다.

class DlgContrastStretchOption : public CDialog
{
	DECLARE_DYNAMIC(DlgContrastStretchOption)

public:
	DlgContrastStretchOption(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~DlgContrastStretchOption();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_CONTRAST_STRETCH_OPTION };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	int m_nStretchType;
	float m_fLow;
	float m_fHigh;
};
