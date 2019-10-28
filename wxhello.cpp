#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include <iostream>
#include <string>

class mainApp : public wxApp
{
public:
	virtual bool OnInit();
};

//Some things in this class should probably be moved to private
class mainFrame : public wxFrame
{
public:
	mainFrame(const wxString& title);

	//Choice Events
	void on_rock(wxCommandEvent& event);
	void on_paper(wxCommandEvent& event);
	void on_scissors(wxCommandEvent& event);

	//Menu Items
	void on_new(wxCommandEvent& event);
	void on_about(wxCommandEvent& event);
	void on_exit(wxCommandEvent& event);

	//Round Selection
	void on_5(wxCommandEvent& event);
	void on_10(wxCommandEvent& event);
	void on_20(wxCommandEvent& event);
	void on_50(wxCommandEvent& event);

	wxStaticText *button_choice;
	wxStaticText *round;
	wxStaticText *maxRounds;

	//These still need to be implemented
	wxStaticText *prediction;
	wxStaticText *winner;
	wxStaticText *player_score;
	wxStaticText *computer_score;

	int roundNum;
	int roundMax;

	wxDECLARE_EVENT_TABLE();
};

bool mainApp::OnInit()
{
	mainFrame *frame = new mainFrame("Rock-Paper-Scissors");
	frame->Show(true);
	return true;
}

mainFrame::mainFrame(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title)
{
	wxStaticText *choose = new wxStaticText(this, wxID_ANY, "Choose:", wxPoint(25, 80));

	button_choice = new wxStaticText(this, 1, "Chosen: NULL", wxPoint(150, 150));
	
	roundMax = 20;
	std::string maxround_str = "Round: " + std::to_string(roundMax);
	wxString maxround_s = maxround_str.c_str();

	roundNum = 1;
	std::string round_str = "Round: " + std::to_string(roundNum);
	wxString round_s = round_str.c_str();

	round = new wxStaticText(this, 2, round_s, wxPoint(0,0));
	maxRounds = new wxStaticText(this, 3, maxround_s, wxPoint(100,0));

	prediction = new wxStaticText(this, 4, "Prediction: ", wxPoint(0,170));
	winner = new wxStaticText(this, 5, "Winner: ", wxPoint(0,190));

	player_score = new wxStaticText(this, 6, "Player Score: ", wxPoint(100,200));
	computer_score = new wxStaticText(this, 7, "AI Score: ", wxPoint(200,200));

	wxButton *rock = new wxButton(this, wxID_ANY, "Rock", wxPoint(50, 100));
	rock->Bind(wxEVT_BUTTON, &mainFrame::on_rock, this);

	wxButton *paper = new wxButton(this, wxID_ANY, "Paper", wxPoint(150, 100));
	paper->Bind(wxEVT_BUTTON, &mainFrame::on_paper, this);

	wxButton *scissors = new wxButton(this, wxID_ANY, "Scissors", wxPoint(250, 100));
	scissors->Bind(wxEVT_BUTTON, &mainFrame::on_scissors, this);

	// create a menu bar
    wxMenu *fileMenu = new wxMenu;
	wxMenu *helpMenu = new wxMenu;
    wxMenu *roundsMenu = new wxMenu;
    
    helpMenu->Append(wxID_ABOUT, "&About\tF1", "Show about dialog");

	fileMenu->Append(4, "New Game", "Begins a new RPS game");
    fileMenu->Append(wxID_EXIT, "E&xit\tAlt-X", "Quit this program");

	roundsMenu->Append(5, "5 Rounds", "Sets the max rounds to 5");
	roundsMenu->Append(6, "10 Rounds", "Sets the max rounds to 10");
	roundsMenu->Append(7, "20 Rounds", "Sets the max rounds to 20");
	roundsMenu->Append(8, "50 Rounds", "Sets the max rounds to 50");
	
    // now append the freshly created menu to the menu bar...
    wxMenuBar *menuBar = new wxMenuBar();
    menuBar->Append(fileMenu, "&File");
    menuBar->Append(helpMenu, "&Help");
	menuBar->Append(roundsMenu, "&Rounds");
	SetMenuBar(menuBar);
}

void mainFrame::on_rock(wxCommandEvent& event)
{
	std::string st = "Chosen: Rock";
	wxString s = st.c_str();
	button_choice->SetLabel(s);
	button_choice->Refresh();

	if (roundNum < roundMax)
	{
		roundNum++;
		std::string round_str = "Round: " + std::to_string(roundNum);
		wxString round_s = round_str.c_str();
		round->SetLabel(round_s);
		round->Refresh();
	}
	else
	{
		wxMessageBox("Game Over!");
	}
}

void mainFrame::on_paper(wxCommandEvent& event)
{
	std::string st = "Chosen: Paper";
	wxString s = st.c_str();
	button_choice->SetLabel(s);
	button_choice->Refresh();

	if (roundNum < roundMax)
	{
		roundNum++;
		std::string round_str = "Round: " + std::to_string(roundNum);
		wxString round_s = round_str.c_str();
		round->SetLabel(round_s);
		round->Refresh();
	}
	else
	{
		wxMessageBox("Game Over!");
	}
}

void mainFrame::on_scissors(wxCommandEvent& event)
{
	std::string st = "Chosen: Scissors";
	wxString s = st.c_str();
	button_choice->SetLabel(s);
	button_choice->Refresh();

	if (roundNum < roundMax)
	{
		roundNum++;
		std::string round_str = "Round: " + std::to_string(roundNum);
		wxString round_s = round_str.c_str();
		round->SetLabel(round_s);
		round->Refresh();
	}
	else
	{
		wxMessageBox("Game Over!");
	}
}

void mainFrame::on_new(wxCommandEvent& event)
{
	roundNum = 1;
	std::string st = "Round: " + std::to_string(roundNum);
	wxString s = st.c_str();
	round->SetLabel(s);
	round->Refresh();
}

void mainFrame::on_about(wxCommandEvent& event)
{
	wxMessageBox("This is a Rock-Paper-Scissors game.");
}

void mainFrame::on_exit(wxCommandEvent& WXUNUSED(event))
{
	exit(0);
}

void mainFrame::on_5(wxCommandEvent& event)
{
	roundMax = 5;
	std::string round_str = "Round: " + std::to_string(roundMax);
	wxString round_s = round_str.c_str();
	maxRounds->SetLabel(round_s);
	maxRounds->Refresh();
}

void mainFrame::on_10(wxCommandEvent& event)
{
	roundMax = 10;
	std::string round_str = "Round: " + std::to_string(roundMax);
	wxString round_s = round_str.c_str();
	maxRounds->SetLabel(round_s);
	maxRounds->Refresh();
}

void mainFrame::on_20(wxCommandEvent& event)
{
	roundMax = 20;
	std::string round_str = "Round: " + std::to_string(roundMax);
	wxString round_s = round_str.c_str();
	maxRounds->SetLabel(round_s);
	maxRounds->Refresh();
}

void mainFrame::on_50(wxCommandEvent& event)
{
	roundMax = 50;
	std::string round_str = "Round: " + std::to_string(roundMax);
	wxString round_s = round_str.c_str();
	maxRounds->SetLabel(round_s);
	maxRounds->Refresh();
}

//Should probably create an enum for all the IDs
wxBEGIN_EVENT_TABLE(mainFrame, wxApp)
    EVT_MENU(1,   mainFrame::on_rock)
    EVT_MENU(2,  mainFrame::on_paper)
    EVT_MENU(3, mainFrame::on_scissors)
	EVT_MENU(4, mainFrame::on_new)
	EVT_MENU(wxID_ABOUT, mainFrame::on_about)
	EVT_MENU(wxID_EXIT, mainFrame::on_exit)
	EVT_MENU(5, mainFrame::on_5)
	EVT_MENU(6, mainFrame::on_10)
	EVT_MENU(7, mainFrame::on_20)
	EVT_MENU(8, mainFrame::on_50)
wxEND_EVENT_TABLE()

IMPLEMENT_APP(mainApp);
