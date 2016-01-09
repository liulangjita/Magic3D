#pragma once
#include "MyGUI.h"

namespace MagicApp
{
    class ReliefAppUI
    {
    public:
        ReliefAppUI();
        ~ReliefAppUI();

        void Setup();
        void Shutdown();

    private:
        void ImportModel(MyGUI::Widget* pSender);
        void Relief(MyGUI::Widget* pSender);
        void GenerateRelief(MyGUI::Widget* pSender);
        void EnterMeshTool(MyGUI::Widget* pSender);
        void BackToHomepage(MyGUI::Widget* pSender);
        void Contact(MyGUI::Widget* pSender);

    private:
        MyGUI::VectorWidgetPtr mRoot;
    };
}
