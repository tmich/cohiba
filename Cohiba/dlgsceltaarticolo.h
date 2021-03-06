#pragma once
#include "GridArticoli.h"
#include <memory>

class SceltaArticoloDialog : public CDialog
{
public:
	SceltaArticoloDialog();
	~SceltaArticoloDialog();

	Articolo * GetArticolo();
	bool Ok();
protected:
	BOOL OnInitDialog() override;
	INT_PTR DialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam) override;
	virtual void OnClose() override;
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam) override;
	void OnCerca();
	void OnGridDblClick();
	GridArticoli m_Grid;
	CButton m_btnCerca;
	ListaArticoli m_articoli;
	CResizer m_Resizer;
	CEdit m_txtCerca;
	std::unique_ptr<Articolo> m_Scelta;
	bool m_bScelta;
};

class SceltaArticolo
{
public:
	SceltaArticolo();
	~SceltaArticolo();

	Articolo * scegli();
private:
	SceltaArticoloDialog dlg;
};