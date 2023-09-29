#include <wx/wx.h>

class MainFrame final : public wxFrame
{
public:
    MainFrame()
        : wxFrame(nullptr, wxID_ANY, "Quick Starter") {
        CreateControls();
    }

    virtual ~MainFrame() = default;

private:
    void CreateControls() {
        auto mainPanel = new wxPanel(this, wxID_ANY);

        auto mainSizer = new wxBoxSizer(wxVERTICAL);
        mainPanel->SetSizer(mainSizer);

        auto starterLabel = new wxStaticText(mainPanel, wxID_ANY, "Quick Starter");
        mainSizer->Add(starterLabel, wxSizerFlags().Center());
    }
};

class Application : public wxApp
{
public:
    Application() = default;
    virtual ~Application() = default;

    bool OnInit() override {
        auto frame = new MainFrame();
        frame->Show(true);
        SetTopWindow(frame);

        return true;
    }
};

wxIMPLEMENT_APP(Application);
