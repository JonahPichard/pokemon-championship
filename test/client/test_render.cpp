#include <boost/test/unit_test.hpp>
#include <client.hpp>
#include <iostream>

using namespace client;
using namespace std;

BOOST_AUTO_TEST_SUITE( TestStates )

    BattleScene battleScene(std::make_shared<client::LoginState>());
    StatesName statesName;

    BOOST_AUTO_TEST_CASE( test_Action_State )
    {
        battleScene.transitionTo(std::make_shared<client::ActionState>());
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Action_State),battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Ban_State )
    {
        battleScene.transitionTo(std::make_shared<client::BanState>());
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Ban_State),battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Choice_State )
    {
        battleScene.transitionTo(std::make_shared<client::ChoiceState>());
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Choice_State),battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Login_State )
    {
        battleScene.transitionTo(std::make_shared<client::LoginState>());
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Login_State),battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Wait_State )
    {
        battleScene.transitionTo(std::make_shared<client::WaitState>());
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Wait_State),battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Select_State )
    {
        battleScene.transitionTo(std::make_shared<client::SelectState>());
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Select_State),battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Switch_State )
    {
        battleScene.transitionTo(std::make_shared<client::SwitchState>());
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Switch_State),battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_TurnResult_State )
    {
        battleScene.transitionTo(std::make_shared<client::TurnResultState>());
        BOOST_CHECK_EQUAL(std::to_string(StatesName::TurnResult_State),battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_EndBattle_State )
    {
        battleScene.transitionTo(std::make_shared<client::EndBattleState>());
        BOOST_CHECK_EQUAL(std::to_string(StatesName::EndBattle_State),battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE (Test_Render)
    {
        for (int i = 0; i < statesName; ++i)
        {
            battleScene.temporaryRequestCall();
            BOOST_CHECK_EQUAL(std::to_string(static_cast<StatesName>(i)),battleScene.getState());
        }
    }

BOOST_AUTO_TEST_SUITE_END()

/*
BOOST_AUTO_TEST_SUITE( TestRender )

    BOOST_AUTO_TEST_CASE( test_Login_State )
    {
        TestStates::battleScene.temporaryRequestCall();
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Login_State),TestStates::battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Ban_State )
    {
        TestStates::battleScene.temporaryRequestCall();
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Ban_State),TestStates::battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Select_State )
    {
        TestStates::battleScene.temporaryRequestCall();
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Select_State),TestStates::battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Choice_State )
    {
        TestStates::battleScene.temporaryRequestCall();
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Choice_State),TestStates::battleScene.getState());
    }


    BOOST_AUTO_TEST_CASE( test_Action_State )
    {
        TestStates::battleScene.temporaryRequestCall();
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Action_State),TestStates::battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Switch_State )
    {
        TestStates::battleScene.temporaryRequestCall();
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Switch_State),TestStates::battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_Wait_State )
    {
        TestStates::battleScene.temporaryRequestCall();
        BOOST_CHECK_EQUAL(std::to_string(StatesName::Wait_State),TestStates::battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_TurnResult_State )
    {
        TestStates::battleScene.temporaryRequestCall();
        BOOST_CHECK_EQUAL(std::to_string(StatesName::TurnResult_State),TestStates::battleScene.getState());
    }

    BOOST_AUTO_TEST_CASE( test_EndBattle_State )
    {
        TestStates::battleScene.temporaryRequestCall();
        BOOST_CHECK_EQUAL(std::to_string(StatesName::EndBattle_State),TestStates::battleScene.getState());
    }

BOOST_AUTO_TEST_SUITE_END()
 */

/* vim: set sw=2 sts=2 et : */