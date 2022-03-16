
// Generated from parser/C.g4 by ANTLR 4.9.2


#include "CListener.h"

#include "CParser.h"


using namespace antlrcpp;
using namespace antlr4;

CParser::CParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CParser::~CParser() {
  delete _interpreter;
}

std::string CParser::getGrammarFileName() const {
  return "C.g4";
}

const std::vector<std::string>& CParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PrimaryExpressionContext ------------------------------------------------------------------

CParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::PrimaryExpressionContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::Constant() {
  return getToken(CParser::Constant, 0);
}

std::vector<tree::TerminalNode *> CParser::PrimaryExpressionContext::StringLiteral() {
  return getTokens(CParser::StringLiteral);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::StringLiteral(size_t i) {
  return getToken(CParser::StringLiteral, i);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionContext* CParser::PrimaryExpressionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::GenericSelectionContext* CParser::PrimaryExpressionContext::genericSelection() {
  return getRuleContext<CParser::GenericSelectionContext>(0);
}

CParser::CompoundStatementContext* CParser::PrimaryExpressionContext::compoundStatement() {
  return getRuleContext<CParser::CompoundStatementContext>(0);
}

CParser::UnaryExpressionContext* CParser::PrimaryExpressionContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::Comma() {
  return getToken(CParser::Comma, 0);
}

CParser::TypeNameContext* CParser::PrimaryExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}


size_t CParser::PrimaryExpressionContext::getRuleIndex() const {
  return CParser::RulePrimaryExpression;
}

void CParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void CParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}

CParser::PrimaryExpressionContext* CParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 0, CParser::RulePrimaryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(207);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(174);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(175);
      match(CParser::Constant);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(177); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(176);
        match(CParser::StringLiteral);
        setState(179); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == CParser::StringLiteral);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(181);
      match(CParser::LeftParen);
      setState(182);
      expression();
      setState(183);
      match(CParser::RightParen);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(185);
      genericSelection();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(187);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::T__0) {
        setState(186);
        match(CParser::T__0);
      }
      setState(189);
      match(CParser::LeftParen);
      setState(190);
      compoundStatement();
      setState(191);
      match(CParser::RightParen);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(193);
      match(CParser::T__1);
      setState(194);
      match(CParser::LeftParen);
      setState(195);
      unaryExpression();
      setState(196);
      match(CParser::Comma);
      setState(197);
      typeName();
      setState(198);
      match(CParser::RightParen);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(200);
      match(CParser::T__2);
      setState(201);
      match(CParser::LeftParen);
      setState(202);
      typeName();
      setState(203);
      match(CParser::Comma);
      setState(204);
      unaryExpression();
      setState(205);
      match(CParser::RightParen);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericSelectionContext ------------------------------------------------------------------

CParser::GenericSelectionContext::GenericSelectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::GenericSelectionContext::Generic() {
  return getToken(CParser::Generic, 0);
}

tree::TerminalNode* CParser::GenericSelectionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::AssignmentExpressionContext* CParser::GenericSelectionContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CParser::GenericSelectionContext::Comma() {
  return getToken(CParser::Comma, 0);
}

CParser::GenericAssocListContext* CParser::GenericSelectionContext::genericAssocList() {
  return getRuleContext<CParser::GenericAssocListContext>(0);
}

tree::TerminalNode* CParser::GenericSelectionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::GenericSelectionContext::getRuleIndex() const {
  return CParser::RuleGenericSelection;
}

void CParser::GenericSelectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericSelection(this);
}

void CParser::GenericSelectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericSelection(this);
}

CParser::GenericSelectionContext* CParser::genericSelection() {
  GenericSelectionContext *_localctx = _tracker.createInstance<GenericSelectionContext>(_ctx, getState());
  enterRule(_localctx, 2, CParser::RuleGenericSelection);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    match(CParser::Generic);
    setState(210);
    match(CParser::LeftParen);
    setState(211);
    assignmentExpression();
    setState(212);
    match(CParser::Comma);
    setState(213);
    genericAssocList();
    setState(214);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericAssocListContext ------------------------------------------------------------------

CParser::GenericAssocListContext::GenericAssocListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::GenericAssociationContext *> CParser::GenericAssocListContext::genericAssociation() {
  return getRuleContexts<CParser::GenericAssociationContext>();
}

CParser::GenericAssociationContext* CParser::GenericAssocListContext::genericAssociation(size_t i) {
  return getRuleContext<CParser::GenericAssociationContext>(i);
}

std::vector<tree::TerminalNode *> CParser::GenericAssocListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::GenericAssocListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::GenericAssocListContext::getRuleIndex() const {
  return CParser::RuleGenericAssocList;
}

void CParser::GenericAssocListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericAssocList(this);
}

void CParser::GenericAssocListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericAssocList(this);
}

CParser::GenericAssocListContext* CParser::genericAssocList() {
  GenericAssocListContext *_localctx = _tracker.createInstance<GenericAssocListContext>(_ctx, getState());
  enterRule(_localctx, 4, CParser::RuleGenericAssocList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    genericAssociation();
    setState(221);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(217);
      match(CParser::Comma);
      setState(218);
      genericAssociation();
      setState(223);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericAssociationContext ------------------------------------------------------------------

CParser::GenericAssociationContext::GenericAssociationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::GenericAssociationContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::AssignmentExpressionContext* CParser::GenericAssociationContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

CParser::TypeNameContext* CParser::GenericAssociationContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

tree::TerminalNode* CParser::GenericAssociationContext::Default() {
  return getToken(CParser::Default, 0);
}


size_t CParser::GenericAssociationContext::getRuleIndex() const {
  return CParser::RuleGenericAssociation;
}

void CParser::GenericAssociationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericAssociation(this);
}

void CParser::GenericAssociationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericAssociation(this);
}

CParser::GenericAssociationContext* CParser::genericAssociation() {
  GenericAssociationContext *_localctx = _tracker.createInstance<GenericAssociationContext>(_ctx, getState());
  enterRule(_localctx, 6, CParser::RuleGenericAssociation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__3:
      case CParser::T__4:
      case CParser::T__5:
      case CParser::T__6:
      case CParser::Char:
      case CParser::Const:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Restrict:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Struct:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Atomic:
      case CParser::Bool:
      case CParser::Complex:
      case CParser::Identifier: {
        setState(224);
        typeName();
        break;
      }

      case CParser::Default: {
        setState(225);
        match(CParser::Default);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(228);
    match(CParser::Colon);
    setState(229);
    assignmentExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

CParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PrimaryExpressionContext* CParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<CParser::PrimaryExpressionContext>(0);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::LeftParen() {
  return getTokens(CParser::LeftParen);
}

tree::TerminalNode* CParser::PostfixExpressionContext::LeftParen(size_t i) {
  return getToken(CParser::LeftParen, i);
}

CParser::TypeNameContext* CParser::PostfixExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::RightParen() {
  return getTokens(CParser::RightParen);
}

tree::TerminalNode* CParser::PostfixExpressionContext::RightParen(size_t i) {
  return getToken(CParser::RightParen, i);
}

tree::TerminalNode* CParser::PostfixExpressionContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::InitializerListContext* CParser::PostfixExpressionContext::initializerList() {
  return getRuleContext<CParser::InitializerListContext>(0);
}

tree::TerminalNode* CParser::PostfixExpressionContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::LeftBracket() {
  return getTokens(CParser::LeftBracket);
}

tree::TerminalNode* CParser::PostfixExpressionContext::LeftBracket(size_t i) {
  return getToken(CParser::LeftBracket, i);
}

std::vector<CParser::ExpressionContext *> CParser::PostfixExpressionContext::expression() {
  return getRuleContexts<CParser::ExpressionContext>();
}

CParser::ExpressionContext* CParser::PostfixExpressionContext::expression(size_t i) {
  return getRuleContext<CParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::RightBracket() {
  return getTokens(CParser::RightBracket);
}

tree::TerminalNode* CParser::PostfixExpressionContext::RightBracket(size_t i) {
  return getToken(CParser::RightBracket, i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::Identifier() {
  return getTokens(CParser::Identifier);
}

tree::TerminalNode* CParser::PostfixExpressionContext::Identifier(size_t i) {
  return getToken(CParser::Identifier, i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::Dot() {
  return getTokens(CParser::Dot);
}

tree::TerminalNode* CParser::PostfixExpressionContext::Dot(size_t i) {
  return getToken(CParser::Dot, i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::Arrow() {
  return getTokens(CParser::Arrow);
}

tree::TerminalNode* CParser::PostfixExpressionContext::Arrow(size_t i) {
  return getToken(CParser::Arrow, i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::PlusPlus() {
  return getTokens(CParser::PlusPlus);
}

tree::TerminalNode* CParser::PostfixExpressionContext::PlusPlus(size_t i) {
  return getToken(CParser::PlusPlus, i);
}

std::vector<tree::TerminalNode *> CParser::PostfixExpressionContext::MinusMinus() {
  return getTokens(CParser::MinusMinus);
}

tree::TerminalNode* CParser::PostfixExpressionContext::MinusMinus(size_t i) {
  return getToken(CParser::MinusMinus, i);
}

tree::TerminalNode* CParser::PostfixExpressionContext::Comma() {
  return getToken(CParser::Comma, 0);
}

std::vector<CParser::ArgumentExpressionListContext *> CParser::PostfixExpressionContext::argumentExpressionList() {
  return getRuleContexts<CParser::ArgumentExpressionListContext>();
}

CParser::ArgumentExpressionListContext* CParser::PostfixExpressionContext::argumentExpressionList(size_t i) {
  return getRuleContext<CParser::ArgumentExpressionListContext>(i);
}


size_t CParser::PostfixExpressionContext::getRuleIndex() const {
  return CParser::RulePostfixExpression;
}

void CParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void CParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}

CParser::PostfixExpressionContext* CParser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, CParser::RulePostfixExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(231);
      primaryExpression();
      break;
    }

    case 2: {
      setState(233);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::T__0) {
        setState(232);
        match(CParser::T__0);
      }
      setState(235);
      match(CParser::LeftParen);
      setState(236);
      typeName();
      setState(237);
      match(CParser::RightParen);
      setState(238);
      match(CParser::LeftBrace);
      setState(239);
      initializerList();
      setState(241);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Comma) {
        setState(240);
        match(CParser::Comma);
      }
      setState(243);
      match(CParser::RightBrace);
      break;
    }

    default:
      break;
    }
    setState(261);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
      | (1ULL << (CParser::LeftBracket - 59))
      | (1ULL << (CParser::PlusPlus - 59))
      | (1ULL << (CParser::MinusMinus - 59))
      | (1ULL << (CParser::Arrow - 59))
      | (1ULL << (CParser::Dot - 59)))) != 0)) {
      setState(259);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CParser::LeftBracket: {
          setState(247);
          match(CParser::LeftBracket);
          setState(248);
          expression();
          setState(249);
          match(CParser::RightBracket);
          break;
        }

        case CParser::LeftParen: {
          setState(251);
          match(CParser::LeftParen);
          setState(253);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__1)
            | (1ULL << CParser::T__2)
            | (1ULL << CParser::Sizeof)
            | (1ULL << CParser::Alignof)
            | (1ULL << CParser::Generic)
            | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
            | (1ULL << (CParser::PlusPlus - 71))
            | (1ULL << (CParser::Minus - 71))
            | (1ULL << (CParser::MinusMinus - 71))
            | (1ULL << (CParser::Star - 71))
            | (1ULL << (CParser::And - 71))
            | (1ULL << (CParser::AndAnd - 71))
            | (1ULL << (CParser::Not - 71))
            | (1ULL << (CParser::Tilde - 71))
            | (1ULL << (CParser::Identifier - 71))
            | (1ULL << (CParser::Constant - 71))
            | (1ULL << (CParser::DigitSequence - 71))
            | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
            setState(252);
            argumentExpressionList();
          }
          setState(255);
          match(CParser::RightParen);
          break;
        }

        case CParser::Arrow:
        case CParser::Dot: {
          setState(256);
          _la = _input->LA(1);
          if (!(_la == CParser::Arrow

          || _la == CParser::Dot)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(257);
          match(CParser::Identifier);
          break;
        }

        case CParser::PlusPlus:
        case CParser::MinusMinus: {
          setState(258);
          _la = _input->LA(1);
          if (!(_la == CParser::PlusPlus

          || _la == CParser::MinusMinus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(263);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentExpressionListContext ------------------------------------------------------------------

CParser::ArgumentExpressionListContext::ArgumentExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::AssignmentExpressionContext *> CParser::ArgumentExpressionListContext::assignmentExpression() {
  return getRuleContexts<CParser::AssignmentExpressionContext>();
}

CParser::AssignmentExpressionContext* CParser::ArgumentExpressionListContext::assignmentExpression(size_t i) {
  return getRuleContext<CParser::AssignmentExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ArgumentExpressionListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::ArgumentExpressionListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::ArgumentExpressionListContext::getRuleIndex() const {
  return CParser::RuleArgumentExpressionList;
}

void CParser::ArgumentExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentExpressionList(this);
}

void CParser::ArgumentExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentExpressionList(this);
}

CParser::ArgumentExpressionListContext* CParser::argumentExpressionList() {
  ArgumentExpressionListContext *_localctx = _tracker.createInstance<ArgumentExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 10, CParser::RuleArgumentExpressionList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    assignmentExpression();
    setState(269);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(265);
      match(CParser::Comma);
      setState(266);
      assignmentExpression();
      setState(271);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

CParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PostfixExpressionContext* CParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<CParser::PostfixExpressionContext>(0);
}

CParser::UnaryOperatorContext* CParser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<CParser::UnaryOperatorContext>(0);
}

CParser::CastExpressionContext* CParser::UnaryExpressionContext::castExpression() {
  return getRuleContext<CParser::CastExpressionContext>(0);
}

tree::TerminalNode* CParser::UnaryExpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::TypeNameContext* CParser::UnaryExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

tree::TerminalNode* CParser::UnaryExpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::UnaryExpressionContext::AndAnd() {
  return getToken(CParser::AndAnd, 0);
}

tree::TerminalNode* CParser::UnaryExpressionContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

std::vector<tree::TerminalNode *> CParser::UnaryExpressionContext::Sizeof() {
  return getTokens(CParser::Sizeof);
}

tree::TerminalNode* CParser::UnaryExpressionContext::Sizeof(size_t i) {
  return getToken(CParser::Sizeof, i);
}

tree::TerminalNode* CParser::UnaryExpressionContext::Alignof() {
  return getToken(CParser::Alignof, 0);
}

std::vector<tree::TerminalNode *> CParser::UnaryExpressionContext::PlusPlus() {
  return getTokens(CParser::PlusPlus);
}

tree::TerminalNode* CParser::UnaryExpressionContext::PlusPlus(size_t i) {
  return getToken(CParser::PlusPlus, i);
}

std::vector<tree::TerminalNode *> CParser::UnaryExpressionContext::MinusMinus() {
  return getTokens(CParser::MinusMinus);
}

tree::TerminalNode* CParser::UnaryExpressionContext::MinusMinus(size_t i) {
  return getToken(CParser::MinusMinus, i);
}


size_t CParser::UnaryExpressionContext::getRuleIndex() const {
  return CParser::RuleUnaryExpression;
}

void CParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void CParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}

CParser::UnaryExpressionContext* CParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, CParser::RuleUnaryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(275);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(272);
        _la = _input->LA(1);
        if (!(((((_la - 39) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 39)) & ((1ULL << (CParser::Sizeof - 39))
          | (1ULL << (CParser::PlusPlus - 39))
          | (1ULL << (CParser::MinusMinus - 39)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(277);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(289);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__1:
      case CParser::T__2:
      case CParser::Generic:
      case CParser::LeftParen:
      case CParser::Identifier:
      case CParser::Constant:
      case CParser::StringLiteral: {
        setState(278);
        postfixExpression();
        break;
      }

      case CParser::Plus:
      case CParser::Minus:
      case CParser::Star:
      case CParser::And:
      case CParser::Not:
      case CParser::Tilde: {
        setState(279);
        unaryOperator();
        setState(280);
        castExpression();
        break;
      }

      case CParser::Sizeof:
      case CParser::Alignof: {
        setState(282);
        _la = _input->LA(1);
        if (!(_la == CParser::Sizeof

        || _la == CParser::Alignof)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(283);
        match(CParser::LeftParen);
        setState(284);
        typeName();
        setState(285);
        match(CParser::RightParen);
        break;
      }

      case CParser::AndAnd: {
        setState(287);
        match(CParser::AndAnd);
        setState(288);
        match(CParser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

CParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::UnaryOperatorContext::And() {
  return getToken(CParser::And, 0);
}

tree::TerminalNode* CParser::UnaryOperatorContext::Star() {
  return getToken(CParser::Star, 0);
}

tree::TerminalNode* CParser::UnaryOperatorContext::Plus() {
  return getToken(CParser::Plus, 0);
}

tree::TerminalNode* CParser::UnaryOperatorContext::Minus() {
  return getToken(CParser::Minus, 0);
}

tree::TerminalNode* CParser::UnaryOperatorContext::Tilde() {
  return getToken(CParser::Tilde, 0);
}

tree::TerminalNode* CParser::UnaryOperatorContext::Not() {
  return getToken(CParser::Not, 0);
}


size_t CParser::UnaryOperatorContext::getRuleIndex() const {
  return CParser::RuleUnaryOperator;
}

void CParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void CParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}

CParser::UnaryOperatorContext* CParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 14, CParser::RuleUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(291);
    _la = _input->LA(1);
    if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

CParser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::CastExpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::TypeNameContext* CParser::CastExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

tree::TerminalNode* CParser::CastExpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::CastExpressionContext* CParser::CastExpressionContext::castExpression() {
  return getRuleContext<CParser::CastExpressionContext>(0);
}

CParser::UnaryExpressionContext* CParser::CastExpressionContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CParser::CastExpressionContext::DigitSequence() {
  return getToken(CParser::DigitSequence, 0);
}


size_t CParser::CastExpressionContext::getRuleIndex() const {
  return CParser::RuleCastExpression;
}

void CParser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}

void CParser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}

CParser::CastExpressionContext* CParser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, CParser::RuleCastExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(303);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(294);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::T__0) {
        setState(293);
        match(CParser::T__0);
      }
      setState(296);
      match(CParser::LeftParen);
      setState(297);
      typeName();
      setState(298);
      match(CParser::RightParen);
      setState(299);
      castExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(301);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(302);
      match(CParser::DigitSequence);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

CParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::CastExpressionContext *> CParser::MultiplicativeExpressionContext::castExpression() {
  return getRuleContexts<CParser::CastExpressionContext>();
}

CParser::CastExpressionContext* CParser::MultiplicativeExpressionContext::castExpression(size_t i) {
  return getRuleContext<CParser::CastExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::MultiplicativeExpressionContext::Star() {
  return getTokens(CParser::Star);
}

tree::TerminalNode* CParser::MultiplicativeExpressionContext::Star(size_t i) {
  return getToken(CParser::Star, i);
}

std::vector<tree::TerminalNode *> CParser::MultiplicativeExpressionContext::Div() {
  return getTokens(CParser::Div);
}

tree::TerminalNode* CParser::MultiplicativeExpressionContext::Div(size_t i) {
  return getToken(CParser::Div, i);
}

std::vector<tree::TerminalNode *> CParser::MultiplicativeExpressionContext::Mod() {
  return getTokens(CParser::Mod);
}

tree::TerminalNode* CParser::MultiplicativeExpressionContext::Mod(size_t i) {
  return getToken(CParser::Mod, i);
}


size_t CParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return CParser::RuleMultiplicativeExpression;
}

void CParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void CParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}

CParser::MultiplicativeExpressionContext* CParser::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, CParser::RuleMultiplicativeExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    castExpression();
    setState(310);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & ((1ULL << (CParser::Star - 75))
      | (1ULL << (CParser::Div - 75))
      | (1ULL << (CParser::Mod - 75)))) != 0)) {
      setState(306);
      _la = _input->LA(1);
      if (!(((((_la - 75) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 75)) & ((1ULL << (CParser::Star - 75))
        | (1ULL << (CParser::Div - 75))
        | (1ULL << (CParser::Mod - 75)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(307);
      castExpression();
      setState(312);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

CParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::MultiplicativeExpressionContext *> CParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContexts<CParser::MultiplicativeExpressionContext>();
}

CParser::MultiplicativeExpressionContext* CParser::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
  return getRuleContext<CParser::MultiplicativeExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::AdditiveExpressionContext::Plus() {
  return getTokens(CParser::Plus);
}

tree::TerminalNode* CParser::AdditiveExpressionContext::Plus(size_t i) {
  return getToken(CParser::Plus, i);
}

std::vector<tree::TerminalNode *> CParser::AdditiveExpressionContext::Minus() {
  return getTokens(CParser::Minus);
}

tree::TerminalNode* CParser::AdditiveExpressionContext::Minus(size_t i) {
  return getToken(CParser::Minus, i);
}


size_t CParser::AdditiveExpressionContext::getRuleIndex() const {
  return CParser::RuleAdditiveExpression;
}

void CParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void CParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}

CParser::AdditiveExpressionContext* CParser::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, CParser::RuleAdditiveExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    multiplicativeExpression();
    setState(318);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Plus

    || _la == CParser::Minus) {
      setState(314);
      _la = _input->LA(1);
      if (!(_la == CParser::Plus

      || _la == CParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(315);
      multiplicativeExpression();
      setState(320);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

CParser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::AdditiveExpressionContext *> CParser::ShiftExpressionContext::additiveExpression() {
  return getRuleContexts<CParser::AdditiveExpressionContext>();
}

CParser::AdditiveExpressionContext* CParser::ShiftExpressionContext::additiveExpression(size_t i) {
  return getRuleContext<CParser::AdditiveExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ShiftExpressionContext::LeftShift() {
  return getTokens(CParser::LeftShift);
}

tree::TerminalNode* CParser::ShiftExpressionContext::LeftShift(size_t i) {
  return getToken(CParser::LeftShift, i);
}

std::vector<tree::TerminalNode *> CParser::ShiftExpressionContext::RightShift() {
  return getTokens(CParser::RightShift);
}

tree::TerminalNode* CParser::ShiftExpressionContext::RightShift(size_t i) {
  return getToken(CParser::RightShift, i);
}


size_t CParser::ShiftExpressionContext::getRuleIndex() const {
  return CParser::RuleShiftExpression;
}

void CParser::ShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpression(this);
}

void CParser::ShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpression(this);
}

CParser::ShiftExpressionContext* CParser::shiftExpression() {
  ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, getState());
  enterRule(_localctx, 22, CParser::RuleShiftExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    additiveExpression();
    setState(326);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::LeftShift

    || _la == CParser::RightShift) {
      setState(322);
      _la = _input->LA(1);
      if (!(_la == CParser::LeftShift

      || _la == CParser::RightShift)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(323);
      additiveExpression();
      setState(328);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

CParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ShiftExpressionContext *> CParser::RelationalExpressionContext::shiftExpression() {
  return getRuleContexts<CParser::ShiftExpressionContext>();
}

CParser::ShiftExpressionContext* CParser::RelationalExpressionContext::shiftExpression(size_t i) {
  return getRuleContext<CParser::ShiftExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::RelationalExpressionContext::Less() {
  return getTokens(CParser::Less);
}

tree::TerminalNode* CParser::RelationalExpressionContext::Less(size_t i) {
  return getToken(CParser::Less, i);
}

std::vector<tree::TerminalNode *> CParser::RelationalExpressionContext::Greater() {
  return getTokens(CParser::Greater);
}

tree::TerminalNode* CParser::RelationalExpressionContext::Greater(size_t i) {
  return getToken(CParser::Greater, i);
}

std::vector<tree::TerminalNode *> CParser::RelationalExpressionContext::LessEqual() {
  return getTokens(CParser::LessEqual);
}

tree::TerminalNode* CParser::RelationalExpressionContext::LessEqual(size_t i) {
  return getToken(CParser::LessEqual, i);
}

std::vector<tree::TerminalNode *> CParser::RelationalExpressionContext::GreaterEqual() {
  return getTokens(CParser::GreaterEqual);
}

tree::TerminalNode* CParser::RelationalExpressionContext::GreaterEqual(size_t i) {
  return getToken(CParser::GreaterEqual, i);
}


size_t CParser::RelationalExpressionContext::getRuleIndex() const {
  return CParser::RuleRelationalExpression;
}

void CParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void CParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}

CParser::RelationalExpressionContext* CParser::relationalExpression() {
  RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, CParser::RuleRelationalExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    shiftExpression();
    setState(334);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CParser::Less - 65))
      | (1ULL << (CParser::LessEqual - 65))
      | (1ULL << (CParser::Greater - 65))
      | (1ULL << (CParser::GreaterEqual - 65)))) != 0)) {
      setState(330);
      _la = _input->LA(1);
      if (!(((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CParser::Less - 65))
        | (1ULL << (CParser::LessEqual - 65))
        | (1ULL << (CParser::Greater - 65))
        | (1ULL << (CParser::GreaterEqual - 65)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(331);
      shiftExpression();
      setState(336);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

CParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::RelationalExpressionContext *> CParser::EqualityExpressionContext::relationalExpression() {
  return getRuleContexts<CParser::RelationalExpressionContext>();
}

CParser::RelationalExpressionContext* CParser::EqualityExpressionContext::relationalExpression(size_t i) {
  return getRuleContext<CParser::RelationalExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::EqualityExpressionContext::Equal() {
  return getTokens(CParser::Equal);
}

tree::TerminalNode* CParser::EqualityExpressionContext::Equal(size_t i) {
  return getToken(CParser::Equal, i);
}

std::vector<tree::TerminalNode *> CParser::EqualityExpressionContext::NotEqual() {
  return getTokens(CParser::NotEqual);
}

tree::TerminalNode* CParser::EqualityExpressionContext::NotEqual(size_t i) {
  return getToken(CParser::NotEqual, i);
}


size_t CParser::EqualityExpressionContext::getRuleIndex() const {
  return CParser::RuleEqualityExpression;
}

void CParser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void CParser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}

CParser::EqualityExpressionContext* CParser::equalityExpression() {
  EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, CParser::RuleEqualityExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    relationalExpression();
    setState(342);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Equal

    || _la == CParser::NotEqual) {
      setState(338);
      _la = _input->LA(1);
      if (!(_la == CParser::Equal

      || _la == CParser::NotEqual)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(339);
      relationalExpression();
      setState(344);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

CParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::EqualityExpressionContext *> CParser::AndExpressionContext::equalityExpression() {
  return getRuleContexts<CParser::EqualityExpressionContext>();
}

CParser::EqualityExpressionContext* CParser::AndExpressionContext::equalityExpression(size_t i) {
  return getRuleContext<CParser::EqualityExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::AndExpressionContext::And() {
  return getTokens(CParser::And);
}

tree::TerminalNode* CParser::AndExpressionContext::And(size_t i) {
  return getToken(CParser::And, i);
}


size_t CParser::AndExpressionContext::getRuleIndex() const {
  return CParser::RuleAndExpression;
}

void CParser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}

void CParser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}

CParser::AndExpressionContext* CParser::andExpression() {
  AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, CParser::RuleAndExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    equalityExpression();
    setState(350);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::And) {
      setState(346);
      match(CParser::And);
      setState(347);
      equalityExpression();
      setState(352);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

CParser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::AndExpressionContext *> CParser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContexts<CParser::AndExpressionContext>();
}

CParser::AndExpressionContext* CParser::ExclusiveOrExpressionContext::andExpression(size_t i) {
  return getRuleContext<CParser::AndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ExclusiveOrExpressionContext::Caret() {
  return getTokens(CParser::Caret);
}

tree::TerminalNode* CParser::ExclusiveOrExpressionContext::Caret(size_t i) {
  return getToken(CParser::Caret, i);
}


size_t CParser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return CParser::RuleExclusiveOrExpression;
}

void CParser::ExclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveOrExpression(this);
}

void CParser::ExclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveOrExpression(this);
}

CParser::ExclusiveOrExpressionContext* CParser::exclusiveOrExpression() {
  ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, CParser::RuleExclusiveOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    andExpression();
    setState(358);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Caret) {
      setState(354);
      match(CParser::Caret);
      setState(355);
      andExpression();
      setState(360);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

CParser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ExclusiveOrExpressionContext *> CParser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContexts<CParser::ExclusiveOrExpressionContext>();
}

CParser::ExclusiveOrExpressionContext* CParser::InclusiveOrExpressionContext::exclusiveOrExpression(size_t i) {
  return getRuleContext<CParser::ExclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::InclusiveOrExpressionContext::Or() {
  return getTokens(CParser::Or);
}

tree::TerminalNode* CParser::InclusiveOrExpressionContext::Or(size_t i) {
  return getToken(CParser::Or, i);
}


size_t CParser::InclusiveOrExpressionContext::getRuleIndex() const {
  return CParser::RuleInclusiveOrExpression;
}

void CParser::InclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveOrExpression(this);
}

void CParser::InclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveOrExpression(this);
}

CParser::InclusiveOrExpressionContext* CParser::inclusiveOrExpression() {
  InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, CParser::RuleInclusiveOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    exclusiveOrExpression();
    setState(366);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Or) {
      setState(362);
      match(CParser::Or);
      setState(363);
      exclusiveOrExpression();
      setState(368);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

CParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::InclusiveOrExpressionContext *> CParser::LogicalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContexts<CParser::InclusiveOrExpressionContext>();
}

CParser::InclusiveOrExpressionContext* CParser::LogicalAndExpressionContext::inclusiveOrExpression(size_t i) {
  return getRuleContext<CParser::InclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::LogicalAndExpressionContext::AndAnd() {
  return getTokens(CParser::AndAnd);
}

tree::TerminalNode* CParser::LogicalAndExpressionContext::AndAnd(size_t i) {
  return getToken(CParser::AndAnd, i);
}


size_t CParser::LogicalAndExpressionContext::getRuleIndex() const {
  return CParser::RuleLogicalAndExpression;
}

void CParser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}

void CParser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}

CParser::LogicalAndExpressionContext* CParser::logicalAndExpression() {
  LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 34, CParser::RuleLogicalAndExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    inclusiveOrExpression();
    setState(374);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::AndAnd) {
      setState(370);
      match(CParser::AndAnd);
      setState(371);
      inclusiveOrExpression();
      setState(376);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

CParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::LogicalAndExpressionContext *> CParser::LogicalOrExpressionContext::logicalAndExpression() {
  return getRuleContexts<CParser::LogicalAndExpressionContext>();
}

CParser::LogicalAndExpressionContext* CParser::LogicalOrExpressionContext::logicalAndExpression(size_t i) {
  return getRuleContext<CParser::LogicalAndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::LogicalOrExpressionContext::OrOr() {
  return getTokens(CParser::OrOr);
}

tree::TerminalNode* CParser::LogicalOrExpressionContext::OrOr(size_t i) {
  return getToken(CParser::OrOr, i);
}


size_t CParser::LogicalOrExpressionContext::getRuleIndex() const {
  return CParser::RuleLogicalOrExpression;
}

void CParser::LogicalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpression(this);
}

void CParser::LogicalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpression(this);
}

CParser::LogicalOrExpressionContext* CParser::logicalOrExpression() {
  LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 36, CParser::RuleLogicalOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    logicalAndExpression();
    setState(382);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::OrOr) {
      setState(378);
      match(CParser::OrOr);
      setState(379);
      logicalAndExpression();
      setState(384);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

CParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::LogicalOrExpressionContext* CParser::ConditionalExpressionContext::logicalOrExpression() {
  return getRuleContext<CParser::LogicalOrExpressionContext>(0);
}

tree::TerminalNode* CParser::ConditionalExpressionContext::Question() {
  return getToken(CParser::Question, 0);
}

CParser::ExpressionContext* CParser::ConditionalExpressionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::ConditionalExpressionContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::ConditionalExpressionContext* CParser::ConditionalExpressionContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}


size_t CParser::ConditionalExpressionContext::getRuleIndex() const {
  return CParser::RuleConditionalExpression;
}

void CParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void CParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}

CParser::ConditionalExpressionContext* CParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, CParser::RuleConditionalExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(385);
    logicalOrExpression();
    setState(391);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Question) {
      setState(386);
      match(CParser::Question);
      setState(387);
      expression();
      setState(388);
      match(CParser::Colon);
      setState(389);
      conditionalExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

CParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ConditionalExpressionContext* CParser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}

CParser::UnaryExpressionContext* CParser::AssignmentExpressionContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

CParser::AssignmentOperatorContext* CParser::AssignmentExpressionContext::assignmentOperator() {
  return getRuleContext<CParser::AssignmentOperatorContext>(0);
}

CParser::AssignmentExpressionContext* CParser::AssignmentExpressionContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CParser::AssignmentExpressionContext::DigitSequence() {
  return getToken(CParser::DigitSequence, 0);
}


size_t CParser::AssignmentExpressionContext::getRuleIndex() const {
  return CParser::RuleAssignmentExpression;
}

void CParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void CParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}

CParser::AssignmentExpressionContext* CParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, CParser::RuleAssignmentExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(399);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(393);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(394);
      unaryExpression();
      setState(395);
      assignmentOperator();
      setState(396);
      assignmentExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(398);
      match(CParser::DigitSequence);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

CParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AssignmentOperatorContext::Assign() {
  return getToken(CParser::Assign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::StarAssign() {
  return getToken(CParser::StarAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::DivAssign() {
  return getToken(CParser::DivAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::ModAssign() {
  return getToken(CParser::ModAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::PlusAssign() {
  return getToken(CParser::PlusAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::MinusAssign() {
  return getToken(CParser::MinusAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::LeftShiftAssign() {
  return getToken(CParser::LeftShiftAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::RightShiftAssign() {
  return getToken(CParser::RightShiftAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::AndAssign() {
  return getToken(CParser::AndAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::XorAssign() {
  return getToken(CParser::XorAssign, 0);
}

tree::TerminalNode* CParser::AssignmentOperatorContext::OrAssign() {
  return getToken(CParser::OrAssign, 0);
}


size_t CParser::AssignmentOperatorContext::getRuleIndex() const {
  return CParser::RuleAssignmentOperator;
}

void CParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void CParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}

CParser::AssignmentOperatorContext* CParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 42, CParser::RuleAssignmentOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    _la = _input->LA(1);
    if (!(((((_la - 89) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 89)) & ((1ULL << (CParser::Assign - 89))
      | (1ULL << (CParser::StarAssign - 89))
      | (1ULL << (CParser::DivAssign - 89))
      | (1ULL << (CParser::ModAssign - 89))
      | (1ULL << (CParser::PlusAssign - 89))
      | (1ULL << (CParser::MinusAssign - 89))
      | (1ULL << (CParser::LeftShiftAssign - 89))
      | (1ULL << (CParser::RightShiftAssign - 89))
      | (1ULL << (CParser::AndAssign - 89))
      | (1ULL << (CParser::XorAssign - 89))
      | (1ULL << (CParser::OrAssign - 89)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::AssignmentExpressionContext *> CParser::ExpressionContext::assignmentExpression() {
  return getRuleContexts<CParser::AssignmentExpressionContext>();
}

CParser::AssignmentExpressionContext* CParser::ExpressionContext::assignmentExpression(size_t i) {
  return getRuleContext<CParser::AssignmentExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ExpressionContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::ExpressionContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::ExpressionContext::getRuleIndex() const {
  return CParser::RuleExpression;
}

void CParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

CParser::ExpressionContext* CParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, CParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    assignmentExpression();
    setState(408);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(404);
      match(CParser::Comma);
      setState(405);
      assignmentExpression();
      setState(410);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

CParser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ConditionalExpressionContext* CParser::ConstantExpressionContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}


size_t CParser::ConstantExpressionContext::getRuleIndex() const {
  return CParser::RuleConstantExpression;
}

void CParser::ConstantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpression(this);
}

void CParser::ConstantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpression(this);
}

CParser::ConstantExpressionContext* CParser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 46, CParser::RuleConstantExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclarationSpecifiersContext* CParser::DeclarationContext::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}

tree::TerminalNode* CParser::DeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::InitDeclaratorListContext* CParser::DeclarationContext::initDeclaratorList() {
  return getRuleContext<CParser::InitDeclaratorListContext>(0);
}

CParser::StaticAssertDeclarationContext* CParser::DeclarationContext::staticAssertDeclaration() {
  return getRuleContext<CParser::StaticAssertDeclarationContext>(0);
}


size_t CParser::DeclarationContext::getRuleIndex() const {
  return CParser::RuleDeclaration;
}

void CParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void CParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

CParser::DeclarationContext* CParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 48, CParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(420);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__3:
      case CParser::T__4:
      case CParser::T__5:
      case CParser::T__6:
      case CParser::T__7:
      case CParser::T__8:
      case CParser::T__9:
      case CParser::T__11:
      case CParser::Auto:
      case CParser::Char:
      case CParser::Const:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Extern:
      case CParser::Float:
      case CParser::Inline:
      case CParser::Int:
      case CParser::Long:
      case CParser::Register:
      case CParser::Restrict:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Static:
      case CParser::Struct:
      case CParser::Typedef:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Alignas:
      case CParser::Atomic:
      case CParser::Bool:
      case CParser::Complex:
      case CParser::Noreturn:
      case CParser::ThreadLocal:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(413);
        declarationSpecifiers();
        setState(415);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 59) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
          | (1ULL << (CParser::Star - 59))
          | (1ULL << (CParser::Caret - 59))
          | (1ULL << (CParser::Identifier - 59)))) != 0)) {
          setState(414);
          initDeclaratorList();
        }
        setState(417);
        match(CParser::Semi);
        break;
      }

      case CParser::StaticAssert: {
        enterOuterAlt(_localctx, 2);
        setState(419);
        staticAssertDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifiersContext ------------------------------------------------------------------

CParser::DeclarationSpecifiersContext::DeclarationSpecifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::DeclarationSpecifierContext *> CParser::DeclarationSpecifiersContext::declarationSpecifier() {
  return getRuleContexts<CParser::DeclarationSpecifierContext>();
}

CParser::DeclarationSpecifierContext* CParser::DeclarationSpecifiersContext::declarationSpecifier(size_t i) {
  return getRuleContext<CParser::DeclarationSpecifierContext>(i);
}


size_t CParser::DeclarationSpecifiersContext::getRuleIndex() const {
  return CParser::RuleDeclarationSpecifiers;
}

void CParser::DeclarationSpecifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifiers(this);
}

void CParser::DeclarationSpecifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifiers(this);
}

CParser::DeclarationSpecifiersContext* CParser::declarationSpecifiers() {
  DeclarationSpecifiersContext *_localctx = _tracker.createInstance<DeclarationSpecifiersContext>(_ctx, getState());
  enterRule(_localctx, 50, CParser::RuleDeclarationSpecifiers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(423); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(422);
              declarationSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(425); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifiers2Context ------------------------------------------------------------------

CParser::DeclarationSpecifiers2Context::DeclarationSpecifiers2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::DeclarationSpecifierContext *> CParser::DeclarationSpecifiers2Context::declarationSpecifier() {
  return getRuleContexts<CParser::DeclarationSpecifierContext>();
}

CParser::DeclarationSpecifierContext* CParser::DeclarationSpecifiers2Context::declarationSpecifier(size_t i) {
  return getRuleContext<CParser::DeclarationSpecifierContext>(i);
}


size_t CParser::DeclarationSpecifiers2Context::getRuleIndex() const {
  return CParser::RuleDeclarationSpecifiers2;
}

void CParser::DeclarationSpecifiers2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifiers2(this);
}

void CParser::DeclarationSpecifiers2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifiers2(this);
}

CParser::DeclarationSpecifiers2Context* CParser::declarationSpecifiers2() {
  DeclarationSpecifiers2Context *_localctx = _tracker.createInstance<DeclarationSpecifiers2Context>(_ctx, getState());
  enterRule(_localctx, 52, CParser::RuleDeclarationSpecifiers2);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(427);
      declarationSpecifier();
      setState(430); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::ThreadLocal))) != 0) || _la == CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifierContext ------------------------------------------------------------------

CParser::DeclarationSpecifierContext::DeclarationSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::StorageClassSpecifierContext* CParser::DeclarationSpecifierContext::storageClassSpecifier() {
  return getRuleContext<CParser::StorageClassSpecifierContext>(0);
}

CParser::TypeSpecifierContext* CParser::DeclarationSpecifierContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

CParser::TypeQualifierContext* CParser::DeclarationSpecifierContext::typeQualifier() {
  return getRuleContext<CParser::TypeQualifierContext>(0);
}

CParser::FunctionSpecifierContext* CParser::DeclarationSpecifierContext::functionSpecifier() {
  return getRuleContext<CParser::FunctionSpecifierContext>(0);
}

CParser::AlignmentSpecifierContext* CParser::DeclarationSpecifierContext::alignmentSpecifier() {
  return getRuleContext<CParser::AlignmentSpecifierContext>(0);
}


size_t CParser::DeclarationSpecifierContext::getRuleIndex() const {
  return CParser::RuleDeclarationSpecifier;
}

void CParser::DeclarationSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifier(this);
}

void CParser::DeclarationSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifier(this);
}

CParser::DeclarationSpecifierContext* CParser::declarationSpecifier() {
  DeclarationSpecifierContext *_localctx = _tracker.createInstance<DeclarationSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 54, CParser::RuleDeclarationSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(432);
      storageClassSpecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(433);
      typeSpecifier(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(434);
      typeQualifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(435);
      functionSpecifier();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(436);
      alignmentSpecifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorListContext ------------------------------------------------------------------

CParser::InitDeclaratorListContext::InitDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::InitDeclaratorContext *> CParser::InitDeclaratorListContext::initDeclarator() {
  return getRuleContexts<CParser::InitDeclaratorContext>();
}

CParser::InitDeclaratorContext* CParser::InitDeclaratorListContext::initDeclarator(size_t i) {
  return getRuleContext<CParser::InitDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> CParser::InitDeclaratorListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::InitDeclaratorListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::InitDeclaratorListContext::getRuleIndex() const {
  return CParser::RuleInitDeclaratorList;
}

void CParser::InitDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclaratorList(this);
}

void CParser::InitDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclaratorList(this);
}

CParser::InitDeclaratorListContext* CParser::initDeclaratorList() {
  InitDeclaratorListContext *_localctx = _tracker.createInstance<InitDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 56, CParser::RuleInitDeclaratorList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    initDeclarator();
    setState(444);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(440);
      match(CParser::Comma);
      setState(441);
      initDeclarator();
      setState(446);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorContext ------------------------------------------------------------------

CParser::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::InitDeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

tree::TerminalNode* CParser::InitDeclaratorContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::InitializerContext* CParser::InitDeclaratorContext::initializer() {
  return getRuleContext<CParser::InitializerContext>(0);
}


size_t CParser::InitDeclaratorContext::getRuleIndex() const {
  return CParser::RuleInitDeclarator;
}

void CParser::InitDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclarator(this);
}

void CParser::InitDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclarator(this);
}

CParser::InitDeclaratorContext* CParser::initDeclarator() {
  InitDeclaratorContext *_localctx = _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 58, CParser::RuleInitDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(447);
    declarator();
    setState(450);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Assign) {
      setState(448);
      match(CParser::Assign);
      setState(449);
      initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageClassSpecifierContext ------------------------------------------------------------------

CParser::StorageClassSpecifierContext::StorageClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::Typedef() {
  return getToken(CParser::Typedef, 0);
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::Extern() {
  return getToken(CParser::Extern, 0);
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::Static() {
  return getToken(CParser::Static, 0);
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::ThreadLocal() {
  return getToken(CParser::ThreadLocal, 0);
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::Auto() {
  return getToken(CParser::Auto, 0);
}

tree::TerminalNode* CParser::StorageClassSpecifierContext::Register() {
  return getToken(CParser::Register, 0);
}


size_t CParser::StorageClassSpecifierContext::getRuleIndex() const {
  return CParser::RuleStorageClassSpecifier;
}

void CParser::StorageClassSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageClassSpecifier(this);
}

void CParser::StorageClassSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageClassSpecifier(this);
}

CParser::StorageClassSpecifierContext* CParser::storageClassSpecifier() {
  StorageClassSpecifierContext *_localctx = _tracker.createInstance<StorageClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 60, CParser::RuleStorageClassSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::Auto)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::ThreadLocal))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

CParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypeSpecifierContext::Void() {
  return getToken(CParser::Void, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Char() {
  return getToken(CParser::Char, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Short() {
  return getToken(CParser::Short, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Int() {
  return getToken(CParser::Int, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Long() {
  return getToken(CParser::Long, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Float() {
  return getToken(CParser::Float, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Double() {
  return getToken(CParser::Double, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Signed() {
  return getToken(CParser::Signed, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Unsigned() {
  return getToken(CParser::Unsigned, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Bool() {
  return getToken(CParser::Bool, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::Complex() {
  return getToken(CParser::Complex, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::TypeSpecifierContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::AtomicTypeSpecifierContext* CParser::TypeSpecifierContext::atomicTypeSpecifier() {
  return getRuleContext<CParser::AtomicTypeSpecifierContext>(0);
}

CParser::StructOrUnionSpecifierContext* CParser::TypeSpecifierContext::structOrUnionSpecifier() {
  return getRuleContext<CParser::StructOrUnionSpecifierContext>(0);
}

CParser::EnumSpecifierContext* CParser::TypeSpecifierContext::enumSpecifier() {
  return getRuleContext<CParser::EnumSpecifierContext>(0);
}

CParser::TypedefNameContext* CParser::TypeSpecifierContext::typedefName() {
  return getRuleContext<CParser::TypedefNameContext>(0);
}

CParser::ConstantExpressionContext* CParser::TypeSpecifierContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}

CParser::TypeSpecifierContext* CParser::TypeSpecifierContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

CParser::PointerContext* CParser::TypeSpecifierContext::pointer() {
  return getRuleContext<CParser::PointerContext>(0);
}


size_t CParser::TypeSpecifierContext::getRuleIndex() const {
  return CParser::RuleTypeSpecifier;
}

void CParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void CParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


CParser::TypeSpecifierContext* CParser::typeSpecifier() {
   return typeSpecifier(0);
}

CParser::TypeSpecifierContext* CParser::typeSpecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, parentState);
  CParser::TypeSpecifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, CParser::RuleTypeSpecifier, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(469);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__3:
      case CParser::T__4:
      case CParser::T__5:
      case CParser::Char:
      case CParser::Double:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Bool:
      case CParser::Complex: {
        setState(455);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__3)
          | (1ULL << CParser::T__4)
          | (1ULL << CParser::T__5)
          | (1ULL << CParser::Char)
          | (1ULL << CParser::Double)
          | (1ULL << CParser::Float)
          | (1ULL << CParser::Int)
          | (1ULL << CParser::Long)
          | (1ULL << CParser::Short)
          | (1ULL << CParser::Signed)
          | (1ULL << CParser::Unsigned)
          | (1ULL << CParser::Void)
          | (1ULL << CParser::Bool)
          | (1ULL << CParser::Complex))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case CParser::T__0: {
        setState(456);
        match(CParser::T__0);
        setState(457);
        match(CParser::LeftParen);
        setState(458);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__3)
          | (1ULL << CParser::T__4)
          | (1ULL << CParser::T__5))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(459);
        match(CParser::RightParen);
        break;
      }

      case CParser::Atomic: {
        setState(460);
        atomicTypeSpecifier();
        break;
      }

      case CParser::Struct:
      case CParser::Union: {
        setState(461);
        structOrUnionSpecifier();
        break;
      }

      case CParser::Enum: {
        setState(462);
        enumSpecifier();
        break;
      }

      case CParser::Identifier: {
        setState(463);
        typedefName();
        break;
      }

      case CParser::T__6: {
        setState(464);
        match(CParser::T__6);
        setState(465);
        match(CParser::LeftParen);
        setState(466);
        constantExpression();
        setState(467);
        match(CParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(475);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeSpecifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeSpecifier);
        setState(471);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(472);
        pointer(); 
      }
      setState(477);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StructOrUnionSpecifierContext ------------------------------------------------------------------

CParser::StructOrUnionSpecifierContext::StructOrUnionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::StructOrUnionContext* CParser::StructOrUnionSpecifierContext::structOrUnion() {
  return getRuleContext<CParser::StructOrUnionContext>(0);
}

tree::TerminalNode* CParser::StructOrUnionSpecifierContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::StructDeclarationListContext* CParser::StructOrUnionSpecifierContext::structDeclarationList() {
  return getRuleContext<CParser::StructDeclarationListContext>(0);
}

tree::TerminalNode* CParser::StructOrUnionSpecifierContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

tree::TerminalNode* CParser::StructOrUnionSpecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::StructOrUnionSpecifierContext::getRuleIndex() const {
  return CParser::RuleStructOrUnionSpecifier;
}

void CParser::StructOrUnionSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructOrUnionSpecifier(this);
}

void CParser::StructOrUnionSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructOrUnionSpecifier(this);
}

CParser::StructOrUnionSpecifierContext* CParser::structOrUnionSpecifier() {
  StructOrUnionSpecifierContext *_localctx = _tracker.createInstance<StructOrUnionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 64, CParser::RuleStructOrUnionSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(489);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(478);
      structOrUnion();
      setState(480);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Identifier) {
        setState(479);
        match(CParser::Identifier);
      }
      setState(482);
      match(CParser::LeftBrace);
      setState(483);
      structDeclarationList();
      setState(484);
      match(CParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(486);
      structOrUnion();
      setState(487);
      match(CParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructOrUnionContext ------------------------------------------------------------------

CParser::StructOrUnionContext::StructOrUnionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::StructOrUnionContext::Struct() {
  return getToken(CParser::Struct, 0);
}

tree::TerminalNode* CParser::StructOrUnionContext::Union() {
  return getToken(CParser::Union, 0);
}


size_t CParser::StructOrUnionContext::getRuleIndex() const {
  return CParser::RuleStructOrUnion;
}

void CParser::StructOrUnionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructOrUnion(this);
}

void CParser::StructOrUnionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructOrUnion(this);
}

CParser::StructOrUnionContext* CParser::structOrUnion() {
  StructOrUnionContext *_localctx = _tracker.createInstance<StructOrUnionContext>(_ctx, getState());
  enterRule(_localctx, 66, CParser::RuleStructOrUnion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(491);
    _la = _input->LA(1);
    if (!(_la == CParser::Struct

    || _la == CParser::Union)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationListContext ------------------------------------------------------------------

CParser::StructDeclarationListContext::StructDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::StructDeclarationContext *> CParser::StructDeclarationListContext::structDeclaration() {
  return getRuleContexts<CParser::StructDeclarationContext>();
}

CParser::StructDeclarationContext* CParser::StructDeclarationListContext::structDeclaration(size_t i) {
  return getRuleContext<CParser::StructDeclarationContext>(i);
}


size_t CParser::StructDeclarationListContext::getRuleIndex() const {
  return CParser::RuleStructDeclarationList;
}

void CParser::StructDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclarationList(this);
}

void CParser::StructDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclarationList(this);
}

CParser::StructDeclarationListContext* CParser::structDeclarationList() {
  StructDeclarationListContext *_localctx = _tracker.createInstance<StructDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 68, CParser::RuleStructDeclarationList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(493);
      structDeclaration();
      setState(496); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::StaticAssert))) != 0) || _la == CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

CParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::SpecifierQualifierListContext* CParser::StructDeclarationContext::specifierQualifierList() {
  return getRuleContext<CParser::SpecifierQualifierListContext>(0);
}

tree::TerminalNode* CParser::StructDeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::StructDeclaratorListContext* CParser::StructDeclarationContext::structDeclaratorList() {
  return getRuleContext<CParser::StructDeclaratorListContext>(0);
}

CParser::StaticAssertDeclarationContext* CParser::StructDeclarationContext::staticAssertDeclaration() {
  return getRuleContext<CParser::StaticAssertDeclarationContext>(0);
}


size_t CParser::StructDeclarationContext::getRuleIndex() const {
  return CParser::RuleStructDeclaration;
}

void CParser::StructDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaration(this);
}

void CParser::StructDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaration(this);
}

CParser::StructDeclarationContext* CParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 70, CParser::RuleStructDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(505);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__3:
      case CParser::T__4:
      case CParser::T__5:
      case CParser::T__6:
      case CParser::Char:
      case CParser::Const:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Restrict:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Struct:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Atomic:
      case CParser::Bool:
      case CParser::Complex:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(498);
        specifierQualifierList();
        setState(500);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 59) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
          | (1ULL << (CParser::Star - 59))
          | (1ULL << (CParser::Caret - 59))
          | (1ULL << (CParser::Colon - 59))
          | (1ULL << (CParser::Identifier - 59)))) != 0)) {
          setState(499);
          structDeclaratorList();
        }
        setState(502);
        match(CParser::Semi);
        break;
      }

      case CParser::StaticAssert: {
        enterOuterAlt(_localctx, 2);
        setState(504);
        staticAssertDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecifierQualifierListContext ------------------------------------------------------------------

CParser::SpecifierQualifierListContext::SpecifierQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TypeSpecifierContext* CParser::SpecifierQualifierListContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

CParser::TypeQualifierContext* CParser::SpecifierQualifierListContext::typeQualifier() {
  return getRuleContext<CParser::TypeQualifierContext>(0);
}

CParser::SpecifierQualifierListContext* CParser::SpecifierQualifierListContext::specifierQualifierList() {
  return getRuleContext<CParser::SpecifierQualifierListContext>(0);
}


size_t CParser::SpecifierQualifierListContext::getRuleIndex() const {
  return CParser::RuleSpecifierQualifierList;
}

void CParser::SpecifierQualifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpecifierQualifierList(this);
}

void CParser::SpecifierQualifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpecifierQualifierList(this);
}

CParser::SpecifierQualifierListContext* CParser::specifierQualifierList() {
  SpecifierQualifierListContext *_localctx = _tracker.createInstance<SpecifierQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 72, CParser::RuleSpecifierQualifierList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(507);
      typeSpecifier(0);
      break;
    }

    case 2: {
      setState(508);
      typeQualifier();
      break;
    }

    default:
      break;
    }
    setState(512);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(511);
      specifierQualifierList();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclaratorListContext ------------------------------------------------------------------

CParser::StructDeclaratorListContext::StructDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::StructDeclaratorContext *> CParser::StructDeclaratorListContext::structDeclarator() {
  return getRuleContexts<CParser::StructDeclaratorContext>();
}

CParser::StructDeclaratorContext* CParser::StructDeclaratorListContext::structDeclarator(size_t i) {
  return getRuleContext<CParser::StructDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> CParser::StructDeclaratorListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::StructDeclaratorListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::StructDeclaratorListContext::getRuleIndex() const {
  return CParser::RuleStructDeclaratorList;
}

void CParser::StructDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaratorList(this);
}

void CParser::StructDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaratorList(this);
}

CParser::StructDeclaratorListContext* CParser::structDeclaratorList() {
  StructDeclaratorListContext *_localctx = _tracker.createInstance<StructDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 74, CParser::RuleStructDeclaratorList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    structDeclarator();
    setState(519);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(515);
      match(CParser::Comma);
      setState(516);
      structDeclarator();
      setState(521);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclaratorContext ------------------------------------------------------------------

CParser::StructDeclaratorContext::StructDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::StructDeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

tree::TerminalNode* CParser::StructDeclaratorContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::ConstantExpressionContext* CParser::StructDeclaratorContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}


size_t CParser::StructDeclaratorContext::getRuleIndex() const {
  return CParser::RuleStructDeclarator;
}

void CParser::StructDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclarator(this);
}

void CParser::StructDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclarator(this);
}

CParser::StructDeclaratorContext* CParser::structDeclarator() {
  StructDeclaratorContext *_localctx = _tracker.createInstance<StructDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 76, CParser::RuleStructDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(528);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(522);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(524);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 59) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
        | (1ULL << (CParser::Star - 59))
        | (1ULL << (CParser::Caret - 59))
        | (1ULL << (CParser::Identifier - 59)))) != 0)) {
        setState(523);
        declarator();
      }
      setState(526);
      match(CParser::Colon);
      setState(527);
      constantExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumSpecifierContext ------------------------------------------------------------------

CParser::EnumSpecifierContext::EnumSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::EnumSpecifierContext::Enum() {
  return getToken(CParser::Enum, 0);
}

tree::TerminalNode* CParser::EnumSpecifierContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::EnumeratorListContext* CParser::EnumSpecifierContext::enumeratorList() {
  return getRuleContext<CParser::EnumeratorListContext>(0);
}

tree::TerminalNode* CParser::EnumSpecifierContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

tree::TerminalNode* CParser::EnumSpecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::EnumSpecifierContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::EnumSpecifierContext::getRuleIndex() const {
  return CParser::RuleEnumSpecifier;
}

void CParser::EnumSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumSpecifier(this);
}

void CParser::EnumSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumSpecifier(this);
}

CParser::EnumSpecifierContext* CParser::enumSpecifier() {
  EnumSpecifierContext *_localctx = _tracker.createInstance<EnumSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 78, CParser::RuleEnumSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(543);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(530);
      match(CParser::Enum);
      setState(532);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Identifier) {
        setState(531);
        match(CParser::Identifier);
      }
      setState(534);
      match(CParser::LeftBrace);
      setState(535);
      enumeratorList();
      setState(537);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Comma) {
        setState(536);
        match(CParser::Comma);
      }
      setState(539);
      match(CParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(541);
      match(CParser::Enum);
      setState(542);
      match(CParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorListContext ------------------------------------------------------------------

CParser::EnumeratorListContext::EnumeratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::EnumeratorContext *> CParser::EnumeratorListContext::enumerator() {
  return getRuleContexts<CParser::EnumeratorContext>();
}

CParser::EnumeratorContext* CParser::EnumeratorListContext::enumerator(size_t i) {
  return getRuleContext<CParser::EnumeratorContext>(i);
}

std::vector<tree::TerminalNode *> CParser::EnumeratorListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::EnumeratorListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::EnumeratorListContext::getRuleIndex() const {
  return CParser::RuleEnumeratorList;
}

void CParser::EnumeratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorList(this);
}

void CParser::EnumeratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorList(this);
}

CParser::EnumeratorListContext* CParser::enumeratorList() {
  EnumeratorListContext *_localctx = _tracker.createInstance<EnumeratorListContext>(_ctx, getState());
  enterRule(_localctx, 80, CParser::RuleEnumeratorList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(545);
    enumerator();
    setState(550);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(546);
        match(CParser::Comma);
        setState(547);
        enumerator(); 
      }
      setState(552);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

CParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::EnumerationConstantContext* CParser::EnumeratorContext::enumerationConstant() {
  return getRuleContext<CParser::EnumerationConstantContext>(0);
}

tree::TerminalNode* CParser::EnumeratorContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::ConstantExpressionContext* CParser::EnumeratorContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}


size_t CParser::EnumeratorContext::getRuleIndex() const {
  return CParser::RuleEnumerator;
}

void CParser::EnumeratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerator(this);
}

void CParser::EnumeratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerator(this);
}

CParser::EnumeratorContext* CParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 82, CParser::RuleEnumerator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    enumerationConstant();
    setState(556);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Assign) {
      setState(554);
      match(CParser::Assign);
      setState(555);
      constantExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumerationConstantContext ------------------------------------------------------------------

CParser::EnumerationConstantContext::EnumerationConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::EnumerationConstantContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::EnumerationConstantContext::getRuleIndex() const {
  return CParser::RuleEnumerationConstant;
}

void CParser::EnumerationConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerationConstant(this);
}

void CParser::EnumerationConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerationConstant(this);
}

CParser::EnumerationConstantContext* CParser::enumerationConstant() {
  EnumerationConstantContext *_localctx = _tracker.createInstance<EnumerationConstantContext>(_ctx, getState());
  enterRule(_localctx, 84, CParser::RuleEnumerationConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomicTypeSpecifierContext ------------------------------------------------------------------

CParser::AtomicTypeSpecifierContext::AtomicTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AtomicTypeSpecifierContext::Atomic() {
  return getToken(CParser::Atomic, 0);
}

tree::TerminalNode* CParser::AtomicTypeSpecifierContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::TypeNameContext* CParser::AtomicTypeSpecifierContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

tree::TerminalNode* CParser::AtomicTypeSpecifierContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::AtomicTypeSpecifierContext::getRuleIndex() const {
  return CParser::RuleAtomicTypeSpecifier;
}

void CParser::AtomicTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomicTypeSpecifier(this);
}

void CParser::AtomicTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomicTypeSpecifier(this);
}

CParser::AtomicTypeSpecifierContext* CParser::atomicTypeSpecifier() {
  AtomicTypeSpecifierContext *_localctx = _tracker.createInstance<AtomicTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 86, CParser::RuleAtomicTypeSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(560);
    match(CParser::Atomic);
    setState(561);
    match(CParser::LeftParen);
    setState(562);
    typeName();
    setState(563);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQualifierContext ------------------------------------------------------------------

CParser::TypeQualifierContext::TypeQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypeQualifierContext::Const() {
  return getToken(CParser::Const, 0);
}

tree::TerminalNode* CParser::TypeQualifierContext::Restrict() {
  return getToken(CParser::Restrict, 0);
}

tree::TerminalNode* CParser::TypeQualifierContext::Volatile() {
  return getToken(CParser::Volatile, 0);
}

tree::TerminalNode* CParser::TypeQualifierContext::Atomic() {
  return getToken(CParser::Atomic, 0);
}


size_t CParser::TypeQualifierContext::getRuleIndex() const {
  return CParser::RuleTypeQualifier;
}

void CParser::TypeQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQualifier(this);
}

void CParser::TypeQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQualifier(this);
}

CParser::TypeQualifierContext* CParser::typeQualifier() {
  TypeQualifierContext *_localctx = _tracker.createInstance<TypeQualifierContext>(_ctx, getState());
  enterRule(_localctx, 88, CParser::RuleTypeQualifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::Const)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Atomic))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionSpecifierContext ------------------------------------------------------------------

CParser::FunctionSpecifierContext::FunctionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::FunctionSpecifierContext::Inline() {
  return getToken(CParser::Inline, 0);
}

tree::TerminalNode* CParser::FunctionSpecifierContext::Noreturn() {
  return getToken(CParser::Noreturn, 0);
}

CParser::GccAttributeSpecifierContext* CParser::FunctionSpecifierContext::gccAttributeSpecifier() {
  return getRuleContext<CParser::GccAttributeSpecifierContext>(0);
}

tree::TerminalNode* CParser::FunctionSpecifierContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::FunctionSpecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::FunctionSpecifierContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::FunctionSpecifierContext::getRuleIndex() const {
  return CParser::RuleFunctionSpecifier;
}

void CParser::FunctionSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSpecifier(this);
}

void CParser::FunctionSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSpecifier(this);
}

CParser::FunctionSpecifierContext* CParser::functionSpecifier() {
  FunctionSpecifierContext *_localctx = _tracker.createInstance<FunctionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 90, CParser::RuleFunctionSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(573);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__7:
      case CParser::T__8:
      case CParser::Inline:
      case CParser::Noreturn: {
        enterOuterAlt(_localctx, 1);
        setState(567);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__7)
          | (1ULL << CParser::T__8)
          | (1ULL << CParser::Inline)
          | (1ULL << CParser::Noreturn))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case CParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(568);
        gccAttributeSpecifier();
        break;
      }

      case CParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(569);
        match(CParser::T__9);
        setState(570);
        match(CParser::LeftParen);
        setState(571);
        match(CParser::Identifier);
        setState(572);
        match(CParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlignmentSpecifierContext ------------------------------------------------------------------

CParser::AlignmentSpecifierContext::AlignmentSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AlignmentSpecifierContext::Alignas() {
  return getToken(CParser::Alignas, 0);
}

tree::TerminalNode* CParser::AlignmentSpecifierContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::AlignmentSpecifierContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::TypeNameContext* CParser::AlignmentSpecifierContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

CParser::ConstantExpressionContext* CParser::AlignmentSpecifierContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}


size_t CParser::AlignmentSpecifierContext::getRuleIndex() const {
  return CParser::RuleAlignmentSpecifier;
}

void CParser::AlignmentSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlignmentSpecifier(this);
}

void CParser::AlignmentSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlignmentSpecifier(this);
}

CParser::AlignmentSpecifierContext* CParser::alignmentSpecifier() {
  AlignmentSpecifierContext *_localctx = _tracker.createInstance<AlignmentSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 92, CParser::RuleAlignmentSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(575);
    match(CParser::Alignas);
    setState(576);
    match(CParser::LeftParen);
    setState(579);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(577);
      typeName();
      break;
    }

    case 2: {
      setState(578);
      constantExpression();
      break;
    }

    default:
      break;
    }
    setState(581);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

CParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DirectDeclaratorContext* CParser::DeclaratorContext::directDeclarator() {
  return getRuleContext<CParser::DirectDeclaratorContext>(0);
}

CParser::PointerContext* CParser::DeclaratorContext::pointer() {
  return getRuleContext<CParser::PointerContext>(0);
}

std::vector<CParser::GccDeclaratorExtensionContext *> CParser::DeclaratorContext::gccDeclaratorExtension() {
  return getRuleContexts<CParser::GccDeclaratorExtensionContext>();
}

CParser::GccDeclaratorExtensionContext* CParser::DeclaratorContext::gccDeclaratorExtension(size_t i) {
  return getRuleContext<CParser::GccDeclaratorExtensionContext>(i);
}


size_t CParser::DeclaratorContext::getRuleIndex() const {
  return CParser::RuleDeclarator;
}

void CParser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void CParser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}

CParser::DeclaratorContext* CParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 94, CParser::RuleDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(584);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Star

    || _la == CParser::Caret) {
      setState(583);
      pointer();
    }
    setState(586);
    directDeclarator(0);
    setState(590);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(587);
        gccDeclaratorExtension(); 
      }
      setState(592);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectDeclaratorContext ------------------------------------------------------------------

CParser::DirectDeclaratorContext::DirectDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::DirectDeclaratorContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::DeclaratorContext* CParser::DirectDeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::Colon() {
  return getToken(CParser::Colon, 0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::DigitSequence() {
  return getToken(CParser::DigitSequence, 0);
}

CParser::PointerContext* CParser::DirectDeclaratorContext::pointer() {
  return getRuleContext<CParser::PointerContext>(0);
}

CParser::DirectDeclaratorContext* CParser::DirectDeclaratorContext::directDeclarator() {
  return getRuleContext<CParser::DirectDeclaratorContext>(0);
}

CParser::TypeSpecifierContext* CParser::DirectDeclaratorContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

CParser::TypeQualifierListContext* CParser::DirectDeclaratorContext::typeQualifierList() {
  return getRuleContext<CParser::TypeQualifierListContext>(0);
}

CParser::AssignmentExpressionContext* CParser::DirectDeclaratorContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::Static() {
  return getToken(CParser::Static, 0);
}

tree::TerminalNode* CParser::DirectDeclaratorContext::Star() {
  return getToken(CParser::Star, 0);
}

CParser::ParameterTypeListContext* CParser::DirectDeclaratorContext::parameterTypeList() {
  return getRuleContext<CParser::ParameterTypeListContext>(0);
}

CParser::IdentifierListContext* CParser::DirectDeclaratorContext::identifierList() {
  return getRuleContext<CParser::IdentifierListContext>(0);
}


size_t CParser::DirectDeclaratorContext::getRuleIndex() const {
  return CParser::RuleDirectDeclarator;
}

void CParser::DirectDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectDeclarator(this);
}

void CParser::DirectDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectDeclarator(this);
}


CParser::DirectDeclaratorContext* CParser::directDeclarator() {
   return directDeclarator(0);
}

CParser::DirectDeclaratorContext* CParser::directDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::DirectDeclaratorContext *_localctx = _tracker.createInstance<DirectDeclaratorContext>(_ctx, parentState);
  CParser::DirectDeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 96;
  enterRecursionRule(_localctx, 96, CParser::RuleDirectDeclarator, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(610);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      setState(594);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      setState(595);
      match(CParser::LeftParen);
      setState(596);
      declarator();
      setState(597);
      match(CParser::RightParen);
      break;
    }

    case 3: {
      setState(599);
      match(CParser::Identifier);
      setState(600);
      match(CParser::Colon);
      setState(601);
      match(CParser::DigitSequence);
      break;
    }

    case 4: {
      setState(602);
      match(CParser::LeftParen);
      setState(604);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__3)
        | (1ULL << CParser::T__4)
        | (1ULL << CParser::T__5)
        | (1ULL << CParser::T__6)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Enum)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Struct)
        | (1ULL << CParser::Union)
        | (1ULL << CParser::Unsigned)
        | (1ULL << CParser::Void)
        | (1ULL << CParser::Atomic)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Complex))) != 0) || _la == CParser::Identifier) {
        setState(603);
        typeSpecifier(0);
      }
      setState(606);
      pointer();
      setState(607);
      directDeclarator(0);
      setState(608);
      match(CParser::RightParen);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(657);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(655);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(612);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(613);
          match(CParser::LeftBracket);
          setState(615);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::Const)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Atomic))) != 0)) {
            setState(614);
            typeQualifierList();
          }
          setState(618);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__1)
            | (1ULL << CParser::T__2)
            | (1ULL << CParser::Sizeof)
            | (1ULL << CParser::Alignof)
            | (1ULL << CParser::Generic)
            | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
            | (1ULL << (CParser::PlusPlus - 71))
            | (1ULL << (CParser::Minus - 71))
            | (1ULL << (CParser::MinusMinus - 71))
            | (1ULL << (CParser::Star - 71))
            | (1ULL << (CParser::And - 71))
            | (1ULL << (CParser::AndAnd - 71))
            | (1ULL << (CParser::Not - 71))
            | (1ULL << (CParser::Tilde - 71))
            | (1ULL << (CParser::Identifier - 71))
            | (1ULL << (CParser::Constant - 71))
            | (1ULL << (CParser::DigitSequence - 71))
            | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
            setState(617);
            assignmentExpression();
          }
          setState(620);
          match(CParser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(621);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(622);
          match(CParser::LeftBracket);
          setState(623);
          match(CParser::Static);
          setState(625);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::Const)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Atomic))) != 0)) {
            setState(624);
            typeQualifierList();
          }
          setState(627);
          assignmentExpression();
          setState(628);
          match(CParser::RightBracket);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(630);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(631);
          match(CParser::LeftBracket);
          setState(632);
          typeQualifierList();
          setState(633);
          match(CParser::Static);
          setState(634);
          assignmentExpression();
          setState(635);
          match(CParser::RightBracket);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(637);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(638);
          match(CParser::LeftBracket);
          setState(640);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::Const)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Atomic))) != 0)) {
            setState(639);
            typeQualifierList();
          }
          setState(642);
          match(CParser::Star);
          setState(643);
          match(CParser::RightBracket);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(644);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(645);
          match(CParser::LeftParen);
          setState(646);
          parameterTypeList();
          setState(647);
          match(CParser::RightParen);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(649);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(650);
          match(CParser::LeftParen);
          setState(652);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CParser::Identifier) {
            setState(651);
            identifierList();
          }
          setState(654);
          match(CParser::RightParen);
          break;
        }

        default:
          break;
        } 
      }
      setState(659);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- GccDeclaratorExtensionContext ------------------------------------------------------------------

CParser::GccDeclaratorExtensionContext::GccDeclaratorExtensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::GccDeclaratorExtensionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::GccDeclaratorExtensionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

std::vector<tree::TerminalNode *> CParser::GccDeclaratorExtensionContext::StringLiteral() {
  return getTokens(CParser::StringLiteral);
}

tree::TerminalNode* CParser::GccDeclaratorExtensionContext::StringLiteral(size_t i) {
  return getToken(CParser::StringLiteral, i);
}

CParser::GccAttributeSpecifierContext* CParser::GccDeclaratorExtensionContext::gccAttributeSpecifier() {
  return getRuleContext<CParser::GccAttributeSpecifierContext>(0);
}


size_t CParser::GccDeclaratorExtensionContext::getRuleIndex() const {
  return CParser::RuleGccDeclaratorExtension;
}

void CParser::GccDeclaratorExtensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccDeclaratorExtension(this);
}

void CParser::GccDeclaratorExtensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccDeclaratorExtension(this);
}

CParser::GccDeclaratorExtensionContext* CParser::gccDeclaratorExtension() {
  GccDeclaratorExtensionContext *_localctx = _tracker.createInstance<GccDeclaratorExtensionContext>(_ctx, getState());
  enterRule(_localctx, 98, CParser::RuleGccDeclaratorExtension);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(669);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__10: {
        enterOuterAlt(_localctx, 1);
        setState(660);
        match(CParser::T__10);
        setState(661);
        match(CParser::LeftParen);
        setState(663); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(662);
          match(CParser::StringLiteral);
          setState(665); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == CParser::StringLiteral);
        setState(667);
        match(CParser::RightParen);
        break;
      }

      case CParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(668);
        gccAttributeSpecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GccAttributeSpecifierContext ------------------------------------------------------------------

CParser::GccAttributeSpecifierContext::GccAttributeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::GccAttributeSpecifierContext::LeftParen() {
  return getTokens(CParser::LeftParen);
}

tree::TerminalNode* CParser::GccAttributeSpecifierContext::LeftParen(size_t i) {
  return getToken(CParser::LeftParen, i);
}

CParser::GccAttributeListContext* CParser::GccAttributeSpecifierContext::gccAttributeList() {
  return getRuleContext<CParser::GccAttributeListContext>(0);
}

std::vector<tree::TerminalNode *> CParser::GccAttributeSpecifierContext::RightParen() {
  return getTokens(CParser::RightParen);
}

tree::TerminalNode* CParser::GccAttributeSpecifierContext::RightParen(size_t i) {
  return getToken(CParser::RightParen, i);
}


size_t CParser::GccAttributeSpecifierContext::getRuleIndex() const {
  return CParser::RuleGccAttributeSpecifier;
}

void CParser::GccAttributeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccAttributeSpecifier(this);
}

void CParser::GccAttributeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccAttributeSpecifier(this);
}

CParser::GccAttributeSpecifierContext* CParser::gccAttributeSpecifier() {
  GccAttributeSpecifierContext *_localctx = _tracker.createInstance<GccAttributeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 100, CParser::RuleGccAttributeSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(671);
    match(CParser::T__11);
    setState(672);
    match(CParser::LeftParen);
    setState(673);
    match(CParser::LeftParen);
    setState(674);
    gccAttributeList();
    setState(675);
    match(CParser::RightParen);
    setState(676);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GccAttributeListContext ------------------------------------------------------------------

CParser::GccAttributeListContext::GccAttributeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::GccAttributeContext *> CParser::GccAttributeListContext::gccAttribute() {
  return getRuleContexts<CParser::GccAttributeContext>();
}

CParser::GccAttributeContext* CParser::GccAttributeListContext::gccAttribute(size_t i) {
  return getRuleContext<CParser::GccAttributeContext>(i);
}

std::vector<tree::TerminalNode *> CParser::GccAttributeListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::GccAttributeListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::GccAttributeListContext::getRuleIndex() const {
  return CParser::RuleGccAttributeList;
}

void CParser::GccAttributeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccAttributeList(this);
}

void CParser::GccAttributeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccAttributeList(this);
}

CParser::GccAttributeListContext* CParser::gccAttributeList() {
  GccAttributeListContext *_localctx = _tracker.createInstance<GccAttributeListContext>(_ctx, getState());
  enterRule(_localctx, 102, CParser::RuleGccAttributeList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(679);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__12)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Else)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftBracket)
      | (1ULL << CParser::RightBracket)
      | (1ULL << CParser::LeftBrace))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::RightBrace - 64))
      | (1ULL << (CParser::Less - 64))
      | (1ULL << (CParser::LessEqual - 64))
      | (1ULL << (CParser::Greater - 64))
      | (1ULL << (CParser::GreaterEqual - 64))
      | (1ULL << (CParser::LeftShift - 64))
      | (1ULL << (CParser::RightShift - 64))
      | (1ULL << (CParser::Plus - 64))
      | (1ULL << (CParser::PlusPlus - 64))
      | (1ULL << (CParser::Minus - 64))
      | (1ULL << (CParser::MinusMinus - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::Div - 64))
      | (1ULL << (CParser::Mod - 64))
      | (1ULL << (CParser::And - 64))
      | (1ULL << (CParser::Or - 64))
      | (1ULL << (CParser::AndAnd - 64))
      | (1ULL << (CParser::OrOr - 64))
      | (1ULL << (CParser::Caret - 64))
      | (1ULL << (CParser::Not - 64))
      | (1ULL << (CParser::Tilde - 64))
      | (1ULL << (CParser::Question - 64))
      | (1ULL << (CParser::Colon - 64))
      | (1ULL << (CParser::Semi - 64))
      | (1ULL << (CParser::Assign - 64))
      | (1ULL << (CParser::StarAssign - 64))
      | (1ULL << (CParser::DivAssign - 64))
      | (1ULL << (CParser::ModAssign - 64))
      | (1ULL << (CParser::PlusAssign - 64))
      | (1ULL << (CParser::MinusAssign - 64))
      | (1ULL << (CParser::LeftShiftAssign - 64))
      | (1ULL << (CParser::RightShiftAssign - 64))
      | (1ULL << (CParser::AndAssign - 64))
      | (1ULL << (CParser::XorAssign - 64))
      | (1ULL << (CParser::OrAssign - 64))
      | (1ULL << (CParser::Equal - 64))
      | (1ULL << (CParser::NotEqual - 64))
      | (1ULL << (CParser::Arrow - 64))
      | (1ULL << (CParser::Dot - 64))
      | (1ULL << (CParser::Ellipsis - 64))
      | (1ULL << (CParser::Identifier - 64))
      | (1ULL << (CParser::Constant - 64))
      | (1ULL << (CParser::DigitSequence - 64))
      | (1ULL << (CParser::StringLiteral - 64))
      | (1ULL << (CParser::ComplexDefine - 64))
      | (1ULL << (CParser::IncludeDirective - 64))
      | (1ULL << (CParser::AsmBlock - 64))
      | (1ULL << (CParser::LineAfterPreprocessing - 64))
      | (1ULL << (CParser::LineDirective - 64))
      | (1ULL << (CParser::PragmaDirective - 64))
      | (1ULL << (CParser::Whitespace - 64))
      | (1ULL << (CParser::Newline - 64))
      | (1ULL << (CParser::BlockComment - 64))
      | (1ULL << (CParser::LineComment - 64)))) != 0)) {
      setState(678);
      gccAttribute();
    }
    setState(687);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(681);
      match(CParser::Comma);
      setState(683);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::T__3)
        | (1ULL << CParser::T__4)
        | (1ULL << CParser::T__5)
        | (1ULL << CParser::T__6)
        | (1ULL << CParser::T__7)
        | (1ULL << CParser::T__8)
        | (1ULL << CParser::T__9)
        | (1ULL << CParser::T__10)
        | (1ULL << CParser::T__11)
        | (1ULL << CParser::T__12)
        | (1ULL << CParser::T__13)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Break)
        | (1ULL << CParser::Case)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Const)
        | (1ULL << CParser::Continue)
        | (1ULL << CParser::Default)
        | (1ULL << CParser::Do)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Else)
        | (1ULL << CParser::Enum)
        | (1ULL << CParser::Extern)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::For)
        | (1ULL << CParser::Goto)
        | (1ULL << CParser::If)
        | (1ULL << CParser::Inline)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::Register)
        | (1ULL << CParser::Restrict)
        | (1ULL << CParser::Return)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Static)
        | (1ULL << CParser::Struct)
        | (1ULL << CParser::Switch)
        | (1ULL << CParser::Typedef)
        | (1ULL << CParser::Union)
        | (1ULL << CParser::Unsigned)
        | (1ULL << CParser::Void)
        | (1ULL << CParser::Volatile)
        | (1ULL << CParser::While)
        | (1ULL << CParser::Alignas)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Atomic)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Complex)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::Imaginary)
        | (1ULL << CParser::Noreturn)
        | (1ULL << CParser::StaticAssert)
        | (1ULL << CParser::ThreadLocal)
        | (1ULL << CParser::LeftBracket)
        | (1ULL << CParser::RightBracket)
        | (1ULL << CParser::LeftBrace))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::RightBrace - 64))
        | (1ULL << (CParser::Less - 64))
        | (1ULL << (CParser::LessEqual - 64))
        | (1ULL << (CParser::Greater - 64))
        | (1ULL << (CParser::GreaterEqual - 64))
        | (1ULL << (CParser::LeftShift - 64))
        | (1ULL << (CParser::RightShift - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::MinusMinus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::Div - 64))
        | (1ULL << (CParser::Mod - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::AndAnd - 64))
        | (1ULL << (CParser::OrOr - 64))
        | (1ULL << (CParser::Caret - 64))
        | (1ULL << (CParser::Not - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::Question - 64))
        | (1ULL << (CParser::Colon - 64))
        | (1ULL << (CParser::Semi - 64))
        | (1ULL << (CParser::Assign - 64))
        | (1ULL << (CParser::StarAssign - 64))
        | (1ULL << (CParser::DivAssign - 64))
        | (1ULL << (CParser::ModAssign - 64))
        | (1ULL << (CParser::PlusAssign - 64))
        | (1ULL << (CParser::MinusAssign - 64))
        | (1ULL << (CParser::LeftShiftAssign - 64))
        | (1ULL << (CParser::RightShiftAssign - 64))
        | (1ULL << (CParser::AndAssign - 64))
        | (1ULL << (CParser::XorAssign - 64))
        | (1ULL << (CParser::OrAssign - 64))
        | (1ULL << (CParser::Equal - 64))
        | (1ULL << (CParser::NotEqual - 64))
        | (1ULL << (CParser::Arrow - 64))
        | (1ULL << (CParser::Dot - 64))
        | (1ULL << (CParser::Ellipsis - 64))
        | (1ULL << (CParser::Identifier - 64))
        | (1ULL << (CParser::Constant - 64))
        | (1ULL << (CParser::DigitSequence - 64))
        | (1ULL << (CParser::StringLiteral - 64))
        | (1ULL << (CParser::ComplexDefine - 64))
        | (1ULL << (CParser::IncludeDirective - 64))
        | (1ULL << (CParser::AsmBlock - 64))
        | (1ULL << (CParser::LineAfterPreprocessing - 64))
        | (1ULL << (CParser::LineDirective - 64))
        | (1ULL << (CParser::PragmaDirective - 64))
        | (1ULL << (CParser::Whitespace - 64))
        | (1ULL << (CParser::Newline - 64))
        | (1ULL << (CParser::BlockComment - 64))
        | (1ULL << (CParser::LineComment - 64)))) != 0)) {
        setState(682);
        gccAttribute();
      }
      setState(689);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GccAttributeContext ------------------------------------------------------------------

CParser::GccAttributeContext::GccAttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::GccAttributeContext::Comma() {
  return getToken(CParser::Comma, 0);
}

std::vector<tree::TerminalNode *> CParser::GccAttributeContext::LeftParen() {
  return getTokens(CParser::LeftParen);
}

tree::TerminalNode* CParser::GccAttributeContext::LeftParen(size_t i) {
  return getToken(CParser::LeftParen, i);
}

std::vector<tree::TerminalNode *> CParser::GccAttributeContext::RightParen() {
  return getTokens(CParser::RightParen);
}

tree::TerminalNode* CParser::GccAttributeContext::RightParen(size_t i) {
  return getToken(CParser::RightParen, i);
}

CParser::ArgumentExpressionListContext* CParser::GccAttributeContext::argumentExpressionList() {
  return getRuleContext<CParser::ArgumentExpressionListContext>(0);
}


size_t CParser::GccAttributeContext::getRuleIndex() const {
  return CParser::RuleGccAttribute;
}

void CParser::GccAttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccAttribute(this);
}

void CParser::GccAttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccAttribute(this);
}

CParser::GccAttributeContext* CParser::gccAttribute() {
  GccAttributeContext *_localctx = _tracker.createInstance<GccAttributeContext>(_ctx, getState());
  enterRule(_localctx, 104, CParser::RuleGccAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(690);
    _la = _input->LA(1);
    if (_la == 0 || _la == Token::EOF || (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
      | (1ULL << (CParser::RightParen - 59))
      | (1ULL << (CParser::Comma - 59)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(696);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::LeftParen) {
      setState(691);
      match(CParser::LeftParen);
      setState(693);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
        | (1ULL << (CParser::PlusPlus - 71))
        | (1ULL << (CParser::Minus - 71))
        | (1ULL << (CParser::MinusMinus - 71))
        | (1ULL << (CParser::Star - 71))
        | (1ULL << (CParser::And - 71))
        | (1ULL << (CParser::AndAnd - 71))
        | (1ULL << (CParser::Not - 71))
        | (1ULL << (CParser::Tilde - 71))
        | (1ULL << (CParser::Identifier - 71))
        | (1ULL << (CParser::Constant - 71))
        | (1ULL << (CParser::DigitSequence - 71))
        | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
        setState(692);
        argumentExpressionList();
      }
      setState(695);
      match(CParser::RightParen);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedParenthesesBlockContext ------------------------------------------------------------------

CParser::NestedParenthesesBlockContext::NestedParenthesesBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::NestedParenthesesBlockContext::LeftParen() {
  return getTokens(CParser::LeftParen);
}

tree::TerminalNode* CParser::NestedParenthesesBlockContext::LeftParen(size_t i) {
  return getToken(CParser::LeftParen, i);
}

std::vector<CParser::NestedParenthesesBlockContext *> CParser::NestedParenthesesBlockContext::nestedParenthesesBlock() {
  return getRuleContexts<CParser::NestedParenthesesBlockContext>();
}

CParser::NestedParenthesesBlockContext* CParser::NestedParenthesesBlockContext::nestedParenthesesBlock(size_t i) {
  return getRuleContext<CParser::NestedParenthesesBlockContext>(i);
}

std::vector<tree::TerminalNode *> CParser::NestedParenthesesBlockContext::RightParen() {
  return getTokens(CParser::RightParen);
}

tree::TerminalNode* CParser::NestedParenthesesBlockContext::RightParen(size_t i) {
  return getToken(CParser::RightParen, i);
}


size_t CParser::NestedParenthesesBlockContext::getRuleIndex() const {
  return CParser::RuleNestedParenthesesBlock;
}

void CParser::NestedParenthesesBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedParenthesesBlock(this);
}

void CParser::NestedParenthesesBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedParenthesesBlock(this);
}

CParser::NestedParenthesesBlockContext* CParser::nestedParenthesesBlock() {
  NestedParenthesesBlockContext *_localctx = _tracker.createInstance<NestedParenthesesBlockContext>(_ctx, getState());
  enterRule(_localctx, 106, CParser::RuleNestedParenthesesBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(705);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__12)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Else)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftParen)
      | (1ULL << CParser::LeftBracket)
      | (1ULL << CParser::RightBracket)
      | (1ULL << CParser::LeftBrace))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::RightBrace - 64))
      | (1ULL << (CParser::Less - 64))
      | (1ULL << (CParser::LessEqual - 64))
      | (1ULL << (CParser::Greater - 64))
      | (1ULL << (CParser::GreaterEqual - 64))
      | (1ULL << (CParser::LeftShift - 64))
      | (1ULL << (CParser::RightShift - 64))
      | (1ULL << (CParser::Plus - 64))
      | (1ULL << (CParser::PlusPlus - 64))
      | (1ULL << (CParser::Minus - 64))
      | (1ULL << (CParser::MinusMinus - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::Div - 64))
      | (1ULL << (CParser::Mod - 64))
      | (1ULL << (CParser::And - 64))
      | (1ULL << (CParser::Or - 64))
      | (1ULL << (CParser::AndAnd - 64))
      | (1ULL << (CParser::OrOr - 64))
      | (1ULL << (CParser::Caret - 64))
      | (1ULL << (CParser::Not - 64))
      | (1ULL << (CParser::Tilde - 64))
      | (1ULL << (CParser::Question - 64))
      | (1ULL << (CParser::Colon - 64))
      | (1ULL << (CParser::Semi - 64))
      | (1ULL << (CParser::Comma - 64))
      | (1ULL << (CParser::Assign - 64))
      | (1ULL << (CParser::StarAssign - 64))
      | (1ULL << (CParser::DivAssign - 64))
      | (1ULL << (CParser::ModAssign - 64))
      | (1ULL << (CParser::PlusAssign - 64))
      | (1ULL << (CParser::MinusAssign - 64))
      | (1ULL << (CParser::LeftShiftAssign - 64))
      | (1ULL << (CParser::RightShiftAssign - 64))
      | (1ULL << (CParser::AndAssign - 64))
      | (1ULL << (CParser::XorAssign - 64))
      | (1ULL << (CParser::OrAssign - 64))
      | (1ULL << (CParser::Equal - 64))
      | (1ULL << (CParser::NotEqual - 64))
      | (1ULL << (CParser::Arrow - 64))
      | (1ULL << (CParser::Dot - 64))
      | (1ULL << (CParser::Ellipsis - 64))
      | (1ULL << (CParser::Identifier - 64))
      | (1ULL << (CParser::Constant - 64))
      | (1ULL << (CParser::DigitSequence - 64))
      | (1ULL << (CParser::StringLiteral - 64))
      | (1ULL << (CParser::ComplexDefine - 64))
      | (1ULL << (CParser::IncludeDirective - 64))
      | (1ULL << (CParser::AsmBlock - 64))
      | (1ULL << (CParser::LineAfterPreprocessing - 64))
      | (1ULL << (CParser::LineDirective - 64))
      | (1ULL << (CParser::PragmaDirective - 64))
      | (1ULL << (CParser::Whitespace - 64))
      | (1ULL << (CParser::Newline - 64))
      | (1ULL << (CParser::BlockComment - 64))
      | (1ULL << (CParser::LineComment - 64)))) != 0)) {
      setState(703);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CParser::T__0:
        case CParser::T__1:
        case CParser::T__2:
        case CParser::T__3:
        case CParser::T__4:
        case CParser::T__5:
        case CParser::T__6:
        case CParser::T__7:
        case CParser::T__8:
        case CParser::T__9:
        case CParser::T__10:
        case CParser::T__11:
        case CParser::T__12:
        case CParser::T__13:
        case CParser::Auto:
        case CParser::Break:
        case CParser::Case:
        case CParser::Char:
        case CParser::Const:
        case CParser::Continue:
        case CParser::Default:
        case CParser::Do:
        case CParser::Double:
        case CParser::Else:
        case CParser::Enum:
        case CParser::Extern:
        case CParser::Float:
        case CParser::For:
        case CParser::Goto:
        case CParser::If:
        case CParser::Inline:
        case CParser::Int:
        case CParser::Long:
        case CParser::Register:
        case CParser::Restrict:
        case CParser::Return:
        case CParser::Short:
        case CParser::Signed:
        case CParser::Sizeof:
        case CParser::Static:
        case CParser::Struct:
        case CParser::Switch:
        case CParser::Typedef:
        case CParser::Union:
        case CParser::Unsigned:
        case CParser::Void:
        case CParser::Volatile:
        case CParser::While:
        case CParser::Alignas:
        case CParser::Alignof:
        case CParser::Atomic:
        case CParser::Bool:
        case CParser::Complex:
        case CParser::Generic:
        case CParser::Imaginary:
        case CParser::Noreturn:
        case CParser::StaticAssert:
        case CParser::ThreadLocal:
        case CParser::LeftBracket:
        case CParser::RightBracket:
        case CParser::LeftBrace:
        case CParser::RightBrace:
        case CParser::Less:
        case CParser::LessEqual:
        case CParser::Greater:
        case CParser::GreaterEqual:
        case CParser::LeftShift:
        case CParser::RightShift:
        case CParser::Plus:
        case CParser::PlusPlus:
        case CParser::Minus:
        case CParser::MinusMinus:
        case CParser::Star:
        case CParser::Div:
        case CParser::Mod:
        case CParser::And:
        case CParser::Or:
        case CParser::AndAnd:
        case CParser::OrOr:
        case CParser::Caret:
        case CParser::Not:
        case CParser::Tilde:
        case CParser::Question:
        case CParser::Colon:
        case CParser::Semi:
        case CParser::Comma:
        case CParser::Assign:
        case CParser::StarAssign:
        case CParser::DivAssign:
        case CParser::ModAssign:
        case CParser::PlusAssign:
        case CParser::MinusAssign:
        case CParser::LeftShiftAssign:
        case CParser::RightShiftAssign:
        case CParser::AndAssign:
        case CParser::XorAssign:
        case CParser::OrAssign:
        case CParser::Equal:
        case CParser::NotEqual:
        case CParser::Arrow:
        case CParser::Dot:
        case CParser::Ellipsis:
        case CParser::Identifier:
        case CParser::Constant:
        case CParser::DigitSequence:
        case CParser::StringLiteral:
        case CParser::ComplexDefine:
        case CParser::IncludeDirective:
        case CParser::AsmBlock:
        case CParser::LineAfterPreprocessing:
        case CParser::LineDirective:
        case CParser::PragmaDirective:
        case CParser::Whitespace:
        case CParser::Newline:
        case CParser::BlockComment:
        case CParser::LineComment: {
          setState(698);
          _la = _input->LA(1);
          if (_la == 0 || _la == Token::EOF || (_la == CParser::LeftParen

          || _la == CParser::RightParen)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case CParser::LeftParen: {
          setState(699);
          match(CParser::LeftParen);
          setState(700);
          nestedParenthesesBlock();
          setState(701);
          match(CParser::RightParen);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(707);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerContext ------------------------------------------------------------------

CParser::PointerContext::PointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::PointerContext::Star() {
  return getTokens(CParser::Star);
}

tree::TerminalNode* CParser::PointerContext::Star(size_t i) {
  return getToken(CParser::Star, i);
}

std::vector<tree::TerminalNode *> CParser::PointerContext::Caret() {
  return getTokens(CParser::Caret);
}

tree::TerminalNode* CParser::PointerContext::Caret(size_t i) {
  return getToken(CParser::Caret, i);
}

std::vector<CParser::TypeQualifierListContext *> CParser::PointerContext::typeQualifierList() {
  return getRuleContexts<CParser::TypeQualifierListContext>();
}

CParser::TypeQualifierListContext* CParser::PointerContext::typeQualifierList(size_t i) {
  return getRuleContext<CParser::TypeQualifierListContext>(i);
}


size_t CParser::PointerContext::getRuleIndex() const {
  return CParser::RulePointer;
}

void CParser::PointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointer(this);
}

void CParser::PointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointer(this);
}

CParser::PointerContext* CParser::pointer() {
  PointerContext *_localctx = _tracker.createInstance<PointerContext>(_ctx, getState());
  enterRule(_localctx, 108, CParser::RulePointer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(712); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(708);
              _la = _input->LA(1);
              if (!(_la == CParser::Star

              || _la == CParser::Caret)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              setState(710);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
              case 1: {
                setState(709);
                typeQualifierList();
                break;
              }

              default:
                break;
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(714); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQualifierListContext ------------------------------------------------------------------

CParser::TypeQualifierListContext::TypeQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::TypeQualifierContext *> CParser::TypeQualifierListContext::typeQualifier() {
  return getRuleContexts<CParser::TypeQualifierContext>();
}

CParser::TypeQualifierContext* CParser::TypeQualifierListContext::typeQualifier(size_t i) {
  return getRuleContext<CParser::TypeQualifierContext>(i);
}


size_t CParser::TypeQualifierListContext::getRuleIndex() const {
  return CParser::RuleTypeQualifierList;
}

void CParser::TypeQualifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQualifierList(this);
}

void CParser::TypeQualifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQualifierList(this);
}

CParser::TypeQualifierListContext* CParser::typeQualifierList() {
  TypeQualifierListContext *_localctx = _tracker.createInstance<TypeQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 110, CParser::RuleTypeQualifierList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(717); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(716);
              typeQualifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(719); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterTypeListContext ------------------------------------------------------------------

CParser::ParameterTypeListContext::ParameterTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ParameterListContext* CParser::ParameterTypeListContext::parameterList() {
  return getRuleContext<CParser::ParameterListContext>(0);
}

tree::TerminalNode* CParser::ParameterTypeListContext::Comma() {
  return getToken(CParser::Comma, 0);
}

tree::TerminalNode* CParser::ParameterTypeListContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}


size_t CParser::ParameterTypeListContext::getRuleIndex() const {
  return CParser::RuleParameterTypeList;
}

void CParser::ParameterTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterTypeList(this);
}

void CParser::ParameterTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterTypeList(this);
}

CParser::ParameterTypeListContext* CParser::parameterTypeList() {
  ParameterTypeListContext *_localctx = _tracker.createInstance<ParameterTypeListContext>(_ctx, getState());
  enterRule(_localctx, 112, CParser::RuleParameterTypeList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(721);
    parameterList();
    setState(724);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Comma) {
      setState(722);
      match(CParser::Comma);
      setState(723);
      match(CParser::Ellipsis);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

CParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ParameterDeclarationContext *> CParser::ParameterListContext::parameterDeclaration() {
  return getRuleContexts<CParser::ParameterDeclarationContext>();
}

CParser::ParameterDeclarationContext* CParser::ParameterListContext::parameterDeclaration(size_t i) {
  return getRuleContext<CParser::ParameterDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ParameterListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::ParameterListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::ParameterListContext::getRuleIndex() const {
  return CParser::RuleParameterList;
}

void CParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void CParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}

CParser::ParameterListContext* CParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 114, CParser::RuleParameterList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(726);
    parameterDeclaration();
    setState(731);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(727);
        match(CParser::Comma);
        setState(728);
        parameterDeclaration(); 
      }
      setState(733);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationContext ------------------------------------------------------------------

CParser::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclarationSpecifiersContext* CParser::ParameterDeclarationContext::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}

CParser::DeclaratorContext* CParser::ParameterDeclarationContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::DeclarationSpecifiers2Context* CParser::ParameterDeclarationContext::declarationSpecifiers2() {
  return getRuleContext<CParser::DeclarationSpecifiers2Context>(0);
}

CParser::AbstractDeclaratorContext* CParser::ParameterDeclarationContext::abstractDeclarator() {
  return getRuleContext<CParser::AbstractDeclaratorContext>(0);
}


size_t CParser::ParameterDeclarationContext::getRuleIndex() const {
  return CParser::RuleParameterDeclaration;
}

void CParser::ParameterDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclaration(this);
}

void CParser::ParameterDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclaration(this);
}

CParser::ParameterDeclarationContext* CParser::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 116, CParser::RuleParameterDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(741);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(734);
      declarationSpecifiers();
      setState(735);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(737);
      declarationSpecifiers2();
      setState(739);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 59) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
        | (1ULL << (CParser::LeftBracket - 59))
        | (1ULL << (CParser::Star - 59))
        | (1ULL << (CParser::Caret - 59)))) != 0)) {
        setState(738);
        abstractDeclarator();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

CParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::IdentifierListContext::Identifier() {
  return getTokens(CParser::Identifier);
}

tree::TerminalNode* CParser::IdentifierListContext::Identifier(size_t i) {
  return getToken(CParser::Identifier, i);
}

std::vector<tree::TerminalNode *> CParser::IdentifierListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::IdentifierListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::IdentifierListContext::getRuleIndex() const {
  return CParser::RuleIdentifierList;
}

void CParser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void CParser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}

CParser::IdentifierListContext* CParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 118, CParser::RuleIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(743);
    match(CParser::Identifier);
    setState(748);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(744);
      match(CParser::Comma);
      setState(745);
      match(CParser::Identifier);
      setState(750);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

CParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::SpecifierQualifierListContext* CParser::TypeNameContext::specifierQualifierList() {
  return getRuleContext<CParser::SpecifierQualifierListContext>(0);
}

CParser::AbstractDeclaratorContext* CParser::TypeNameContext::abstractDeclarator() {
  return getRuleContext<CParser::AbstractDeclaratorContext>(0);
}


size_t CParser::TypeNameContext::getRuleIndex() const {
  return CParser::RuleTypeName;
}

void CParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void CParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}

CParser::TypeNameContext* CParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 120, CParser::RuleTypeName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(751);
    specifierQualifierList();
    setState(753);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
      | (1ULL << (CParser::LeftBracket - 59))
      | (1ULL << (CParser::Star - 59))
      | (1ULL << (CParser::Caret - 59)))) != 0)) {
      setState(752);
      abstractDeclarator();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractDeclaratorContext ------------------------------------------------------------------

CParser::AbstractDeclaratorContext::AbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PointerContext* CParser::AbstractDeclaratorContext::pointer() {
  return getRuleContext<CParser::PointerContext>(0);
}

CParser::DirectAbstractDeclaratorContext* CParser::AbstractDeclaratorContext::directAbstractDeclarator() {
  return getRuleContext<CParser::DirectAbstractDeclaratorContext>(0);
}

std::vector<CParser::GccDeclaratorExtensionContext *> CParser::AbstractDeclaratorContext::gccDeclaratorExtension() {
  return getRuleContexts<CParser::GccDeclaratorExtensionContext>();
}

CParser::GccDeclaratorExtensionContext* CParser::AbstractDeclaratorContext::gccDeclaratorExtension(size_t i) {
  return getRuleContext<CParser::GccDeclaratorExtensionContext>(i);
}


size_t CParser::AbstractDeclaratorContext::getRuleIndex() const {
  return CParser::RuleAbstractDeclarator;
}

void CParser::AbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractDeclarator(this);
}

void CParser::AbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractDeclarator(this);
}

CParser::AbstractDeclaratorContext* CParser::abstractDeclarator() {
  AbstractDeclaratorContext *_localctx = _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 122, CParser::RuleAbstractDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(766);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(755);
      pointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(757);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Star

      || _la == CParser::Caret) {
        setState(756);
        pointer();
      }
      setState(759);
      directAbstractDeclarator(0);
      setState(763);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CParser::T__10

      || _la == CParser::T__11) {
        setState(760);
        gccDeclaratorExtension();
        setState(765);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectAbstractDeclaratorContext ------------------------------------------------------------------

CParser::DirectAbstractDeclaratorContext::DirectAbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::AbstractDeclaratorContext* CParser::DirectAbstractDeclaratorContext::abstractDeclarator() {
  return getRuleContext<CParser::AbstractDeclaratorContext>(0);
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

std::vector<CParser::GccDeclaratorExtensionContext *> CParser::DirectAbstractDeclaratorContext::gccDeclaratorExtension() {
  return getRuleContexts<CParser::GccDeclaratorExtensionContext>();
}

CParser::GccDeclaratorExtensionContext* CParser::DirectAbstractDeclaratorContext::gccDeclaratorExtension(size_t i) {
  return getRuleContext<CParser::GccDeclaratorExtensionContext>(i);
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

CParser::TypeQualifierListContext* CParser::DirectAbstractDeclaratorContext::typeQualifierList() {
  return getRuleContext<CParser::TypeQualifierListContext>(0);
}

CParser::AssignmentExpressionContext* CParser::DirectAbstractDeclaratorContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::Static() {
  return getToken(CParser::Static, 0);
}

tree::TerminalNode* CParser::DirectAbstractDeclaratorContext::Star() {
  return getToken(CParser::Star, 0);
}

CParser::ParameterTypeListContext* CParser::DirectAbstractDeclaratorContext::parameterTypeList() {
  return getRuleContext<CParser::ParameterTypeListContext>(0);
}

CParser::DirectAbstractDeclaratorContext* CParser::DirectAbstractDeclaratorContext::directAbstractDeclarator() {
  return getRuleContext<CParser::DirectAbstractDeclaratorContext>(0);
}


size_t CParser::DirectAbstractDeclaratorContext::getRuleIndex() const {
  return CParser::RuleDirectAbstractDeclarator;
}

void CParser::DirectAbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectAbstractDeclarator(this);
}

void CParser::DirectAbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectAbstractDeclarator(this);
}


CParser::DirectAbstractDeclaratorContext* CParser::directAbstractDeclarator() {
   return directAbstractDeclarator(0);
}

CParser::DirectAbstractDeclaratorContext* CParser::directAbstractDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::DirectAbstractDeclaratorContext *_localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(_ctx, parentState);
  CParser::DirectAbstractDeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 124;
  enterRecursionRule(_localctx, 124, CParser::RuleDirectAbstractDeclarator, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(814);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      setState(769);
      match(CParser::LeftParen);
      setState(770);
      abstractDeclarator();
      setState(771);
      match(CParser::RightParen);
      setState(775);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(772);
          gccDeclaratorExtension(); 
        }
        setState(777);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
      }
      break;
    }

    case 2: {
      setState(778);
      match(CParser::LeftBracket);
      setState(780);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::Const)
        | (1ULL << CParser::Restrict)
        | (1ULL << CParser::Volatile)
        | (1ULL << CParser::Atomic))) != 0)) {
        setState(779);
        typeQualifierList();
      }
      setState(783);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
        | (1ULL << (CParser::PlusPlus - 71))
        | (1ULL << (CParser::Minus - 71))
        | (1ULL << (CParser::MinusMinus - 71))
        | (1ULL << (CParser::Star - 71))
        | (1ULL << (CParser::And - 71))
        | (1ULL << (CParser::AndAnd - 71))
        | (1ULL << (CParser::Not - 71))
        | (1ULL << (CParser::Tilde - 71))
        | (1ULL << (CParser::Identifier - 71))
        | (1ULL << (CParser::Constant - 71))
        | (1ULL << (CParser::DigitSequence - 71))
        | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
        setState(782);
        assignmentExpression();
      }
      setState(785);
      match(CParser::RightBracket);
      break;
    }

    case 3: {
      setState(786);
      match(CParser::LeftBracket);
      setState(787);
      match(CParser::Static);
      setState(789);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::Const)
        | (1ULL << CParser::Restrict)
        | (1ULL << CParser::Volatile)
        | (1ULL << CParser::Atomic))) != 0)) {
        setState(788);
        typeQualifierList();
      }
      setState(791);
      assignmentExpression();
      setState(792);
      match(CParser::RightBracket);
      break;
    }

    case 4: {
      setState(794);
      match(CParser::LeftBracket);
      setState(795);
      typeQualifierList();
      setState(796);
      match(CParser::Static);
      setState(797);
      assignmentExpression();
      setState(798);
      match(CParser::RightBracket);
      break;
    }

    case 5: {
      setState(800);
      match(CParser::LeftBracket);
      setState(801);
      match(CParser::Star);
      setState(802);
      match(CParser::RightBracket);
      break;
    }

    case 6: {
      setState(803);
      match(CParser::LeftParen);
      setState(805);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__3)
        | (1ULL << CParser::T__4)
        | (1ULL << CParser::T__5)
        | (1ULL << CParser::T__6)
        | (1ULL << CParser::T__7)
        | (1ULL << CParser::T__8)
        | (1ULL << CParser::T__9)
        | (1ULL << CParser::T__11)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Const)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Enum)
        | (1ULL << CParser::Extern)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Inline)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::Register)
        | (1ULL << CParser::Restrict)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Static)
        | (1ULL << CParser::Struct)
        | (1ULL << CParser::Typedef)
        | (1ULL << CParser::Union)
        | (1ULL << CParser::Unsigned)
        | (1ULL << CParser::Void)
        | (1ULL << CParser::Volatile)
        | (1ULL << CParser::Alignas)
        | (1ULL << CParser::Atomic)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Complex)
        | (1ULL << CParser::Noreturn)
        | (1ULL << CParser::ThreadLocal))) != 0) || _la == CParser::Identifier) {
        setState(804);
        parameterTypeList();
      }
      setState(807);
      match(CParser::RightParen);
      setState(811);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(808);
          gccDeclaratorExtension(); 
        }
        setState(813);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
      }
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(859);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(857);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(816);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(817);
          match(CParser::LeftBracket);
          setState(819);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::Const)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Atomic))) != 0)) {
            setState(818);
            typeQualifierList();
          }
          setState(822);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__1)
            | (1ULL << CParser::T__2)
            | (1ULL << CParser::Sizeof)
            | (1ULL << CParser::Alignof)
            | (1ULL << CParser::Generic)
            | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
            | (1ULL << (CParser::PlusPlus - 71))
            | (1ULL << (CParser::Minus - 71))
            | (1ULL << (CParser::MinusMinus - 71))
            | (1ULL << (CParser::Star - 71))
            | (1ULL << (CParser::And - 71))
            | (1ULL << (CParser::AndAnd - 71))
            | (1ULL << (CParser::Not - 71))
            | (1ULL << (CParser::Tilde - 71))
            | (1ULL << (CParser::Identifier - 71))
            | (1ULL << (CParser::Constant - 71))
            | (1ULL << (CParser::DigitSequence - 71))
            | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
            setState(821);
            assignmentExpression();
          }
          setState(824);
          match(CParser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(825);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(826);
          match(CParser::LeftBracket);
          setState(827);
          match(CParser::Static);
          setState(829);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::Const)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Atomic))) != 0)) {
            setState(828);
            typeQualifierList();
          }
          setState(831);
          assignmentExpression();
          setState(832);
          match(CParser::RightBracket);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(834);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(835);
          match(CParser::LeftBracket);
          setState(836);
          typeQualifierList();
          setState(837);
          match(CParser::Static);
          setState(838);
          assignmentExpression();
          setState(839);
          match(CParser::RightBracket);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(841);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(842);
          match(CParser::LeftBracket);
          setState(843);
          match(CParser::Star);
          setState(844);
          match(CParser::RightBracket);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(845);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(846);
          match(CParser::LeftParen);
          setState(848);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__3)
            | (1ULL << CParser::T__4)
            | (1ULL << CParser::T__5)
            | (1ULL << CParser::T__6)
            | (1ULL << CParser::T__7)
            | (1ULL << CParser::T__8)
            | (1ULL << CParser::T__9)
            | (1ULL << CParser::T__11)
            | (1ULL << CParser::Auto)
            | (1ULL << CParser::Char)
            | (1ULL << CParser::Const)
            | (1ULL << CParser::Double)
            | (1ULL << CParser::Enum)
            | (1ULL << CParser::Extern)
            | (1ULL << CParser::Float)
            | (1ULL << CParser::Inline)
            | (1ULL << CParser::Int)
            | (1ULL << CParser::Long)
            | (1ULL << CParser::Register)
            | (1ULL << CParser::Restrict)
            | (1ULL << CParser::Short)
            | (1ULL << CParser::Signed)
            | (1ULL << CParser::Static)
            | (1ULL << CParser::Struct)
            | (1ULL << CParser::Typedef)
            | (1ULL << CParser::Union)
            | (1ULL << CParser::Unsigned)
            | (1ULL << CParser::Void)
            | (1ULL << CParser::Volatile)
            | (1ULL << CParser::Alignas)
            | (1ULL << CParser::Atomic)
            | (1ULL << CParser::Bool)
            | (1ULL << CParser::Complex)
            | (1ULL << CParser::Noreturn)
            | (1ULL << CParser::ThreadLocal))) != 0) || _la == CParser::Identifier) {
            setState(847);
            parameterTypeList();
          }
          setState(850);
          match(CParser::RightParen);
          setState(854);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(851);
              gccDeclaratorExtension(); 
            }
            setState(856);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx);
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(861);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypedefNameContext ------------------------------------------------------------------

CParser::TypedefNameContext::TypedefNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypedefNameContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::TypedefNameContext::getRuleIndex() const {
  return CParser::RuleTypedefName;
}

void CParser::TypedefNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefName(this);
}

void CParser::TypedefNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefName(this);
}

CParser::TypedefNameContext* CParser::typedefName() {
  TypedefNameContext *_localctx = _tracker.createInstance<TypedefNameContext>(_ctx, getState());
  enterRule(_localctx, 126, CParser::RuleTypedefName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(862);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

CParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AssignmentExpressionContext* CParser::InitializerContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CParser::InitializerContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::InitializerListContext* CParser::InitializerContext::initializerList() {
  return getRuleContext<CParser::InitializerListContext>(0);
}

tree::TerminalNode* CParser::InitializerContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

tree::TerminalNode* CParser::InitializerContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::InitializerContext::getRuleIndex() const {
  return CParser::RuleInitializer;
}

void CParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void CParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}

CParser::InitializerContext* CParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 128, CParser::RuleInitializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(872);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__1:
      case CParser::T__2:
      case CParser::Sizeof:
      case CParser::Alignof:
      case CParser::Generic:
      case CParser::LeftParen:
      case CParser::Plus:
      case CParser::PlusPlus:
      case CParser::Minus:
      case CParser::MinusMinus:
      case CParser::Star:
      case CParser::And:
      case CParser::AndAnd:
      case CParser::Not:
      case CParser::Tilde:
      case CParser::Identifier:
      case CParser::Constant:
      case CParser::DigitSequence:
      case CParser::StringLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(864);
        assignmentExpression();
        break;
      }

      case CParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(865);
        match(CParser::LeftBrace);
        setState(866);
        initializerList();
        setState(868);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CParser::Comma) {
          setState(867);
          match(CParser::Comma);
        }
        setState(870);
        match(CParser::RightBrace);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerListContext ------------------------------------------------------------------

CParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::InitializerContext *> CParser::InitializerListContext::initializer() {
  return getRuleContexts<CParser::InitializerContext>();
}

CParser::InitializerContext* CParser::InitializerListContext::initializer(size_t i) {
  return getRuleContext<CParser::InitializerContext>(i);
}

std::vector<CParser::DesignationContext *> CParser::InitializerListContext::designation() {
  return getRuleContexts<CParser::DesignationContext>();
}

CParser::DesignationContext* CParser::InitializerListContext::designation(size_t i) {
  return getRuleContext<CParser::DesignationContext>(i);
}

std::vector<tree::TerminalNode *> CParser::InitializerListContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::InitializerListContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::InitializerListContext::getRuleIndex() const {
  return CParser::RuleInitializerList;
}

void CParser::InitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList(this);
}

void CParser::InitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList(this);
}

CParser::InitializerListContext* CParser::initializerList() {
  InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, getState());
  enterRule(_localctx, 130, CParser::RuleInitializerList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(875);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::LeftBracket

    || _la == CParser::Dot) {
      setState(874);
      designation();
    }
    setState(877);
    initializer();
    setState(885);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(878);
        match(CParser::Comma);
        setState(880);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CParser::LeftBracket

        || _la == CParser::Dot) {
          setState(879);
          designation();
        }
        setState(882);
        initializer(); 
      }
      setState(887);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignationContext ------------------------------------------------------------------

CParser::DesignationContext::DesignationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DesignatorListContext* CParser::DesignationContext::designatorList() {
  return getRuleContext<CParser::DesignatorListContext>(0);
}

tree::TerminalNode* CParser::DesignationContext::Assign() {
  return getToken(CParser::Assign, 0);
}


size_t CParser::DesignationContext::getRuleIndex() const {
  return CParser::RuleDesignation;
}

void CParser::DesignationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignation(this);
}

void CParser::DesignationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignation(this);
}

CParser::DesignationContext* CParser::designation() {
  DesignationContext *_localctx = _tracker.createInstance<DesignationContext>(_ctx, getState());
  enterRule(_localctx, 132, CParser::RuleDesignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(888);
    designatorList();
    setState(889);
    match(CParser::Assign);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignatorListContext ------------------------------------------------------------------

CParser::DesignatorListContext::DesignatorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::DesignatorContext *> CParser::DesignatorListContext::designator() {
  return getRuleContexts<CParser::DesignatorContext>();
}

CParser::DesignatorContext* CParser::DesignatorListContext::designator(size_t i) {
  return getRuleContext<CParser::DesignatorContext>(i);
}


size_t CParser::DesignatorListContext::getRuleIndex() const {
  return CParser::RuleDesignatorList;
}

void CParser::DesignatorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignatorList(this);
}

void CParser::DesignatorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignatorList(this);
}

CParser::DesignatorListContext* CParser::designatorList() {
  DesignatorListContext *_localctx = _tracker.createInstance<DesignatorListContext>(_ctx, getState());
  enterRule(_localctx, 134, CParser::RuleDesignatorList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(892); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(891);
      designator();
      setState(894); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CParser::LeftBracket

    || _la == CParser::Dot);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignatorContext ------------------------------------------------------------------

CParser::DesignatorContext::DesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::DesignatorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

CParser::ConstantExpressionContext* CParser::DesignatorContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CParser::DesignatorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

tree::TerminalNode* CParser::DesignatorContext::Dot() {
  return getToken(CParser::Dot, 0);
}

tree::TerminalNode* CParser::DesignatorContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::DesignatorContext::getRuleIndex() const {
  return CParser::RuleDesignator;
}

void CParser::DesignatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignator(this);
}

void CParser::DesignatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignator(this);
}

CParser::DesignatorContext* CParser::designator() {
  DesignatorContext *_localctx = _tracker.createInstance<DesignatorContext>(_ctx, getState());
  enterRule(_localctx, 136, CParser::RuleDesignator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(902);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(896);
        match(CParser::LeftBracket);
        setState(897);
        constantExpression();
        setState(898);
        match(CParser::RightBracket);
        break;
      }

      case CParser::Dot: {
        enterOuterAlt(_localctx, 2);
        setState(900);
        match(CParser::Dot);
        setState(901);
        match(CParser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticAssertDeclarationContext ------------------------------------------------------------------

CParser::StaticAssertDeclarationContext::StaticAssertDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::StaticAssert() {
  return getToken(CParser::StaticAssert, 0);
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ConstantExpressionContext* CParser::StaticAssertDeclarationContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::Comma() {
  return getToken(CParser::Comma, 0);
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

std::vector<tree::TerminalNode *> CParser::StaticAssertDeclarationContext::StringLiteral() {
  return getTokens(CParser::StringLiteral);
}

tree::TerminalNode* CParser::StaticAssertDeclarationContext::StringLiteral(size_t i) {
  return getToken(CParser::StringLiteral, i);
}


size_t CParser::StaticAssertDeclarationContext::getRuleIndex() const {
  return CParser::RuleStaticAssertDeclaration;
}

void CParser::StaticAssertDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticAssertDeclaration(this);
}

void CParser::StaticAssertDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticAssertDeclaration(this);
}

CParser::StaticAssertDeclarationContext* CParser::staticAssertDeclaration() {
  StaticAssertDeclarationContext *_localctx = _tracker.createInstance<StaticAssertDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 138, CParser::RuleStaticAssertDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(904);
    match(CParser::StaticAssert);
    setState(905);
    match(CParser::LeftParen);
    setState(906);
    constantExpression();
    setState(907);
    match(CParser::Comma);
    setState(909); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(908);
      match(CParser::StringLiteral);
      setState(911); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CParser::StringLiteral);
    setState(913);
    match(CParser::RightParen);
    setState(914);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::LabeledStatementContext* CParser::StatementContext::labeledStatement() {
  return getRuleContext<CParser::LabeledStatementContext>(0);
}

CParser::CompoundStatementContext* CParser::StatementContext::compoundStatement() {
  return getRuleContext<CParser::CompoundStatementContext>(0);
}

CParser::ExpressionStatementContext* CParser::StatementContext::expressionStatement() {
  return getRuleContext<CParser::ExpressionStatementContext>(0);
}

CParser::SelectionStatementContext* CParser::StatementContext::selectionStatement() {
  return getRuleContext<CParser::SelectionStatementContext>(0);
}

CParser::IterationStatementContext* CParser::StatementContext::iterationStatement() {
  return getRuleContext<CParser::IterationStatementContext>(0);
}

CParser::JumpStatementContext* CParser::StatementContext::jumpStatement() {
  return getRuleContext<CParser::JumpStatementContext>(0);
}

tree::TerminalNode* CParser::StatementContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::StatementContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::StatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

tree::TerminalNode* CParser::StatementContext::Volatile() {
  return getToken(CParser::Volatile, 0);
}

std::vector<CParser::LogicalOrExpressionContext *> CParser::StatementContext::logicalOrExpression() {
  return getRuleContexts<CParser::LogicalOrExpressionContext>();
}

CParser::LogicalOrExpressionContext* CParser::StatementContext::logicalOrExpression(size_t i) {
  return getRuleContext<CParser::LogicalOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::StatementContext::Colon() {
  return getTokens(CParser::Colon);
}

tree::TerminalNode* CParser::StatementContext::Colon(size_t i) {
  return getToken(CParser::Colon, i);
}

std::vector<tree::TerminalNode *> CParser::StatementContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::StatementContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::StatementContext::getRuleIndex() const {
  return CParser::RuleStatement;
}

void CParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

CParser::StatementContext* CParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 140, CParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(953);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(916);
      labeledStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(917);
      compoundStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(918);
      expressionStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(919);
      selectionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(920);
      iterationStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(921);
      jumpStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(922);
      _la = _input->LA(1);
      if (!(_la == CParser::T__10

      || _la == CParser::T__12)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(923);
      _la = _input->LA(1);
      if (!(_la == CParser::T__13

      || _la == CParser::Volatile)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(924);
      match(CParser::LeftParen);
      setState(933);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
        | (1ULL << (CParser::PlusPlus - 71))
        | (1ULL << (CParser::Minus - 71))
        | (1ULL << (CParser::MinusMinus - 71))
        | (1ULL << (CParser::Star - 71))
        | (1ULL << (CParser::And - 71))
        | (1ULL << (CParser::AndAnd - 71))
        | (1ULL << (CParser::Not - 71))
        | (1ULL << (CParser::Tilde - 71))
        | (1ULL << (CParser::Identifier - 71))
        | (1ULL << (CParser::Constant - 71))
        | (1ULL << (CParser::DigitSequence - 71))
        | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
        setState(925);
        logicalOrExpression();
        setState(930);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CParser::Comma) {
          setState(926);
          match(CParser::Comma);
          setState(927);
          logicalOrExpression();
          setState(932);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(948);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CParser::Colon) {
        setState(935);
        match(CParser::Colon);
        setState(944);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__0)
          | (1ULL << CParser::T__1)
          | (1ULL << CParser::T__2)
          | (1ULL << CParser::Sizeof)
          | (1ULL << CParser::Alignof)
          | (1ULL << CParser::Generic)
          | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
          | (1ULL << (CParser::PlusPlus - 71))
          | (1ULL << (CParser::Minus - 71))
          | (1ULL << (CParser::MinusMinus - 71))
          | (1ULL << (CParser::Star - 71))
          | (1ULL << (CParser::And - 71))
          | (1ULL << (CParser::AndAnd - 71))
          | (1ULL << (CParser::Not - 71))
          | (1ULL << (CParser::Tilde - 71))
          | (1ULL << (CParser::Identifier - 71))
          | (1ULL << (CParser::Constant - 71))
          | (1ULL << (CParser::DigitSequence - 71))
          | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
          setState(936);
          logicalOrExpression();
          setState(941);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == CParser::Comma) {
            setState(937);
            match(CParser::Comma);
            setState(938);
            logicalOrExpression();
            setState(943);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(950);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(951);
      match(CParser::RightParen);
      setState(952);
      match(CParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementContext ------------------------------------------------------------------

CParser::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::LabeledStatementContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::LabeledStatementContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::StatementContext* CParser::LabeledStatementContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

tree::TerminalNode* CParser::LabeledStatementContext::Case() {
  return getToken(CParser::Case, 0);
}

CParser::ConstantExpressionContext* CParser::LabeledStatementContext::constantExpression() {
  return getRuleContext<CParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CParser::LabeledStatementContext::Default() {
  return getToken(CParser::Default, 0);
}


size_t CParser::LabeledStatementContext::getRuleIndex() const {
  return CParser::RuleLabeledStatement;
}

void CParser::LabeledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatement(this);
}

void CParser::LabeledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatement(this);
}

CParser::LabeledStatementContext* CParser::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 142, CParser::RuleLabeledStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(966);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(955);
        match(CParser::Identifier);
        setState(956);
        match(CParser::Colon);
        setState(957);
        statement();
        break;
      }

      case CParser::Case: {
        enterOuterAlt(_localctx, 2);
        setState(958);
        match(CParser::Case);
        setState(959);
        constantExpression();
        setState(960);
        match(CParser::Colon);
        setState(961);
        statement();
        break;
      }

      case CParser::Default: {
        enterOuterAlt(_localctx, 3);
        setState(963);
        match(CParser::Default);
        setState(964);
        match(CParser::Colon);
        setState(965);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

CParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::CompoundStatementContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

tree::TerminalNode* CParser::CompoundStatementContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

CParser::BlockItemListContext* CParser::CompoundStatementContext::blockItemList() {
  return getRuleContext<CParser::BlockItemListContext>(0);
}


size_t CParser::CompoundStatementContext::getRuleIndex() const {
  return CParser::RuleCompoundStatement;
}

void CParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void CParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}

CParser::CompoundStatementContext* CParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 144, CParser::RuleCompoundStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(968);
    match(CParser::LeftBrace);
    setState(970);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__12)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftParen)
      | (1ULL << CParser::LeftBrace))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::PlusPlus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::MinusMinus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::AndAnd - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71))
      | (1ULL << (CParser::Semi - 71))
      | (1ULL << (CParser::Identifier - 71))
      | (1ULL << (CParser::Constant - 71))
      | (1ULL << (CParser::DigitSequence - 71))
      | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
      setState(969);
      blockItemList();
    }
    setState(972);
    match(CParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemListContext ------------------------------------------------------------------

CParser::BlockItemListContext::BlockItemListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::BlockItemContext *> CParser::BlockItemListContext::blockItem() {
  return getRuleContexts<CParser::BlockItemContext>();
}

CParser::BlockItemContext* CParser::BlockItemListContext::blockItem(size_t i) {
  return getRuleContext<CParser::BlockItemContext>(i);
}


size_t CParser::BlockItemListContext::getRuleIndex() const {
  return CParser::RuleBlockItemList;
}

void CParser::BlockItemListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItemList(this);
}

void CParser::BlockItemListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItemList(this);
}

CParser::BlockItemListContext* CParser::blockItemList() {
  BlockItemListContext *_localctx = _tracker.createInstance<BlockItemListContext>(_ctx, getState());
  enterRule(_localctx, 146, CParser::RuleBlockItemList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(975); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(974);
      blockItem();
      setState(977); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__12)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftParen)
      | (1ULL << CParser::LeftBrace))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::PlusPlus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::MinusMinus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::AndAnd - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71))
      | (1ULL << (CParser::Semi - 71))
      | (1ULL << (CParser::Identifier - 71))
      | (1ULL << (CParser::Constant - 71))
      | (1ULL << (CParser::DigitSequence - 71))
      | (1ULL << (CParser::StringLiteral - 71)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

CParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::StatementContext* CParser::BlockItemContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

CParser::DeclarationContext* CParser::BlockItemContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}


size_t CParser::BlockItemContext::getRuleIndex() const {
  return CParser::RuleBlockItem;
}

void CParser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void CParser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}

CParser::BlockItemContext* CParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 148, CParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(981);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(979);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(980);
      declaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

CParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ExpressionStatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::ExpressionContext* CParser::ExpressionStatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}


size_t CParser::ExpressionStatementContext::getRuleIndex() const {
  return CParser::RuleExpressionStatement;
}

void CParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void CParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

CParser::ExpressionStatementContext* CParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 150, CParser::RuleExpressionStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(984);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::PlusPlus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::MinusMinus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::AndAnd - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71))
      | (1ULL << (CParser::Identifier - 71))
      | (1ULL << (CParser::Constant - 71))
      | (1ULL << (CParser::DigitSequence - 71))
      | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
      setState(983);
      expression();
    }
    setState(986);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionStatementContext ------------------------------------------------------------------

CParser::SelectionStatementContext::SelectionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::SelectionStatementContext::If() {
  return getToken(CParser::If, 0);
}

tree::TerminalNode* CParser::SelectionStatementContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionContext* CParser::SelectionStatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::SelectionStatementContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

std::vector<CParser::StatementContext *> CParser::SelectionStatementContext::statement() {
  return getRuleContexts<CParser::StatementContext>();
}

CParser::StatementContext* CParser::SelectionStatementContext::statement(size_t i) {
  return getRuleContext<CParser::StatementContext>(i);
}

tree::TerminalNode* CParser::SelectionStatementContext::Else() {
  return getToken(CParser::Else, 0);
}

tree::TerminalNode* CParser::SelectionStatementContext::Switch() {
  return getToken(CParser::Switch, 0);
}


size_t CParser::SelectionStatementContext::getRuleIndex() const {
  return CParser::RuleSelectionStatement;
}

void CParser::SelectionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionStatement(this);
}

void CParser::SelectionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionStatement(this);
}

CParser::SelectionStatementContext* CParser::selectionStatement() {
  SelectionStatementContext *_localctx = _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
  enterRule(_localctx, 152, CParser::RuleSelectionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1003);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(988);
        match(CParser::If);
        setState(989);
        match(CParser::LeftParen);
        setState(990);
        expression();
        setState(991);
        match(CParser::RightParen);
        setState(992);
        statement();
        setState(995);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
        case 1: {
          setState(993);
          match(CParser::Else);
          setState(994);
          statement();
          break;
        }

        default:
          break;
        }
        break;
      }

      case CParser::Switch: {
        enterOuterAlt(_localctx, 2);
        setState(997);
        match(CParser::Switch);
        setState(998);
        match(CParser::LeftParen);
        setState(999);
        expression();
        setState(1000);
        match(CParser::RightParen);
        setState(1001);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationStatementContext ------------------------------------------------------------------

CParser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::IterationStatementContext::While() {
  return getToken(CParser::While, 0);
}

tree::TerminalNode* CParser::IterationStatementContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionContext* CParser::IterationStatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::IterationStatementContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::StatementContext* CParser::IterationStatementContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

tree::TerminalNode* CParser::IterationStatementContext::Do() {
  return getToken(CParser::Do, 0);
}

tree::TerminalNode* CParser::IterationStatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

tree::TerminalNode* CParser::IterationStatementContext::For() {
  return getToken(CParser::For, 0);
}

CParser::ForConditionContext* CParser::IterationStatementContext::forCondition() {
  return getRuleContext<CParser::ForConditionContext>(0);
}


size_t CParser::IterationStatementContext::getRuleIndex() const {
  return CParser::RuleIterationStatement;
}

void CParser::IterationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationStatement(this);
}

void CParser::IterationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationStatement(this);
}

CParser::IterationStatementContext* CParser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 154, CParser::RuleIterationStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1025);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::While: {
        enterOuterAlt(_localctx, 1);
        setState(1005);
        match(CParser::While);
        setState(1006);
        match(CParser::LeftParen);
        setState(1007);
        expression();
        setState(1008);
        match(CParser::RightParen);
        setState(1009);
        statement();
        break;
      }

      case CParser::Do: {
        enterOuterAlt(_localctx, 2);
        setState(1011);
        match(CParser::Do);
        setState(1012);
        statement();
        setState(1013);
        match(CParser::While);
        setState(1014);
        match(CParser::LeftParen);
        setState(1015);
        expression();
        setState(1016);
        match(CParser::RightParen);
        setState(1017);
        match(CParser::Semi);
        break;
      }

      case CParser::For: {
        enterOuterAlt(_localctx, 3);
        setState(1019);
        match(CParser::For);
        setState(1020);
        match(CParser::LeftParen);
        setState(1021);
        forCondition();
        setState(1022);
        match(CParser::RightParen);
        setState(1023);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForConditionContext ------------------------------------------------------------------

CParser::ForConditionContext::ForConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::ForConditionContext::Semi() {
  return getTokens(CParser::Semi);
}

tree::TerminalNode* CParser::ForConditionContext::Semi(size_t i) {
  return getToken(CParser::Semi, i);
}

CParser::ForDeclarationContext* CParser::ForConditionContext::forDeclaration() {
  return getRuleContext<CParser::ForDeclarationContext>(0);
}

std::vector<CParser::ForExpressionContext *> CParser::ForConditionContext::forExpression() {
  return getRuleContexts<CParser::ForExpressionContext>();
}

CParser::ForExpressionContext* CParser::ForConditionContext::forExpression(size_t i) {
  return getRuleContext<CParser::ForExpressionContext>(i);
}

CParser::ExpressionContext* CParser::ForConditionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}


size_t CParser::ForConditionContext::getRuleIndex() const {
  return CParser::RuleForCondition;
}

void CParser::ForConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForCondition(this);
}

void CParser::ForConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForCondition(this);
}

CParser::ForConditionContext* CParser::forCondition() {
  ForConditionContext *_localctx = _tracker.createInstance<ForConditionContext>(_ctx, getState());
  enterRule(_localctx, 156, CParser::RuleForCondition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1031);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
    case 1: {
      setState(1027);
      forDeclaration();
      break;
    }

    case 2: {
      setState(1029);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
        | (1ULL << (CParser::PlusPlus - 71))
        | (1ULL << (CParser::Minus - 71))
        | (1ULL << (CParser::MinusMinus - 71))
        | (1ULL << (CParser::Star - 71))
        | (1ULL << (CParser::And - 71))
        | (1ULL << (CParser::AndAnd - 71))
        | (1ULL << (CParser::Not - 71))
        | (1ULL << (CParser::Tilde - 71))
        | (1ULL << (CParser::Identifier - 71))
        | (1ULL << (CParser::Constant - 71))
        | (1ULL << (CParser::DigitSequence - 71))
        | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
        setState(1028);
        expression();
      }
      break;
    }

    default:
      break;
    }
    setState(1033);
    match(CParser::Semi);
    setState(1035);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::PlusPlus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::MinusMinus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::AndAnd - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71))
      | (1ULL << (CParser::Identifier - 71))
      | (1ULL << (CParser::Constant - 71))
      | (1ULL << (CParser::DigitSequence - 71))
      | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
      setState(1034);
      forExpression();
    }
    setState(1037);
    match(CParser::Semi);
    setState(1039);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
      | (1ULL << (CParser::PlusPlus - 71))
      | (1ULL << (CParser::Minus - 71))
      | (1ULL << (CParser::MinusMinus - 71))
      | (1ULL << (CParser::Star - 71))
      | (1ULL << (CParser::And - 71))
      | (1ULL << (CParser::AndAnd - 71))
      | (1ULL << (CParser::Not - 71))
      | (1ULL << (CParser::Tilde - 71))
      | (1ULL << (CParser::Identifier - 71))
      | (1ULL << (CParser::Constant - 71))
      | (1ULL << (CParser::DigitSequence - 71))
      | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
      setState(1038);
      forExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForDeclarationContext ------------------------------------------------------------------

CParser::ForDeclarationContext::ForDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclarationSpecifiersContext* CParser::ForDeclarationContext::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}

CParser::InitDeclaratorListContext* CParser::ForDeclarationContext::initDeclaratorList() {
  return getRuleContext<CParser::InitDeclaratorListContext>(0);
}


size_t CParser::ForDeclarationContext::getRuleIndex() const {
  return CParser::RuleForDeclaration;
}

void CParser::ForDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForDeclaration(this);
}

void CParser::ForDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForDeclaration(this);
}

CParser::ForDeclarationContext* CParser::forDeclaration() {
  ForDeclarationContext *_localctx = _tracker.createInstance<ForDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 158, CParser::RuleForDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1041);
    declarationSpecifiers();
    setState(1043);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (CParser::LeftParen - 59))
      | (1ULL << (CParser::Star - 59))
      | (1ULL << (CParser::Caret - 59))
      | (1ULL << (CParser::Identifier - 59)))) != 0)) {
      setState(1042);
      initDeclaratorList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForExpressionContext ------------------------------------------------------------------

CParser::ForExpressionContext::ForExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::AssignmentExpressionContext *> CParser::ForExpressionContext::assignmentExpression() {
  return getRuleContexts<CParser::AssignmentExpressionContext>();
}

CParser::AssignmentExpressionContext* CParser::ForExpressionContext::assignmentExpression(size_t i) {
  return getRuleContext<CParser::AssignmentExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CParser::ForExpressionContext::Comma() {
  return getTokens(CParser::Comma);
}

tree::TerminalNode* CParser::ForExpressionContext::Comma(size_t i) {
  return getToken(CParser::Comma, i);
}


size_t CParser::ForExpressionContext::getRuleIndex() const {
  return CParser::RuleForExpression;
}

void CParser::ForExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForExpression(this);
}

void CParser::ForExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForExpression(this);
}

CParser::ForExpressionContext* CParser::forExpression() {
  ForExpressionContext *_localctx = _tracker.createInstance<ForExpressionContext>(_ctx, getState());
  enterRule(_localctx, 160, CParser::RuleForExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1045);
    assignmentExpression();
    setState(1050);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1046);
      match(CParser::Comma);
      setState(1047);
      assignmentExpression();
      setState(1052);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStatementContext ------------------------------------------------------------------

CParser::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::JumpStatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

tree::TerminalNode* CParser::JumpStatementContext::Goto() {
  return getToken(CParser::Goto, 0);
}

tree::TerminalNode* CParser::JumpStatementContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::JumpStatementContext::Return() {
  return getToken(CParser::Return, 0);
}

CParser::UnaryExpressionContext* CParser::JumpStatementContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CParser::JumpStatementContext::Continue() {
  return getToken(CParser::Continue, 0);
}

tree::TerminalNode* CParser::JumpStatementContext::Break() {
  return getToken(CParser::Break, 0);
}

CParser::ExpressionContext* CParser::JumpStatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}


size_t CParser::JumpStatementContext::getRuleIndex() const {
  return CParser::RuleJumpStatement;
}

void CParser::JumpStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpStatement(this);
}

void CParser::JumpStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpStatement(this);
}

CParser::JumpStatementContext* CParser::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 162, CParser::RuleJumpStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1062);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
    case 1: {
      setState(1053);
      match(CParser::Goto);
      setState(1054);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      setState(1055);
      _la = _input->LA(1);
      if (!(_la == CParser::Break

      || _la == CParser::Continue)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      setState(1056);
      match(CParser::Return);
      setState(1058);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::T__2)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Generic)
        | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CParser::Plus - 71))
        | (1ULL << (CParser::PlusPlus - 71))
        | (1ULL << (CParser::Minus - 71))
        | (1ULL << (CParser::MinusMinus - 71))
        | (1ULL << (CParser::Star - 71))
        | (1ULL << (CParser::And - 71))
        | (1ULL << (CParser::AndAnd - 71))
        | (1ULL << (CParser::Not - 71))
        | (1ULL << (CParser::Tilde - 71))
        | (1ULL << (CParser::Identifier - 71))
        | (1ULL << (CParser::Constant - 71))
        | (1ULL << (CParser::DigitSequence - 71))
        | (1ULL << (CParser::StringLiteral - 71)))) != 0)) {
        setState(1057);
        expression();
      }
      break;
    }

    case 4: {
      setState(1060);
      match(CParser::Goto);
      setState(1061);
      unaryExpression();
      break;
    }

    default:
      break;
    }
    setState(1064);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

CParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::CompilationUnitContext::EOF() {
  return getToken(CParser::EOF, 0);
}

CParser::TranslationUnitContext* CParser::CompilationUnitContext::translationUnit() {
  return getRuleContext<CParser::TranslationUnitContext>(0);
}


size_t CParser::CompilationUnitContext::getRuleIndex() const {
  return CParser::RuleCompilationUnit;
}

void CParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void CParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}

CParser::CompilationUnitContext* CParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 164, CParser::RuleCompilationUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1067);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & ((1ULL << (CParser::Star - 75))
      | (1ULL << (CParser::Caret - 75))
      | (1ULL << (CParser::Semi - 75))
      | (1ULL << (CParser::Identifier - 75)))) != 0)) {
      setState(1066);
      translationUnit();
    }
    setState(1069);
    match(CParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TranslationUnitContext ------------------------------------------------------------------

CParser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ExternalDeclarationContext *> CParser::TranslationUnitContext::externalDeclaration() {
  return getRuleContexts<CParser::ExternalDeclarationContext>();
}

CParser::ExternalDeclarationContext* CParser::TranslationUnitContext::externalDeclaration(size_t i) {
  return getRuleContext<CParser::ExternalDeclarationContext>(i);
}


size_t CParser::TranslationUnitContext::getRuleIndex() const {
  return CParser::RuleTranslationUnit;
}

void CParser::TranslationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationUnit(this);
}

void CParser::TranslationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationUnit(this);
}

CParser::TranslationUnitContext* CParser::translationUnit() {
  TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, getState());
  enterRule(_localctx, 166, CParser::RuleTranslationUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1072); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1071);
      externalDeclaration();
      setState(1074); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal)
      | (1ULL << CParser::LeftParen))) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & ((1ULL << (CParser::Star - 75))
      | (1ULL << (CParser::Caret - 75))
      | (1ULL << (CParser::Semi - 75))
      | (1ULL << (CParser::Identifier - 75)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternalDeclarationContext ------------------------------------------------------------------

CParser::ExternalDeclarationContext::ExternalDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::FunctionDefinitionContext* CParser::ExternalDeclarationContext::functionDefinition() {
  return getRuleContext<CParser::FunctionDefinitionContext>(0);
}

CParser::DeclarationContext* CParser::ExternalDeclarationContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}

tree::TerminalNode* CParser::ExternalDeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}


size_t CParser::ExternalDeclarationContext::getRuleIndex() const {
  return CParser::RuleExternalDeclaration;
}

void CParser::ExternalDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternalDeclaration(this);
}

void CParser::ExternalDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternalDeclaration(this);
}

CParser::ExternalDeclarationContext* CParser::externalDeclaration() {
  ExternalDeclarationContext *_localctx = _tracker.createInstance<ExternalDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 168, CParser::RuleExternalDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1079);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1076);
      functionDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1077);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1078);
      match(CParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

CParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::FunctionDefinitionContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::CompoundStatementContext* CParser::FunctionDefinitionContext::compoundStatement() {
  return getRuleContext<CParser::CompoundStatementContext>(0);
}

CParser::DeclarationSpecifiersContext* CParser::FunctionDefinitionContext::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}

CParser::DeclarationListContext* CParser::FunctionDefinitionContext::declarationList() {
  return getRuleContext<CParser::DeclarationListContext>(0);
}


size_t CParser::FunctionDefinitionContext::getRuleIndex() const {
  return CParser::RuleFunctionDefinition;
}

void CParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void CParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}

CParser::FunctionDefinitionContext* CParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 170, CParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1082);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx)) {
    case 1: {
      setState(1081);
      declarationSpecifiers();
      break;
    }

    default:
      break;
    }
    setState(1084);
    declarator();
    setState(1086);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal))) != 0) || _la == CParser::Identifier) {
      setState(1085);
      declarationList();
    }
    setState(1088);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationListContext ------------------------------------------------------------------

CParser::DeclarationListContext::DeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::DeclarationContext *> CParser::DeclarationListContext::declaration() {
  return getRuleContexts<CParser::DeclarationContext>();
}

CParser::DeclarationContext* CParser::DeclarationListContext::declaration(size_t i) {
  return getRuleContext<CParser::DeclarationContext>(i);
}


size_t CParser::DeclarationListContext::getRuleIndex() const {
  return CParser::RuleDeclarationList;
}

void CParser::DeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationList(this);
}

void CParser::DeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationList(this);
}

CParser::DeclarationListContext* CParser::declarationList() {
  DeclarationListContext *_localctx = _tracker.createInstance<DeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 172, CParser::RuleDeclarationList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1091); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1090);
      declaration();
      setState(1093); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Noreturn)
      | (1ULL << CParser::StaticAssert)
      | (1ULL << CParser::ThreadLocal))) != 0) || _la == CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 31: return typeSpecifierSempred(dynamic_cast<TypeSpecifierContext *>(context), predicateIndex);
    case 48: return directDeclaratorSempred(dynamic_cast<DirectDeclaratorContext *>(context), predicateIndex);
    case 62: return directAbstractDeclaratorSempred(dynamic_cast<DirectAbstractDeclaratorContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CParser::typeSpecifierSempred(TypeSpecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::directDeclaratorSempred(DirectDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);
    case 6: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool CParser::directAbstractDeclaratorSempred(DirectAbstractDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 5);
    case 8: return precpred(_ctx, 4);
    case 9: return precpred(_ctx, 3);
    case 10: return precpred(_ctx, 2);
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CParser::_decisionToDFA;
atn::PredictionContextCache CParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CParser::_atn;
std::vector<uint16_t> CParser::_serializedATN;

std::vector<std::string> CParser::_ruleNames = {
  "primaryExpression", "genericSelection", "genericAssocList", "genericAssociation", 
  "postfixExpression", "argumentExpressionList", "unaryExpression", "unaryOperator", 
  "castExpression", "multiplicativeExpression", "additiveExpression", "shiftExpression", 
  "relationalExpression", "equalityExpression", "andExpression", "exclusiveOrExpression", 
  "inclusiveOrExpression", "logicalAndExpression", "logicalOrExpression", 
  "conditionalExpression", "assignmentExpression", "assignmentOperator", 
  "expression", "constantExpression", "declaration", "declarationSpecifiers", 
  "declarationSpecifiers2", "declarationSpecifier", "initDeclaratorList", 
  "initDeclarator", "storageClassSpecifier", "typeSpecifier", "structOrUnionSpecifier", 
  "structOrUnion", "structDeclarationList", "structDeclaration", "specifierQualifierList", 
  "structDeclaratorList", "structDeclarator", "enumSpecifier", "enumeratorList", 
  "enumerator", "enumerationConstant", "atomicTypeSpecifier", "typeQualifier", 
  "functionSpecifier", "alignmentSpecifier", "declarator", "directDeclarator", 
  "gccDeclaratorExtension", "gccAttributeSpecifier", "gccAttributeList", 
  "gccAttribute", "nestedParenthesesBlock", "pointer", "typeQualifierList", 
  "parameterTypeList", "parameterList", "parameterDeclaration", "identifierList", 
  "typeName", "abstractDeclarator", "directAbstractDeclarator", "typedefName", 
  "initializer", "initializerList", "designation", "designatorList", "designator", 
  "staticAssertDeclaration", "statement", "labeledStatement", "compoundStatement", 
  "blockItemList", "blockItem", "expressionStatement", "selectionStatement", 
  "iterationStatement", "forCondition", "forDeclaration", "forExpression", 
  "jumpStatement", "compilationUnit", "translationUnit", "externalDeclaration", 
  "functionDefinition", "declarationList"
};

std::vector<std::string> CParser::_literalNames = {
  "", "'__extension__'", "'__builtin_va_arg'", "'__builtin_offsetof'", "'__m128'", 
  "'__m128d'", "'__m128i'", "'__typeof__'", "'__inline__'", "'__stdcall'", 
  "'__declspec'", "'__asm'", "'__attribute__'", "'__asm__'", "'__volatile__'", 
  "'auto'", "'break'", "'case'", "'char'", "'const'", "'continue'", "'default'", 
  "'do'", "'double'", "'else'", "'enum'", "'extern'", "'float'", "'for'", 
  "'goto'", "'if'", "'inline'", "'int'", "'long'", "'register'", "'restrict'", 
  "'return'", "'short'", "'signed'", "'sizeof'", "'static'", "'struct'", 
  "'switch'", "'typedef'", "'union'", "'unsigned'", "'void'", "'volatile'", 
  "'while'", "'_Alignas'", "'_Alignof'", "'_Atomic'", "'_Bool'", "'_Complex'", 
  "'_Generic'", "'_Imaginary'", "'_Noreturn'", "'_Static_assert'", "'_Thread_local'", 
  "'('", "')'", "'['", "']'", "'{'", "'}'", "'<'", "'<='", "'>'", "'>='", 
  "'<<'", "'>>'", "'+'", "'++'", "'-'", "'--'", "'*'", "'/'", "'%'", "'&'", 
  "'|'", "'&&'", "'||'", "'^'", "'!'", "'~'", "'\u003F'", "':'", "';'", 
  "','", "'='", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", "'>>='", 
  "'&='", "'^='", "'|='", "'=='", "'!='", "'->'", "'.'", "'...'"
};

std::vector<std::string> CParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "Auto", "Break", 
  "Case", "Char", "Const", "Continue", "Default", "Do", "Double", "Else", 
  "Enum", "Extern", "Float", "For", "Goto", "If", "Inline", "Int", "Long", 
  "Register", "Restrict", "Return", "Short", "Signed", "Sizeof", "Static", 
  "Struct", "Switch", "Typedef", "Union", "Unsigned", "Void", "Volatile", 
  "While", "Alignas", "Alignof", "Atomic", "Bool", "Complex", "Generic", 
  "Imaginary", "Noreturn", "StaticAssert", "ThreadLocal", "LeftParen", "RightParen", 
  "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", "Less", "LessEqual", 
  "Greater", "GreaterEqual", "LeftShift", "RightShift", "Plus", "PlusPlus", 
  "Minus", "MinusMinus", "Star", "Div", "Mod", "And", "Or", "AndAnd", "OrOr", 
  "Caret", "Not", "Tilde", "Question", "Colon", "Semi", "Comma", "Assign", 
  "StarAssign", "DivAssign", "ModAssign", "PlusAssign", "MinusAssign", "LeftShiftAssign", 
  "RightShiftAssign", "AndAssign", "XorAssign", "OrAssign", "Equal", "NotEqual", 
  "Arrow", "Dot", "Ellipsis", "Identifier", "Constant", "DigitSequence", 
  "StringLiteral", "ComplexDefine", "IncludeDirective", "AsmBlock", "LineAfterPreprocessing", 
  "LineDirective", "PragmaDirective", "Whitespace", "Newline", "BlockComment", 
  "LineComment"
};

dfa::Vocabulary CParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CParser::_tokenNames;

CParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x78, 0x44a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0xb4, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
       0xb5, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x5, 0x2, 0xbe, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x5, 0x2, 0xd2, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x7, 0x4, 0xde, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xe1, 0xb, 0x4, 
       0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xe5, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xec, 0xa, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xf4, 
       0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xf8, 0xa, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x100, 
       0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x106, 
       0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x109, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x7, 0x7, 0x10e, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x111, 0xb, 
       0x7, 0x3, 0x8, 0x7, 0x8, 0x114, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x117, 
       0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
       0x124, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x5, 0xa, 0x129, 0xa, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x5, 0xa, 0x132, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x7, 0xb, 0x137, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x13a, 0xb, 0xb, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x13f, 0xa, 0xc, 0xc, 0xc, 0xe, 
       0xc, 0x142, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x147, 
       0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x14a, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x7, 0xe, 0x14f, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x152, 0xb, 
       0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x157, 0xa, 0xf, 0xc, 
       0xf, 0xe, 0xf, 0x15a, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x7, 0x10, 0x15f, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x162, 0xb, 0x10, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x167, 0xa, 0x11, 0xc, 
       0x11, 0xe, 0x11, 0x16a, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x7, 0x12, 0x16f, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x172, 0xb, 0x12, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x177, 0xa, 0x13, 0xc, 
       0x13, 0xe, 0x13, 0x17a, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x7, 0x14, 0x17f, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x182, 0xb, 0x14, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
       0x5, 0x15, 0x18a, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x192, 0xa, 0x16, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x199, 0xa, 
       0x18, 0xc, 0x18, 0xe, 0x18, 0x19c, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x1a2, 0xa, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x1a7, 0xa, 0x1a, 0x3, 0x1b, 0x6, 0x1b, 
       0x1aa, 0xa, 0x1b, 0xd, 0x1b, 0xe, 0x1b, 0x1ab, 0x3, 0x1c, 0x6, 0x1c, 
       0x1af, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x1b0, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x1b8, 0xa, 0x1d, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x1bd, 0xa, 0x1e, 0xc, 0x1e, 
       0xe, 0x1e, 0x1c0, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 
       0x1f, 0x1c5, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x5, 0x21, 0x1d8, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 
       0x21, 0x1dc, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x1df, 0xb, 0x21, 0x3, 
       0x22, 0x3, 0x22, 0x5, 0x22, 0x1e3, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 
       0x1ec, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x6, 0x24, 0x1f1, 
       0xa, 0x24, 0xd, 0x24, 0xe, 0x24, 0x1f2, 0x3, 0x25, 0x3, 0x25, 0x5, 
       0x25, 0x1f7, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 
       0x1fc, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x200, 0xa, 0x26, 
       0x3, 0x26, 0x5, 0x26, 0x203, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 
       0x27, 0x7, 0x27, 0x208, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x20b, 0xb, 
       0x27, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x20f, 0xa, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x5, 0x28, 0x213, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x5, 
       0x29, 0x217, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 
       0x21c, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 
       0x29, 0x222, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 
       0x227, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x22a, 0xb, 0x2a, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x22f, 0xa, 0x2b, 0x3, 0x2c, 0x3, 
       0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x240, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 
       0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x246, 0xa, 0x30, 0x3, 0x30, 0x3, 
       0x30, 0x3, 0x31, 0x5, 0x31, 0x24b, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x7, 0x31, 0x24f, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x252, 0xb, 0x31, 
       0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
       0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 
       0x25f, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 
       0x32, 0x265, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 
       0x26a, 0xa, 0x32, 0x3, 0x32, 0x5, 0x32, 0x26d, 0xa, 0x32, 0x3, 0x32, 
       0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x274, 0xa, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
       0x32, 0x3, 0x32, 0x5, 0x32, 0x283, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 
       0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
       0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x28f, 0xa, 0x32, 0x3, 0x32, 0x7, 
       0x32, 0x292, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x295, 0xb, 0x32, 0x3, 
       0x33, 0x3, 0x33, 0x3, 0x33, 0x6, 0x33, 0x29a, 0xa, 0x33, 0xd, 0x33, 
       0xe, 0x33, 0x29b, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x2a0, 0xa, 0x33, 
       0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
       0x3, 0x34, 0x3, 0x35, 0x5, 0x35, 0x2aa, 0xa, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x5, 0x35, 0x2ae, 0xa, 0x35, 0x7, 0x35, 0x2b0, 0xa, 0x35, 0xc, 
       0x35, 0xe, 0x35, 0x2b3, 0xb, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
       0x5, 0x36, 0x2b8, 0xa, 0x36, 0x3, 0x36, 0x5, 0x36, 0x2bb, 0xa, 0x36, 
       0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x7, 0x37, 
       0x2c2, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x2c5, 0xb, 0x37, 0x3, 0x38, 
       0x3, 0x38, 0x5, 0x38, 0x2c9, 0xa, 0x38, 0x6, 0x38, 0x2cb, 0xa, 0x38, 
       0xd, 0x38, 0xe, 0x38, 0x2cc, 0x3, 0x39, 0x6, 0x39, 0x2d0, 0xa, 0x39, 
       0xd, 0x39, 0xe, 0x39, 0x2d1, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 
       0x3a, 0x2d7, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 
       0x2dc, 0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x2df, 0xb, 0x3b, 0x3, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2e6, 0xa, 
       0x3c, 0x5, 0x3c, 0x2e8, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
       0x7, 0x3d, 0x2ed, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 0x2f0, 0xb, 0x3d, 
       0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x2f4, 0xa, 0x3e, 0x3, 0x3f, 0x3, 
       0x3f, 0x5, 0x3f, 0x2f8, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 
       0x2fc, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x2ff, 0xb, 0x3f, 0x5, 0x3f, 
       0x301, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x7, 0x40, 0x308, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 0x30b, 0xb, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x30f, 0xa, 0x40, 0x3, 0x40, 
       0x5, 0x40, 0x312, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x5, 0x40, 0x318, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
       0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
       0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 
       0x328, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 0x32c, 0xa, 0x40, 
       0xc, 0x40, 0xe, 0x40, 0x32f, 0xb, 0x40, 0x5, 0x40, 0x331, 0xa, 0x40, 
       0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x336, 0xa, 0x40, 0x3, 
       0x40, 0x5, 0x40, 0x339, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
       0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x340, 0xa, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x353, 0xa, 0x40, 
       0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 0x357, 0xa, 0x40, 0xc, 0x40, 0xe, 
       0x40, 0x35a, 0xb, 0x40, 0x7, 0x40, 0x35c, 0xa, 0x40, 0xc, 0x40, 0xe, 
       0x40, 0x35f, 0xb, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 
       0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x367, 0xa, 0x42, 0x3, 0x42, 0x3, 
       0x42, 0x5, 0x42, 0x36b, 0xa, 0x42, 0x3, 0x43, 0x5, 0x43, 0x36e, 0xa, 
       0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x373, 0xa, 0x43, 
       0x3, 0x43, 0x7, 0x43, 0x376, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 0x379, 
       0xb, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x6, 0x45, 
       0x37f, 0xa, 0x45, 0xd, 0x45, 0xe, 0x45, 0x380, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x389, 0xa, 
       0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x6, 
       0x47, 0x390, 0xa, 0x47, 0xd, 0x47, 0xe, 0x47, 0x391, 0x3, 0x47, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x3, 0x48, 0x7, 0x48, 0x3a3, 0xa, 0x48, 0xc, 0x48, 0xe, 0x48, 
       0x3a6, 0xb, 0x48, 0x5, 0x48, 0x3a8, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 
       0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x3ae, 0xa, 0x48, 0xc, 0x48, 0xe, 
       0x48, 0x3b1, 0xb, 0x48, 0x5, 0x48, 0x3b3, 0xa, 0x48, 0x7, 0x48, 0x3b5, 
       0xa, 0x48, 0xc, 0x48, 0xe, 0x48, 0x3b8, 0xb, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x5, 0x48, 0x3bc, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
       0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
       0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x3c9, 0xa, 0x49, 0x3, 0x4a, 0x3, 
       0x4a, 0x5, 0x4a, 0x3cd, 0xa, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 
       0x6, 0x4b, 0x3d2, 0xa, 0x4b, 0xd, 0x4b, 0xe, 0x4b, 0x3d3, 0x3, 0x4c, 
       0x3, 0x4c, 0x5, 0x4c, 0x3d8, 0xa, 0x4c, 0x3, 0x4d, 0x5, 0x4d, 0x3db, 
       0xa, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
       0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x3e6, 0xa, 
       0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
       0x4e, 0x5, 0x4e, 0x3ee, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 
       0x404, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x408, 0xa, 0x50, 
       0x5, 0x50, 0x40a, 0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x40e, 
       0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x412, 0xa, 0x50, 0x3, 
       0x51, 0x3, 0x51, 0x5, 0x51, 0x416, 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 
       0x3, 0x52, 0x7, 0x52, 0x41b, 0xa, 0x52, 0xc, 0x52, 0xe, 0x52, 0x41e, 
       0xb, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x5, 0x53, 0x425, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x429, 
       0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x5, 0x54, 0x42e, 0xa, 
       0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x6, 0x55, 0x433, 0xa, 0x55, 
       0xd, 0x55, 0xe, 0x55, 0x434, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 
       0x56, 0x43a, 0xa, 0x56, 0x3, 0x57, 0x5, 0x57, 0x43d, 0xa, 0x57, 0x3, 
       0x57, 0x3, 0x57, 0x5, 0x57, 0x441, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 
       0x3, 0x58, 0x6, 0x58, 0x446, 0xa, 0x58, 0xd, 0x58, 0xe, 0x58, 0x447, 
       0x3, 0x58, 0x2, 0x5, 0x40, 0x62, 0x7e, 0x59, 0x2, 0x4, 0x6, 0x8, 
       0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
       0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
       0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
       0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 
       0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
       0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
       0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 
       0xa6, 0xa8, 0xaa, 0xac, 0xae, 0x2, 0x19, 0x3, 0x2, 0x68, 0x69, 0x4, 
       0x2, 0x4a, 0x4a, 0x4c, 0x4c, 0x5, 0x2, 0x29, 0x29, 0x4a, 0x4a, 0x4c, 
       0x4c, 0x4, 0x2, 0x29, 0x29, 0x34, 0x34, 0x7, 0x2, 0x49, 0x49, 0x4b, 
       0x4b, 0x4d, 0x4d, 0x50, 0x50, 0x55, 0x56, 0x3, 0x2, 0x4d, 0x4f, 0x4, 
       0x2, 0x49, 0x49, 0x4b, 0x4b, 0x3, 0x2, 0x47, 0x48, 0x3, 0x2, 0x43, 
       0x46, 0x3, 0x2, 0x66, 0x67, 0x3, 0x2, 0x5b, 0x65, 0x8, 0x2, 0x11, 
       0x11, 0x1c, 0x1c, 0x24, 0x24, 0x2a, 0x2a, 0x2d, 0x2d, 0x3c, 0x3c, 
       0xa, 0x2, 0x6, 0x8, 0x14, 0x14, 0x19, 0x19, 0x1d, 0x1d, 0x22, 0x23, 
       0x27, 0x28, 0x2f, 0x30, 0x36, 0x37, 0x3, 0x2, 0x6, 0x8, 0x4, 0x2, 
       0x2b, 0x2b, 0x2e, 0x2e, 0x6, 0x2, 0x15, 0x15, 0x25, 0x25, 0x31, 0x31, 
       0x35, 0x35, 0x5, 0x2, 0xa, 0xb, 0x21, 0x21, 0x3a, 0x3a, 0x4, 0x2, 
       0x3d, 0x3e, 0x5a, 0x5a, 0x3, 0x2, 0x3d, 0x3e, 0x4, 0x2, 0x4d, 0x4d, 
       0x54, 0x54, 0x4, 0x2, 0xd, 0xd, 0xf, 0xf, 0x4, 0x2, 0x10, 0x10, 0x31, 
       0x31, 0x4, 0x2, 0x12, 0x12, 0x16, 0x16, 0x2, 0x4a7, 0x2, 0xd1, 0x3, 
       0x2, 0x2, 0x2, 0x4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x6, 0xda, 0x3, 0x2, 
       0x2, 0x2, 0x8, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xa, 0xf7, 0x3, 0x2, 0x2, 
       0x2, 0xc, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xe, 0x115, 0x3, 0x2, 0x2, 0x2, 
       0x10, 0x125, 0x3, 0x2, 0x2, 0x2, 0x12, 0x131, 0x3, 0x2, 0x2, 0x2, 
       0x14, 0x133, 0x3, 0x2, 0x2, 0x2, 0x16, 0x13b, 0x3, 0x2, 0x2, 0x2, 
       0x18, 0x143, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x14b, 0x3, 0x2, 0x2, 0x2, 
       0x1c, 0x153, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x15b, 0x3, 0x2, 0x2, 0x2, 
       0x20, 0x163, 0x3, 0x2, 0x2, 0x2, 0x22, 0x16b, 0x3, 0x2, 0x2, 0x2, 
       0x24, 0x173, 0x3, 0x2, 0x2, 0x2, 0x26, 0x17b, 0x3, 0x2, 0x2, 0x2, 
       0x28, 0x183, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x191, 0x3, 0x2, 0x2, 0x2, 
       0x2c, 0x193, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x195, 0x3, 0x2, 0x2, 0x2, 
       0x30, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1a6, 0x3, 0x2, 0x2, 0x2, 
       0x34, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1ae, 0x3, 0x2, 0x2, 0x2, 
       0x38, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
       0x3c, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1c6, 0x3, 0x2, 0x2, 0x2, 
       0x40, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1eb, 0x3, 0x2, 0x2, 0x2, 
       0x44, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1f0, 0x3, 0x2, 0x2, 0x2, 
       0x48, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1ff, 0x3, 0x2, 0x2, 0x2, 
       0x4c, 0x204, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x212, 0x3, 0x2, 0x2, 0x2, 
       0x50, 0x221, 0x3, 0x2, 0x2, 0x2, 0x52, 0x223, 0x3, 0x2, 0x2, 0x2, 
       0x54, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x56, 0x230, 0x3, 0x2, 0x2, 0x2, 
       0x58, 0x232, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x237, 0x3, 0x2, 0x2, 0x2, 
       0x5c, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x241, 0x3, 0x2, 0x2, 0x2, 
       0x60, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x62, 0x264, 0x3, 0x2, 0x2, 0x2, 
       0x64, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x66, 0x2a1, 0x3, 0x2, 0x2, 0x2, 
       0x68, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2b4, 0x3, 0x2, 0x2, 0x2, 
       0x6c, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2ca, 0x3, 0x2, 0x2, 0x2, 
       0x70, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2d3, 0x3, 0x2, 0x2, 0x2, 
       0x74, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2e7, 0x3, 0x2, 0x2, 0x2, 
       0x78, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x2f1, 0x3, 0x2, 0x2, 0x2, 
       0x7c, 0x300, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x330, 0x3, 0x2, 0x2, 0x2, 
       0x80, 0x360, 0x3, 0x2, 0x2, 0x2, 0x82, 0x36a, 0x3, 0x2, 0x2, 0x2, 
       0x84, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x86, 0x37a, 0x3, 0x2, 0x2, 0x2, 
       0x88, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x388, 0x3, 0x2, 0x2, 0x2, 
       0x8c, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x3bb, 0x3, 0x2, 0x2, 0x2, 
       0x90, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x92, 0x3ca, 0x3, 0x2, 0x2, 0x2, 
       0x94, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x96, 0x3d7, 0x3, 0x2, 0x2, 0x2, 
       0x98, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x3ed, 0x3, 0x2, 0x2, 0x2, 
       0x9c, 0x403, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x409, 0x3, 0x2, 0x2, 0x2, 
       0xa0, 0x413, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x417, 0x3, 0x2, 0x2, 0x2, 
       0xa4, 0x428, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x42d, 0x3, 0x2, 0x2, 0x2, 
       0xa8, 0x432, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x439, 0x3, 0x2, 0x2, 0x2, 
       0xac, 0x43c, 0x3, 0x2, 0x2, 0x2, 0xae, 0x445, 0x3, 0x2, 0x2, 0x2, 
       0xb0, 0xd2, 0x7, 0x6b, 0x2, 0x2, 0xb1, 0xd2, 0x7, 0x6c, 0x2, 0x2, 
       0xb2, 0xb4, 0x7, 0x6e, 0x2, 0x2, 0xb3, 0xb2, 0x3, 0x2, 0x2, 0x2, 
       0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 
       0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 
       0x7, 0x3d, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x2e, 0x18, 0x2, 0xb9, 0xba, 
       0x7, 0x3e, 0x2, 0x2, 0xba, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xd2, 
       0x5, 0x4, 0x3, 0x2, 0xbc, 0xbe, 0x7, 0x3, 0x2, 0x2, 0xbd, 0xbc, 0x3, 
       0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 
       0x2, 0x2, 0xbf, 0xc0, 0x7, 0x3d, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0x92, 
       0x4a, 0x2, 0xc1, 0xc2, 0x7, 0x3e, 0x2, 0x2, 0xc2, 0xd2, 0x3, 0x2, 
       0x2, 0x2, 0xc3, 0xc4, 0x7, 0x4, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x3d, 
       0x2, 0x2, 0xc5, 0xc6, 0x5, 0xe, 0x8, 0x2, 0xc6, 0xc7, 0x7, 0x5a, 
       0x2, 0x2, 0xc7, 0xc8, 0x5, 0x7a, 0x3e, 0x2, 0xc8, 0xc9, 0x7, 0x3e, 
       0x2, 0x2, 0xc9, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x5, 0x2, 
       0x2, 0xcb, 0xcc, 0x7, 0x3d, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x7a, 0x3e, 
       0x2, 0xcd, 0xce, 0x7, 0x5a, 0x2, 0x2, 0xce, 0xcf, 0x5, 0xe, 0x8, 
       0x2, 0xcf, 0xd0, 0x7, 0x3e, 0x2, 0x2, 0xd0, 0xd2, 0x3, 0x2, 0x2, 
       0x2, 0xd1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xb1, 0x3, 0x2, 0x2, 0x2, 
       0xd1, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xd1, 
       0xbb, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xc3, 
       0x3, 0x2, 0x2, 0x2, 0xd1, 0xca, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x38, 0x2, 0x2, 0xd4, 0xd5, 0x7, 
       0x3d, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x2a, 0x16, 0x2, 0xd6, 0xd7, 0x7, 
       0x5a, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x6, 0x4, 0x2, 0xd8, 0xd9, 0x7, 
       0x3e, 0x2, 0x2, 0xd9, 0x5, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdf, 0x5, 0x8, 
       0x5, 0x2, 0xdb, 0xdc, 0x7, 0x5a, 0x2, 0x2, 0xdc, 0xde, 0x5, 0x8, 
       0x5, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe1, 0x3, 0x2, 0x2, 
       0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 0x2, 
       0xe0, 0x7, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe2, 
       0xe5, 0x5, 0x7a, 0x3e, 0x2, 0xe3, 0xe5, 0x7, 0x17, 0x2, 0x2, 0xe4, 
       0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 
       0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x58, 0x2, 0x2, 0xe7, 0xe8, 
       0x5, 0x2a, 0x16, 0x2, 0xe8, 0x9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xf8, 
       0x5, 0x2, 0x2, 0x2, 0xea, 0xec, 0x7, 0x3, 0x2, 0x2, 0xeb, 0xea, 0x3, 
       0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 
       0x2, 0x2, 0xed, 0xee, 0x7, 0x3d, 0x2, 0x2, 0xee, 0xef, 0x5, 0x7a, 
       0x3e, 0x2, 0xef, 0xf0, 0x7, 0x3e, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x41, 
       0x2, 0x2, 0xf1, 0xf3, 0x5, 0x84, 0x43, 0x2, 0xf2, 0xf4, 0x7, 0x5a, 
       0x2, 0x2, 0xf3, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 
       0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x42, 0x2, 
       0x2, 0xf6, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xe9, 0x3, 0x2, 0x2, 0x2, 
       0xf7, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x107, 0x3, 0x2, 0x2, 0x2, 
       0xf9, 0xfa, 0x7, 0x3f, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x2e, 0x18, 0x2, 
       0xfb, 0xfc, 0x7, 0x40, 0x2, 0x2, 0xfc, 0x106, 0x3, 0x2, 0x2, 0x2, 
       0xfd, 0xff, 0x7, 0x3d, 0x2, 0x2, 0xfe, 0x100, 0x5, 0xc, 0x7, 0x2, 
       0xff, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 
       0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0x106, 0x7, 0x3e, 0x2, 0x2, 
       0x102, 0x103, 0x9, 0x2, 0x2, 0x2, 0x103, 0x106, 0x7, 0x6b, 0x2, 0x2, 
       0x104, 0x106, 0x9, 0x3, 0x2, 0x2, 0x105, 0xf9, 0x3, 0x2, 0x2, 0x2, 
       0x105, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x105, 0x102, 0x3, 0x2, 0x2, 0x2, 
       0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x109, 0x3, 0x2, 0x2, 0x2, 
       0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 
       0x108, 0xb, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 
       0x10a, 0x10f, 0x5, 0x2a, 0x16, 0x2, 0x10b, 0x10c, 0x7, 0x5a, 0x2, 
       0x2, 0x10c, 0x10e, 0x5, 0x2a, 0x16, 0x2, 0x10d, 0x10b, 0x3, 0x2, 
       0x2, 0x2, 0x10e, 0x111, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 0x3, 0x2, 
       0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x112, 0x114, 0x9, 0x4, 
       0x2, 0x2, 0x113, 0x112, 0x3, 0x2, 0x2, 0x2, 0x114, 0x117, 0x3, 0x2, 
       0x2, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x3, 0x2, 
       0x2, 0x2, 0x116, 0x123, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 0x2, 
       0x2, 0x2, 0x118, 0x124, 0x5, 0xa, 0x6, 0x2, 0x119, 0x11a, 0x5, 0x10, 
       0x9, 0x2, 0x11a, 0x11b, 0x5, 0x12, 0xa, 0x2, 0x11b, 0x124, 0x3, 0x2, 
       0x2, 0x2, 0x11c, 0x11d, 0x9, 0x5, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x3d, 
       0x2, 0x2, 0x11e, 0x11f, 0x5, 0x7a, 0x3e, 0x2, 0x11f, 0x120, 0x7, 
       0x3e, 0x2, 0x2, 0x120, 0x124, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x7, 
       0x52, 0x2, 0x2, 0x122, 0x124, 0x7, 0x6b, 0x2, 0x2, 0x123, 0x118, 
       0x3, 0x2, 0x2, 0x2, 0x123, 0x119, 0x3, 0x2, 0x2, 0x2, 0x123, 0x11c, 
       0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 0x124, 0xf, 
       0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x9, 0x6, 0x2, 0x2, 0x126, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x127, 0x129, 0x7, 0x3, 0x2, 0x2, 0x128, 0x127, 
       0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 
       0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x3d, 0x2, 0x2, 0x12b, 0x12c, 
       0x5, 0x7a, 0x3e, 0x2, 0x12c, 0x12d, 0x7, 0x3e, 0x2, 0x2, 0x12d, 0x12e, 
       0x5, 0x12, 0xa, 0x2, 0x12e, 0x132, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 
       0x5, 0xe, 0x8, 0x2, 0x130, 0x132, 0x7, 0x6d, 0x2, 0x2, 0x131, 0x128, 
       0x3, 0x2, 0x2, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x130, 
       0x3, 0x2, 0x2, 0x2, 0x132, 0x13, 0x3, 0x2, 0x2, 0x2, 0x133, 0x138, 
       0x5, 0x12, 0xa, 0x2, 0x134, 0x135, 0x9, 0x7, 0x2, 0x2, 0x135, 0x137, 
       0x5, 0x12, 0xa, 0x2, 0x136, 0x134, 0x3, 0x2, 0x2, 0x2, 0x137, 0x13a, 
       0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 
       0x3, 0x2, 0x2, 0x2, 0x139, 0x15, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 
       0x3, 0x2, 0x2, 0x2, 0x13b, 0x140, 0x5, 0x14, 0xb, 0x2, 0x13c, 0x13d, 
       0x9, 0x8, 0x2, 0x2, 0x13d, 0x13f, 0x5, 0x14, 0xb, 0x2, 0x13e, 0x13c, 
       0x3, 0x2, 0x2, 0x2, 0x13f, 0x142, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13e, 
       0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x143, 0x148, 
       0x5, 0x16, 0xc, 0x2, 0x144, 0x145, 0x9, 0x9, 0x2, 0x2, 0x145, 0x147, 
       0x5, 0x16, 0xc, 0x2, 0x146, 0x144, 0x3, 0x2, 0x2, 0x2, 0x147, 0x14a, 
       0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 
       0x3, 0x2, 0x2, 0x2, 0x149, 0x19, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 
       0x3, 0x2, 0x2, 0x2, 0x14b, 0x150, 0x5, 0x18, 0xd, 0x2, 0x14c, 0x14d, 
       0x9, 0xa, 0x2, 0x2, 0x14d, 0x14f, 0x5, 0x18, 0xd, 0x2, 0x14e, 0x14c, 
       0x3, 0x2, 0x2, 0x2, 0x14f, 0x152, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 
       0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x153, 0x158, 
       0x5, 0x1a, 0xe, 0x2, 0x154, 0x155, 0x9, 0xb, 0x2, 0x2, 0x155, 0x157, 
       0x5, 0x1a, 0xe, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 0x157, 0x15a, 
       0x3, 0x2, 0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 
       0x3, 0x2, 0x2, 0x2, 0x159, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x158, 
       0x3, 0x2, 0x2, 0x2, 0x15b, 0x160, 0x5, 0x1c, 0xf, 0x2, 0x15c, 0x15d, 
       0x7, 0x50, 0x2, 0x2, 0x15d, 0x15f, 0x5, 0x1c, 0xf, 0x2, 0x15e, 0x15c, 
       0x3, 0x2, 0x2, 0x2, 0x15f, 0x162, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 
       0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 0x163, 0x168, 
       0x5, 0x1e, 0x10, 0x2, 0x164, 0x165, 0x7, 0x54, 0x2, 0x2, 0x165, 0x167, 
       0x5, 0x1e, 0x10, 0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x167, 0x16a, 
       0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 
       0x3, 0x2, 0x2, 0x2, 0x169, 0x21, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x168, 
       0x3, 0x2, 0x2, 0x2, 0x16b, 0x170, 0x5, 0x20, 0x11, 0x2, 0x16c, 0x16d, 
       0x7, 0x51, 0x2, 0x2, 0x16d, 0x16f, 0x5, 0x20, 0x11, 0x2, 0x16e, 0x16c, 
       0x3, 0x2, 0x2, 0x2, 0x16f, 0x172, 0x3, 0x2, 0x2, 0x2, 0x170, 0x16e, 
       0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 0x2, 0x2, 0x171, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x173, 0x178, 
       0x5, 0x22, 0x12, 0x2, 0x174, 0x175, 0x7, 0x52, 0x2, 0x2, 0x175, 0x177, 
       0x5, 0x22, 0x12, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x177, 0x17a, 
       0x3, 0x2, 0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 
       0x3, 0x2, 0x2, 0x2, 0x179, 0x25, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x178, 
       0x3, 0x2, 0x2, 0x2, 0x17b, 0x180, 0x5, 0x24, 0x13, 0x2, 0x17c, 0x17d, 
       0x7, 0x53, 0x2, 0x2, 0x17d, 0x17f, 0x5, 0x24, 0x13, 0x2, 0x17e, 0x17c, 
       0x3, 0x2, 0x2, 0x2, 0x17f, 0x182, 0x3, 0x2, 0x2, 0x2, 0x180, 0x17e, 
       0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x3, 0x2, 0x2, 0x2, 0x181, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 0x183, 0x189, 
       0x5, 0x26, 0x14, 0x2, 0x184, 0x185, 0x7, 0x57, 0x2, 0x2, 0x185, 0x186, 
       0x5, 0x2e, 0x18, 0x2, 0x186, 0x187, 0x7, 0x58, 0x2, 0x2, 0x187, 0x188, 
       0x5, 0x28, 0x15, 0x2, 0x188, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x189, 0x184, 
       0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x18b, 0x192, 0x5, 0x28, 0x15, 0x2, 0x18c, 0x18d, 
       0x5, 0xe, 0x8, 0x2, 0x18d, 0x18e, 0x5, 0x2c, 0x17, 0x2, 0x18e, 0x18f, 
       0x5, 0x2a, 0x16, 0x2, 0x18f, 0x192, 0x3, 0x2, 0x2, 0x2, 0x190, 0x192, 
       0x7, 0x6d, 0x2, 0x2, 0x191, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x191, 0x18c, 
       0x3, 0x2, 0x2, 0x2, 0x191, 0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x9, 0xc, 0x2, 0x2, 0x194, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x195, 0x19a, 0x5, 0x2a, 0x16, 0x2, 0x196, 0x197, 
       0x7, 0x5a, 0x2, 0x2, 0x197, 0x199, 0x5, 0x2a, 0x16, 0x2, 0x198, 0x196, 
       0x3, 0x2, 0x2, 0x2, 0x199, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x198, 
       0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 
       0x5, 0x28, 0x15, 0x2, 0x19e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a1, 
       0x5, 0x34, 0x1b, 0x2, 0x1a0, 0x1a2, 0x5, 0x3a, 0x1e, 0x2, 0x1a1, 
       0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
       0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 0x59, 0x2, 0x2, 0x1a4, 
       0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a7, 0x5, 0x8c, 0x47, 0x2, 0x1a6, 
       0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1aa, 0x5, 0x38, 0x1d, 0x2, 0x1a9, 
       0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 
       0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1af, 0x5, 0x38, 0x1d, 0x2, 0x1ae, 
       0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 
       0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b8, 0x5, 0x3e, 0x20, 0x2, 0x1b3, 
       0x1b8, 0x5, 0x40, 0x21, 0x2, 0x1b4, 0x1b8, 0x5, 0x5a, 0x2e, 0x2, 
       0x1b5, 0x1b8, 0x5, 0x5c, 0x2f, 0x2, 0x1b6, 0x1b8, 0x5, 0x5e, 0x30, 
       0x2, 0x1b7, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b3, 0x3, 0x2, 0x2, 
       0x2, 0x1b7, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 
       0x2, 0x1b7, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x39, 0x3, 0x2, 0x2, 
       0x2, 0x1b9, 0x1be, 0x5, 0x3c, 0x1f, 0x2, 0x1ba, 0x1bb, 0x7, 0x5a, 
       0x2, 0x2, 0x1bb, 0x1bd, 0x5, 0x3c, 0x1f, 0x2, 0x1bc, 0x1ba, 0x3, 
       0x2, 0x2, 0x2, 0x1bd, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bc, 0x3, 
       0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x3b, 0x3, 
       0x2, 0x2, 0x2, 0x1c0, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c4, 0x5, 
       0x60, 0x31, 0x2, 0x1c2, 0x1c3, 0x7, 0x5b, 0x2, 0x2, 0x1c3, 0x1c5, 
       0x5, 0x82, 0x42, 0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 
       0x3, 0x2, 0x2, 0x2, 0x1c5, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 
       0x9, 0xd, 0x2, 0x2, 0x1c7, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 
       0x8, 0x21, 0x1, 0x2, 0x1c9, 0x1d8, 0x9, 0xe, 0x2, 0x2, 0x1ca, 0x1cb, 
       0x7, 0x3, 0x2, 0x2, 0x1cb, 0x1cc, 0x7, 0x3d, 0x2, 0x2, 0x1cc, 0x1cd, 
       0x9, 0xf, 0x2, 0x2, 0x1cd, 0x1d8, 0x7, 0x3e, 0x2, 0x2, 0x1ce, 0x1d8, 
       0x5, 0x58, 0x2d, 0x2, 0x1cf, 0x1d8, 0x5, 0x42, 0x22, 0x2, 0x1d0, 
       0x1d8, 0x5, 0x50, 0x29, 0x2, 0x1d1, 0x1d8, 0x5, 0x80, 0x41, 0x2, 
       0x1d2, 0x1d3, 0x7, 0x9, 0x2, 0x2, 0x1d3, 0x1d4, 0x7, 0x3d, 0x2, 0x2, 
       0x1d4, 0x1d5, 0x5, 0x30, 0x19, 0x2, 0x1d5, 0x1d6, 0x7, 0x3e, 0x2, 
       0x2, 0x1d6, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1c8, 0x3, 0x2, 0x2, 
       0x2, 0x1d7, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1ce, 0x3, 0x2, 0x2, 
       0x2, 0x1d7, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d0, 0x3, 0x2, 0x2, 
       0x2, 0x1d7, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d2, 0x3, 0x2, 0x2, 
       0x2, 0x1d8, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0xc, 0x3, 0x2, 
       0x2, 0x1da, 0x1dc, 0x5, 0x6e, 0x38, 0x2, 0x1db, 0x1d9, 0x3, 0x2, 
       0x2, 0x2, 0x1dc, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1db, 0x3, 0x2, 
       0x2, 0x2, 0x1dd, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x41, 0x3, 0x2, 
       0x2, 0x2, 0x1df, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e2, 0x5, 0x44, 
       0x23, 0x2, 0x1e1, 0x1e3, 0x7, 0x6b, 0x2, 0x2, 0x1e2, 0x1e1, 0x3, 
       0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 
       0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x7, 0x41, 0x2, 0x2, 0x1e5, 0x1e6, 0x5, 
       0x46, 0x24, 0x2, 0x1e6, 0x1e7, 0x7, 0x42, 0x2, 0x2, 0x1e7, 0x1ec, 
       0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x5, 0x44, 0x23, 0x2, 0x1e9, 0x1ea, 
       0x7, 0x6b, 0x2, 0x2, 0x1ea, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1e0, 
       0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x9, 0x10, 0x2, 0x2, 0x1ee, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f1, 0x5, 0x48, 0x25, 0x2, 0x1f0, 0x1ef, 
       0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f0, 
       0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f6, 0x5, 0x4a, 0x26, 0x2, 0x1f5, 0x1f7, 
       0x5, 0x4c, 0x27, 0x2, 0x1f6, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 
       0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 
       0x7, 0x59, 0x2, 0x2, 0x1f9, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fc, 
       0x5, 0x8c, 0x47, 0x2, 0x1fb, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fa, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x200, 
       0x5, 0x40, 0x21, 0x2, 0x1fe, 0x200, 0x5, 0x5a, 0x2e, 0x2, 0x1ff, 
       0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 
       0x202, 0x3, 0x2, 0x2, 0x2, 0x201, 0x203, 0x5, 0x4a, 0x26, 0x2, 0x202, 
       0x201, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 0x2, 0x2, 0x203, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x204, 0x209, 0x5, 0x4e, 0x28, 0x2, 0x205, 
       0x206, 0x7, 0x5a, 0x2, 0x2, 0x206, 0x208, 0x5, 0x4e, 0x28, 0x2, 0x207, 
       0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x209, 
       0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 
       0x4d, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20c, 
       0x213, 0x5, 0x60, 0x31, 0x2, 0x20d, 0x20f, 0x5, 0x60, 0x31, 0x2, 
       0x20e, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 0x3, 0x2, 0x2, 0x2, 
       0x20f, 0x210, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x7, 0x58, 0x2, 0x2, 
       0x211, 0x213, 0x5, 0x30, 0x19, 0x2, 0x212, 0x20c, 0x3, 0x2, 0x2, 
       0x2, 0x212, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x213, 0x4f, 0x3, 0x2, 0x2, 
       0x2, 0x214, 0x216, 0x7, 0x1b, 0x2, 0x2, 0x215, 0x217, 0x7, 0x6b, 
       0x2, 0x2, 0x216, 0x215, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 
       0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x7, 0x41, 
       0x2, 0x2, 0x219, 0x21b, 0x5, 0x52, 0x2a, 0x2, 0x21a, 0x21c, 0x7, 
       0x5a, 0x2, 0x2, 0x21b, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x3, 
       0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x7, 
       0x42, 0x2, 0x2, 0x21e, 0x222, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x7, 
       0x1b, 0x2, 0x2, 0x220, 0x222, 0x7, 0x6b, 0x2, 0x2, 0x221, 0x214, 
       0x3, 0x2, 0x2, 0x2, 0x221, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x222, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x223, 0x228, 0x5, 0x54, 0x2b, 0x2, 0x224, 0x225, 
       0x7, 0x5a, 0x2, 0x2, 0x225, 0x227, 0x5, 0x54, 0x2b, 0x2, 0x226, 0x224, 
       0x3, 0x2, 0x2, 0x2, 0x227, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x228, 0x226, 
       0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x3, 0x2, 0x2, 0x2, 0x229, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x22a, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22e, 
       0x5, 0x56, 0x2c, 0x2, 0x22c, 0x22d, 0x7, 0x5b, 0x2, 0x2, 0x22d, 0x22f, 
       0x5, 0x30, 0x19, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 
       0x3, 0x2, 0x2, 0x2, 0x22f, 0x55, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 
       0x7, 0x6b, 0x2, 0x2, 0x231, 0x57, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 
       0x7, 0x35, 0x2, 0x2, 0x233, 0x234, 0x7, 0x3d, 0x2, 0x2, 0x234, 0x235, 
       0x5, 0x7a, 0x3e, 0x2, 0x235, 0x236, 0x7, 0x3e, 0x2, 0x2, 0x236, 0x59, 
       0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x9, 0x11, 0x2, 0x2, 0x238, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x239, 0x240, 0x9, 0x12, 0x2, 0x2, 0x23a, 0x240, 
       0x5, 0x66, 0x34, 0x2, 0x23b, 0x23c, 0x7, 0xc, 0x2, 0x2, 0x23c, 0x23d, 
       0x7, 0x3d, 0x2, 0x2, 0x23d, 0x23e, 0x7, 0x6b, 0x2, 0x2, 0x23e, 0x240, 
       0x7, 0x3e, 0x2, 0x2, 0x23f, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x23a, 
       0x3, 0x2, 0x2, 0x2, 0x23f, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x240, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x7, 0x33, 0x2, 0x2, 0x242, 0x245, 
       0x7, 0x3d, 0x2, 0x2, 0x243, 0x246, 0x5, 0x7a, 0x3e, 0x2, 0x244, 0x246, 
       0x5, 0x30, 0x19, 0x2, 0x245, 0x243, 0x3, 0x2, 0x2, 0x2, 0x245, 0x244, 
       0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 
       0x7, 0x3e, 0x2, 0x2, 0x248, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24b, 
       0x5, 0x6e, 0x38, 0x2, 0x24a, 0x249, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 
       0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x250, 
       0x5, 0x62, 0x32, 0x2, 0x24d, 0x24f, 0x5, 0x64, 0x33, 0x2, 0x24e, 
       0x24d, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x252, 0x3, 0x2, 0x2, 0x2, 0x250, 
       0x24e, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x3, 0x2, 0x2, 0x2, 0x251, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x252, 0x250, 0x3, 0x2, 0x2, 0x2, 0x253, 
       0x254, 0x8, 0x32, 0x1, 0x2, 0x254, 0x265, 0x7, 0x6b, 0x2, 0x2, 0x255, 
       0x256, 0x7, 0x3d, 0x2, 0x2, 0x256, 0x257, 0x5, 0x60, 0x31, 0x2, 0x257, 
       0x258, 0x7, 0x3e, 0x2, 0x2, 0x258, 0x265, 0x3, 0x2, 0x2, 0x2, 0x259, 
       0x25a, 0x7, 0x6b, 0x2, 0x2, 0x25a, 0x25b, 0x7, 0x58, 0x2, 0x2, 0x25b, 
       0x265, 0x7, 0x6d, 0x2, 0x2, 0x25c, 0x25e, 0x7, 0x3d, 0x2, 0x2, 0x25d, 
       0x25f, 0x5, 0x40, 0x21, 0x2, 0x25e, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25e, 
       0x25f, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x3, 0x2, 0x2, 0x2, 0x260, 
       0x261, 0x5, 0x6e, 0x38, 0x2, 0x261, 0x262, 0x5, 0x62, 0x32, 0x2, 
       0x262, 0x263, 0x7, 0x3e, 0x2, 0x2, 0x263, 0x265, 0x3, 0x2, 0x2, 0x2, 
       0x264, 0x253, 0x3, 0x2, 0x2, 0x2, 0x264, 0x255, 0x3, 0x2, 0x2, 0x2, 
       0x264, 0x259, 0x3, 0x2, 0x2, 0x2, 0x264, 0x25c, 0x3, 0x2, 0x2, 0x2, 
       0x265, 0x293, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0xc, 0xa, 0x2, 0x2, 
       0x267, 0x269, 0x7, 0x3f, 0x2, 0x2, 0x268, 0x26a, 0x5, 0x70, 0x39, 
       0x2, 0x269, 0x268, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 0x2, 0x2, 
       0x2, 0x26a, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26d, 0x5, 0x2a, 0x16, 
       0x2, 0x26c, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 
       0x2, 0x26d, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x292, 0x7, 0x40, 0x2, 
       0x2, 0x26f, 0x270, 0xc, 0x9, 0x2, 0x2, 0x270, 0x271, 0x7, 0x3f, 0x2, 
       0x2, 0x271, 0x273, 0x7, 0x2a, 0x2, 0x2, 0x272, 0x274, 0x5, 0x70, 
       0x39, 0x2, 0x273, 0x272, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x3, 0x2, 
       0x2, 0x2, 0x274, 0x275, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x5, 0x2a, 
       0x16, 0x2, 0x276, 0x277, 0x7, 0x40, 0x2, 0x2, 0x277, 0x292, 0x3, 
       0x2, 0x2, 0x2, 0x278, 0x279, 0xc, 0x8, 0x2, 0x2, 0x279, 0x27a, 0x7, 
       0x3f, 0x2, 0x2, 0x27a, 0x27b, 0x5, 0x70, 0x39, 0x2, 0x27b, 0x27c, 
       0x7, 0x2a, 0x2, 0x2, 0x27c, 0x27d, 0x5, 0x2a, 0x16, 0x2, 0x27d, 0x27e, 
       0x7, 0x40, 0x2, 0x2, 0x27e, 0x292, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 
       0xc, 0x7, 0x2, 0x2, 0x280, 0x282, 0x7, 0x3f, 0x2, 0x2, 0x281, 0x283, 
       0x5, 0x70, 0x39, 0x2, 0x282, 0x281, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 
       0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 
       0x7, 0x4d, 0x2, 0x2, 0x285, 0x292, 0x7, 0x40, 0x2, 0x2, 0x286, 0x287, 
       0xc, 0x6, 0x2, 0x2, 0x287, 0x288, 0x7, 0x3d, 0x2, 0x2, 0x288, 0x289, 
       0x5, 0x72, 0x3a, 0x2, 0x289, 0x28a, 0x7, 0x3e, 0x2, 0x2, 0x28a, 0x292, 
       0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0xc, 0x5, 0x2, 0x2, 0x28c, 0x28e, 
       0x7, 0x3d, 0x2, 0x2, 0x28d, 0x28f, 0x5, 0x78, 0x3d, 0x2, 0x28e, 0x28d, 
       0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 
       0x3, 0x2, 0x2, 0x2, 0x290, 0x292, 0x7, 0x3e, 0x2, 0x2, 0x291, 0x266, 
       0x3, 0x2, 0x2, 0x2, 0x291, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x291, 0x278, 
       0x3, 0x2, 0x2, 0x2, 0x291, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x291, 0x286, 
       0x3, 0x2, 0x2, 0x2, 0x291, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x292, 0x295, 
       0x3, 0x2, 0x2, 0x2, 0x293, 0x291, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 
       0x3, 0x2, 0x2, 0x2, 0x294, 0x63, 0x3, 0x2, 0x2, 0x2, 0x295, 0x293, 
       0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x7, 0xd, 0x2, 0x2, 0x297, 0x299, 
       0x7, 0x3d, 0x2, 0x2, 0x298, 0x29a, 0x7, 0x6e, 0x2, 0x2, 0x299, 0x298, 
       0x3, 0x2, 0x2, 0x2, 0x29a, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x299, 
       0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 
       0x3, 0x2, 0x2, 0x2, 0x29d, 0x2a0, 0x7, 0x3e, 0x2, 0x2, 0x29e, 0x2a0, 
       0x5, 0x66, 0x34, 0x2, 0x29f, 0x296, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x29e, 
       0x3, 0x2, 0x2, 0x2, 0x2a0, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 
       0x7, 0xe, 0x2, 0x2, 0x2a2, 0x2a3, 0x7, 0x3d, 0x2, 0x2, 0x2a3, 0x2a4, 
       0x7, 0x3d, 0x2, 0x2, 0x2a4, 0x2a5, 0x5, 0x68, 0x35, 0x2, 0x2a5, 0x2a6, 
       0x7, 0x3e, 0x2, 0x2, 0x2a6, 0x2a7, 0x7, 0x3e, 0x2, 0x2, 0x2a7, 0x67, 
       0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2aa, 0x5, 0x6a, 0x36, 0x2, 0x2a9, 0x2a8, 
       0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2b1, 
       0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ad, 0x7, 0x5a, 0x2, 0x2, 0x2ac, 0x2ae, 
       0x5, 0x6a, 0x36, 0x2, 0x2ad, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ae, 
       0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2ab, 
       0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2af, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2ba, 
       0xa, 0x13, 0x2, 0x2, 0x2b5, 0x2b7, 0x7, 0x3d, 0x2, 0x2, 0x2b6, 0x2b8, 
       0x5, 0xc, 0x7, 0x2, 0x2b7, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 
       0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2bb, 
       0x7, 0x3e, 0x2, 0x2, 0x2ba, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 
       0x3, 0x2, 0x2, 0x2, 0x2bb, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2c2, 
       0xa, 0x14, 0x2, 0x2, 0x2bd, 0x2be, 0x7, 0x3d, 0x2, 0x2, 0x2be, 0x2bf, 
       0x5, 0x6c, 0x37, 0x2, 0x2bf, 0x2c0, 0x7, 0x3e, 0x2, 0x2, 0x2c0, 0x2c2, 
       0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2bd, 
       0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c1, 
       0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x6d, 
       0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c8, 
       0x9, 0x15, 0x2, 0x2, 0x2c7, 0x2c9, 0x5, 0x70, 0x39, 0x2, 0x2c8, 0x2c7, 
       0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2cb, 
       0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 
       0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 
       0x3, 0x2, 0x2, 0x2, 0x2cd, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d0, 
       0x5, 0x5a, 0x2e, 0x2, 0x2cf, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 
       0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 
       0x3, 0x2, 0x2, 0x2, 0x2d2, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d6, 
       0x5, 0x74, 0x3b, 0x2, 0x2d4, 0x2d5, 0x7, 0x5a, 0x2, 0x2, 0x2d5, 0x2d7, 
       0x7, 0x6a, 0x2, 0x2, 0x2d6, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 
       0x3, 0x2, 0x2, 0x2, 0x2d7, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2dd, 
       0x5, 0x76, 0x3c, 0x2, 0x2d9, 0x2da, 0x7, 0x5a, 0x2, 0x2, 0x2da, 0x2dc, 
       0x5, 0x76, 0x3c, 0x2, 0x2db, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2df, 
       0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 
       0x3, 0x2, 0x2, 0x2, 0x2de, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2dd, 
       0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x5, 0x34, 0x1b, 0x2, 0x2e1, 0x2e2, 
       0x5, 0x60, 0x31, 0x2, 0x2e2, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e5, 
       0x5, 0x36, 0x1c, 0x2, 0x2e4, 0x2e6, 0x5, 0x7c, 0x3f, 0x2, 0x2e5, 
       0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 
       0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e7, 
       0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x77, 0x3, 0x2, 0x2, 0x2, 0x2e9, 
       0x2ee, 0x7, 0x6b, 0x2, 0x2, 0x2ea, 0x2eb, 0x7, 0x5a, 0x2, 0x2, 0x2eb, 
       0x2ed, 0x7, 0x6b, 0x2, 0x2, 0x2ec, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ed, 
       0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ee, 
       0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x79, 0x3, 0x2, 0x2, 0x2, 0x2f0, 
       0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f3, 0x5, 0x4a, 0x26, 0x2, 0x2f2, 
       0x2f4, 0x5, 0x7c, 0x3f, 0x2, 0x2f3, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f3, 
       0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x2f5, 
       0x301, 0x5, 0x6e, 0x38, 0x2, 0x2f6, 0x2f8, 0x5, 0x6e, 0x38, 0x2, 
       0x2f7, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 0x3, 0x2, 0x2, 0x2, 
       0x2f8, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fd, 0x5, 0x7e, 0x40, 
       0x2, 0x2fa, 0x2fc, 0x5, 0x64, 0x33, 0x2, 0x2fb, 0x2fa, 0x3, 0x2, 
       0x2, 0x2, 0x2fc, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fb, 0x3, 0x2, 
       0x2, 0x2, 0x2fd, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x301, 0x3, 0x2, 
       0x2, 0x2, 0x2ff, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x300, 0x2f5, 0x3, 0x2, 
       0x2, 0x2, 0x300, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x301, 0x7d, 0x3, 0x2, 
       0x2, 0x2, 0x302, 0x303, 0x8, 0x40, 0x1, 0x2, 0x303, 0x304, 0x7, 0x3d, 
       0x2, 0x2, 0x304, 0x305, 0x5, 0x7c, 0x3f, 0x2, 0x305, 0x309, 0x7, 
       0x3e, 0x2, 0x2, 0x306, 0x308, 0x5, 0x64, 0x33, 0x2, 0x307, 0x306, 
       0x3, 0x2, 0x2, 0x2, 0x308, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x309, 0x307, 
       0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x331, 
       0x3, 0x2, 0x2, 0x2, 0x30b, 0x309, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30e, 
       0x7, 0x3f, 0x2, 0x2, 0x30d, 0x30f, 0x5, 0x70, 0x39, 0x2, 0x30e, 0x30d, 
       0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x311, 
       0x3, 0x2, 0x2, 0x2, 0x310, 0x312, 0x5, 0x2a, 0x16, 0x2, 0x311, 0x310, 
       0x3, 0x2, 0x2, 0x2, 0x311, 0x312, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 
       0x3, 0x2, 0x2, 0x2, 0x313, 0x331, 0x7, 0x40, 0x2, 0x2, 0x314, 0x315, 
       0x7, 0x3f, 0x2, 0x2, 0x315, 0x317, 0x7, 0x2a, 0x2, 0x2, 0x316, 0x318, 
       0x5, 0x70, 0x39, 0x2, 0x317, 0x316, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 
       0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 
       0x5, 0x2a, 0x16, 0x2, 0x31a, 0x31b, 0x7, 0x40, 0x2, 0x2, 0x31b, 0x331, 
       0x3, 0x2, 0x2, 0x2, 0x31c, 0x31d, 0x7, 0x3f, 0x2, 0x2, 0x31d, 0x31e, 
       0x5, 0x70, 0x39, 0x2, 0x31e, 0x31f, 0x7, 0x2a, 0x2, 0x2, 0x31f, 0x320, 
       0x5, 0x2a, 0x16, 0x2, 0x320, 0x321, 0x7, 0x40, 0x2, 0x2, 0x321, 0x331, 
       0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 0x7, 0x3f, 0x2, 0x2, 0x323, 0x324, 
       0x7, 0x4d, 0x2, 0x2, 0x324, 0x331, 0x7, 0x40, 0x2, 0x2, 0x325, 0x327, 
       0x7, 0x3d, 0x2, 0x2, 0x326, 0x328, 0x5, 0x72, 0x3a, 0x2, 0x327, 0x326, 
       0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 
       0x3, 0x2, 0x2, 0x2, 0x329, 0x32d, 0x7, 0x3e, 0x2, 0x2, 0x32a, 0x32c, 
       0x5, 0x64, 0x33, 0x2, 0x32b, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32f, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 
       0x3, 0x2, 0x2, 0x2, 0x32e, 0x331, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x32d, 
       0x3, 0x2, 0x2, 0x2, 0x330, 0x302, 0x3, 0x2, 0x2, 0x2, 0x330, 0x30c, 
       0x3, 0x2, 0x2, 0x2, 0x330, 0x314, 0x3, 0x2, 0x2, 0x2, 0x330, 0x31c, 
       0x3, 0x2, 0x2, 0x2, 0x330, 0x322, 0x3, 0x2, 0x2, 0x2, 0x330, 0x325, 
       0x3, 0x2, 0x2, 0x2, 0x331, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x332, 0x333, 
       0xc, 0x7, 0x2, 0x2, 0x333, 0x335, 0x7, 0x3f, 0x2, 0x2, 0x334, 0x336, 
       0x5, 0x70, 0x39, 0x2, 0x335, 0x334, 0x3, 0x2, 0x2, 0x2, 0x335, 0x336, 
       0x3, 0x2, 0x2, 0x2, 0x336, 0x338, 0x3, 0x2, 0x2, 0x2, 0x337, 0x339, 
       0x5, 0x2a, 0x16, 0x2, 0x338, 0x337, 0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 
       0x3, 0x2, 0x2, 0x2, 0x339, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x35c, 
       0x7, 0x40, 0x2, 0x2, 0x33b, 0x33c, 0xc, 0x6, 0x2, 0x2, 0x33c, 0x33d, 
       0x7, 0x3f, 0x2, 0x2, 0x33d, 0x33f, 0x7, 0x2a, 0x2, 0x2, 0x33e, 0x340, 
       0x5, 0x70, 0x39, 0x2, 0x33f, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x340, 
       0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 
       0x5, 0x2a, 0x16, 0x2, 0x342, 0x343, 0x7, 0x40, 0x2, 0x2, 0x343, 0x35c, 
       0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 0xc, 0x5, 0x2, 0x2, 0x345, 0x346, 
       0x7, 0x3f, 0x2, 0x2, 0x346, 0x347, 0x5, 0x70, 0x39, 0x2, 0x347, 0x348, 
       0x7, 0x2a, 0x2, 0x2, 0x348, 0x349, 0x5, 0x2a, 0x16, 0x2, 0x349, 0x34a, 
       0x7, 0x40, 0x2, 0x2, 0x34a, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34c, 
       0xc, 0x4, 0x2, 0x2, 0x34c, 0x34d, 0x7, 0x3f, 0x2, 0x2, 0x34d, 0x34e, 
       0x7, 0x4d, 0x2, 0x2, 0x34e, 0x35c, 0x7, 0x40, 0x2, 0x2, 0x34f, 0x350, 
       0xc, 0x3, 0x2, 0x2, 0x350, 0x352, 0x7, 0x3d, 0x2, 0x2, 0x351, 0x353, 
       0x5, 0x72, 0x3a, 0x2, 0x352, 0x351, 0x3, 0x2, 0x2, 0x2, 0x352, 0x353, 
       0x3, 0x2, 0x2, 0x2, 0x353, 0x354, 0x3, 0x2, 0x2, 0x2, 0x354, 0x358, 
       0x7, 0x3e, 0x2, 0x2, 0x355, 0x357, 0x5, 0x64, 0x33, 0x2, 0x356, 0x355, 
       0x3, 0x2, 0x2, 0x2, 0x357, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x358, 0x356, 
       0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 0x3, 0x2, 0x2, 0x2, 0x359, 0x35c, 
       0x3, 0x2, 0x2, 0x2, 0x35a, 0x358, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x332, 
       0x3, 0x2, 0x2, 0x2, 0x35b, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x344, 
       0x3, 0x2, 0x2, 0x2, 0x35b, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x34f, 
       0x3, 0x2, 0x2, 0x2, 0x35c, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35b, 
       0x3, 0x2, 0x2, 0x2, 0x35d, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x7f, 
       0x3, 0x2, 0x2, 0x2, 0x35f, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 
       0x7, 0x6b, 0x2, 0x2, 0x361, 0x81, 0x3, 0x2, 0x2, 0x2, 0x362, 0x36b, 
       0x5, 0x2a, 0x16, 0x2, 0x363, 0x364, 0x7, 0x41, 0x2, 0x2, 0x364, 0x366, 
       0x5, 0x84, 0x43, 0x2, 0x365, 0x367, 0x7, 0x5a, 0x2, 0x2, 0x366, 0x365, 
       0x3, 0x2, 0x2, 0x2, 0x366, 0x367, 0x3, 0x2, 0x2, 0x2, 0x367, 0x368, 
       0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 0x7, 0x42, 0x2, 0x2, 0x369, 0x36b, 
       0x3, 0x2, 0x2, 0x2, 0x36a, 0x362, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x363, 
       0x3, 0x2, 0x2, 0x2, 0x36b, 0x83, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36e, 
       0x5, 0x86, 0x44, 0x2, 0x36d, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 
       0x3, 0x2, 0x2, 0x2, 0x36e, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x377, 
       0x5, 0x82, 0x42, 0x2, 0x370, 0x372, 0x7, 0x5a, 0x2, 0x2, 0x371, 0x373, 
       0x5, 0x86, 0x44, 0x2, 0x372, 0x371, 0x3, 0x2, 0x2, 0x2, 0x372, 0x373, 
       0x3, 0x2, 0x2, 0x2, 0x373, 0x374, 0x3, 0x2, 0x2, 0x2, 0x374, 0x376, 
       0x5, 0x82, 0x42, 0x2, 0x375, 0x370, 0x3, 0x2, 0x2, 0x2, 0x376, 0x379, 
       0x3, 0x2, 0x2, 0x2, 0x377, 0x375, 0x3, 0x2, 0x2, 0x2, 0x377, 0x378, 
       0x3, 0x2, 0x2, 0x2, 0x378, 0x85, 0x3, 0x2, 0x2, 0x2, 0x379, 0x377, 
       0x3, 0x2, 0x2, 0x2, 0x37a, 0x37b, 0x5, 0x88, 0x45, 0x2, 0x37b, 0x37c, 
       0x7, 0x5b, 0x2, 0x2, 0x37c, 0x87, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37f, 
       0x5, 0x8a, 0x46, 0x2, 0x37e, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x380, 
       0x3, 0x2, 0x2, 0x2, 0x380, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 
       0x3, 0x2, 0x2, 0x2, 0x381, 0x89, 0x3, 0x2, 0x2, 0x2, 0x382, 0x383, 
       0x7, 0x3f, 0x2, 0x2, 0x383, 0x384, 0x5, 0x30, 0x19, 0x2, 0x384, 0x385, 
       0x7, 0x40, 0x2, 0x2, 0x385, 0x389, 0x3, 0x2, 0x2, 0x2, 0x386, 0x387, 
       0x7, 0x69, 0x2, 0x2, 0x387, 0x389, 0x7, 0x6b, 0x2, 0x2, 0x388, 0x382, 
       0x3, 0x2, 0x2, 0x2, 0x388, 0x386, 0x3, 0x2, 0x2, 0x2, 0x389, 0x8b, 
       0x3, 0x2, 0x2, 0x2, 0x38a, 0x38b, 0x7, 0x3b, 0x2, 0x2, 0x38b, 0x38c, 
       0x7, 0x3d, 0x2, 0x2, 0x38c, 0x38d, 0x5, 0x30, 0x19, 0x2, 0x38d, 0x38f, 
       0x7, 0x5a, 0x2, 0x2, 0x38e, 0x390, 0x7, 0x6e, 0x2, 0x2, 0x38f, 0x38e, 
       0x3, 0x2, 0x2, 0x2, 0x390, 0x391, 0x3, 0x2, 0x2, 0x2, 0x391, 0x38f, 
       0x3, 0x2, 0x2, 0x2, 0x391, 0x392, 0x3, 0x2, 0x2, 0x2, 0x392, 0x393, 
       0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 0x7, 0x3e, 0x2, 0x2, 0x394, 0x395, 
       0x7, 0x59, 0x2, 0x2, 0x395, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x396, 0x3bc, 
       0x5, 0x90, 0x49, 0x2, 0x397, 0x3bc, 0x5, 0x92, 0x4a, 0x2, 0x398, 
       0x3bc, 0x5, 0x98, 0x4d, 0x2, 0x399, 0x3bc, 0x5, 0x9a, 0x4e, 0x2, 
       0x39a, 0x3bc, 0x5, 0x9c, 0x4f, 0x2, 0x39b, 0x3bc, 0x5, 0xa4, 0x53, 
       0x2, 0x39c, 0x39d, 0x9, 0x16, 0x2, 0x2, 0x39d, 0x39e, 0x9, 0x17, 
       0x2, 0x2, 0x39e, 0x3a7, 0x7, 0x3d, 0x2, 0x2, 0x39f, 0x3a4, 0x5, 0x26, 
       0x14, 0x2, 0x3a0, 0x3a1, 0x7, 0x5a, 0x2, 0x2, 0x3a1, 0x3a3, 0x5, 
       0x26, 0x14, 0x2, 0x3a2, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a6, 
       0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 
       0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a4, 
       0x3, 0x2, 0x2, 0x2, 0x3a7, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3a8, 
       0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3b2, 
       0x7, 0x58, 0x2, 0x2, 0x3aa, 0x3af, 0x5, 0x26, 0x14, 0x2, 0x3ab, 0x3ac, 
       0x7, 0x5a, 0x2, 0x2, 0x3ac, 0x3ae, 0x5, 0x26, 0x14, 0x2, 0x3ad, 0x3ab, 
       0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3ad, 
       0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b3, 
       0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3aa, 
       0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b5, 
       0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b8, 
       0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b7, 
       0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b6, 
       0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x7, 0x3e, 0x2, 0x2, 0x3ba, 0x3bc, 
       0x7, 0x59, 0x2, 0x2, 0x3bb, 0x396, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x397, 
       0x3, 0x2, 0x2, 0x2, 0x3bb, 0x398, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x399, 
       0x3, 0x2, 0x2, 0x2, 0x3bb, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x39b, 
       0x3, 0x2, 0x2, 0x2, 0x3bb, 0x39c, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x8f, 
       0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3be, 0x7, 0x6b, 0x2, 0x2, 0x3be, 0x3bf, 
       0x7, 0x58, 0x2, 0x2, 0x3bf, 0x3c9, 0x5, 0x8e, 0x48, 0x2, 0x3c0, 0x3c1, 
       0x7, 0x13, 0x2, 0x2, 0x3c1, 0x3c2, 0x5, 0x30, 0x19, 0x2, 0x3c2, 0x3c3, 
       0x7, 0x58, 0x2, 0x2, 0x3c3, 0x3c4, 0x5, 0x8e, 0x48, 0x2, 0x3c4, 0x3c9, 
       0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x7, 0x17, 0x2, 0x2, 0x3c6, 0x3c7, 
       0x7, 0x58, 0x2, 0x2, 0x3c7, 0x3c9, 0x5, 0x8e, 0x48, 0x2, 0x3c8, 0x3bd, 
       0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c5, 
       0x3, 0x2, 0x2, 0x2, 0x3c9, 0x91, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cc, 
       0x7, 0x41, 0x2, 0x2, 0x3cb, 0x3cd, 0x5, 0x94, 0x4b, 0x2, 0x3cc, 0x3cb, 
       0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3ce, 
       0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3cf, 0x7, 0x42, 0x2, 0x2, 0x3cf, 0x93, 
       0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d2, 0x5, 0x96, 0x4c, 0x2, 0x3d1, 0x3d0, 
       0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x95, 
       0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d8, 0x5, 0x8e, 0x48, 0x2, 0x3d6, 0x3d8, 
       0x5, 0x32, 0x1a, 0x2, 0x3d7, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d6, 
       0x3, 0x2, 0x2, 0x2, 0x3d8, 0x97, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3db, 
       0x5, 0x2e, 0x18, 0x2, 0x3da, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3db, 
       0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 
       0x7, 0x59, 0x2, 0x2, 0x3dd, 0x99, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 
       0x7, 0x20, 0x2, 0x2, 0x3df, 0x3e0, 0x7, 0x3d, 0x2, 0x2, 0x3e0, 0x3e1, 
       0x5, 0x2e, 0x18, 0x2, 0x3e1, 0x3e2, 0x7, 0x3e, 0x2, 0x2, 0x3e2, 0x3e5, 
       0x5, 0x8e, 0x48, 0x2, 0x3e3, 0x3e4, 0x7, 0x1a, 0x2, 0x2, 0x3e4, 0x3e6, 
       0x5, 0x8e, 0x48, 0x2, 0x3e5, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 
       0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 
       0x7, 0x2c, 0x2, 0x2, 0x3e8, 0x3e9, 0x7, 0x3d, 0x2, 0x2, 0x3e9, 0x3ea, 
       0x5, 0x2e, 0x18, 0x2, 0x3ea, 0x3eb, 0x7, 0x3e, 0x2, 0x2, 0x3eb, 0x3ec, 
       0x5, 0x8e, 0x48, 0x2, 0x3ec, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3de, 
       0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x9b, 
       0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 0x7, 0x32, 0x2, 0x2, 0x3f0, 0x3f1, 
       0x7, 0x3d, 0x2, 0x2, 0x3f1, 0x3f2, 0x5, 0x2e, 0x18, 0x2, 0x3f2, 0x3f3, 
       0x7, 0x3e, 0x2, 0x2, 0x3f3, 0x3f4, 0x5, 0x8e, 0x48, 0x2, 0x3f4, 0x404, 
       0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 0x7, 0x18, 0x2, 0x2, 0x3f6, 0x3f7, 
       0x5, 0x8e, 0x48, 0x2, 0x3f7, 0x3f8, 0x7, 0x32, 0x2, 0x2, 0x3f8, 0x3f9, 
       0x7, 0x3d, 0x2, 0x2, 0x3f9, 0x3fa, 0x5, 0x2e, 0x18, 0x2, 0x3fa, 0x3fb, 
       0x7, 0x3e, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x59, 0x2, 0x2, 0x3fc, 0x404, 
       0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3fe, 0x7, 0x1e, 0x2, 0x2, 0x3fe, 0x3ff, 
       0x7, 0x3d, 0x2, 0x2, 0x3ff, 0x400, 0x5, 0x9e, 0x50, 0x2, 0x400, 0x401, 
       0x7, 0x3e, 0x2, 0x2, 0x401, 0x402, 0x5, 0x8e, 0x48, 0x2, 0x402, 0x404, 
       0x3, 0x2, 0x2, 0x2, 0x403, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x403, 0x3f5, 
       0x3, 0x2, 0x2, 0x2, 0x403, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x404, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0x405, 0x40a, 0x5, 0xa0, 0x51, 0x2, 0x406, 0x408, 
       0x5, 0x2e, 0x18, 0x2, 0x407, 0x406, 0x3, 0x2, 0x2, 0x2, 0x407, 0x408, 
       0x3, 0x2, 0x2, 0x2, 0x408, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x409, 0x405, 
       0x3, 0x2, 0x2, 0x2, 0x409, 0x407, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40b, 
       0x3, 0x2, 0x2, 0x2, 0x40b, 0x40d, 0x7, 0x59, 0x2, 0x2, 0x40c, 0x40e, 
       0x5, 0xa2, 0x52, 0x2, 0x40d, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x40e, 
       0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x411, 
       0x7, 0x59, 0x2, 0x2, 0x410, 0x412, 0x5, 0xa2, 0x52, 0x2, 0x411, 0x410, 
       0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 0x3, 0x2, 0x2, 0x2, 0x412, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0x413, 0x415, 0x5, 0x34, 0x1b, 0x2, 0x414, 0x416, 
       0x5, 0x3a, 0x1e, 0x2, 0x415, 0x414, 0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 
       0x3, 0x2, 0x2, 0x2, 0x416, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x417, 0x41c, 
       0x5, 0x2a, 0x16, 0x2, 0x418, 0x419, 0x7, 0x5a, 0x2, 0x2, 0x419, 0x41b, 
       0x5, 0x2a, 0x16, 0x2, 0x41a, 0x418, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x41e, 
       0x3, 0x2, 0x2, 0x2, 0x41c, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41d, 
       0x3, 0x2, 0x2, 0x2, 0x41d, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x41c, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x420, 0x7, 0x1f, 0x2, 0x2, 0x420, 0x429, 
       0x7, 0x6b, 0x2, 0x2, 0x421, 0x429, 0x9, 0x18, 0x2, 0x2, 0x422, 0x424, 
       0x7, 0x26, 0x2, 0x2, 0x423, 0x425, 0x5, 0x2e, 0x18, 0x2, 0x424, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x424, 0x425, 0x3, 0x2, 0x2, 0x2, 0x425, 0x429, 
       0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 0x7, 0x1f, 0x2, 0x2, 0x427, 0x429, 
       0x5, 0xe, 0x8, 0x2, 0x428, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x428, 0x421, 
       0x3, 0x2, 0x2, 0x2, 0x428, 0x422, 0x3, 0x2, 0x2, 0x2, 0x428, 0x426, 
       0x3, 0x2, 0x2, 0x2, 0x429, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x42b, 
       0x7, 0x59, 0x2, 0x2, 0x42b, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42e, 
       0x5, 0xa8, 0x55, 0x2, 0x42d, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x42e, 
       0x3, 0x2, 0x2, 0x2, 0x42e, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x430, 
       0x7, 0x2, 0x2, 0x3, 0x430, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x431, 0x433, 
       0x5, 0xaa, 0x56, 0x2, 0x432, 0x431, 0x3, 0x2, 0x2, 0x2, 0x433, 0x434, 
       0x3, 0x2, 0x2, 0x2, 0x434, 0x432, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 
       0x3, 0x2, 0x2, 0x2, 0x435, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x436, 0x43a, 
       0x5, 0xac, 0x57, 0x2, 0x437, 0x43a, 0x5, 0x32, 0x1a, 0x2, 0x438, 
       0x43a, 0x7, 0x59, 0x2, 0x2, 0x439, 0x436, 0x3, 0x2, 0x2, 0x2, 0x439, 
       0x437, 0x3, 0x2, 0x2, 0x2, 0x439, 0x438, 0x3, 0x2, 0x2, 0x2, 0x43a, 
       0xab, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43d, 0x5, 0x34, 0x1b, 0x2, 0x43c, 
       0x43b, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x43d, 
       0x43e, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x440, 0x5, 0x60, 0x31, 0x2, 0x43f, 
       0x441, 0x5, 0xae, 0x58, 0x2, 0x440, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x440, 
       0x441, 0x3, 0x2, 0x2, 0x2, 0x441, 0x442, 0x3, 0x2, 0x2, 0x2, 0x442, 
       0x443, 0x5, 0x92, 0x4a, 0x2, 0x443, 0xad, 0x3, 0x2, 0x2, 0x2, 0x444, 
       0x446, 0x5, 0x32, 0x1a, 0x2, 0x445, 0x444, 0x3, 0x2, 0x2, 0x2, 0x446, 
       0x447, 0x3, 0x2, 0x2, 0x2, 0x447, 0x445, 0x3, 0x2, 0x2, 0x2, 0x447, 
       0x448, 0x3, 0x2, 0x2, 0x2, 0x448, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x8b, 
       0xb5, 0xbd, 0xd1, 0xdf, 0xe4, 0xeb, 0xf3, 0xf7, 0xff, 0x105, 0x107, 
       0x10f, 0x115, 0x123, 0x128, 0x131, 0x138, 0x140, 0x148, 0x150, 0x158, 
       0x160, 0x168, 0x170, 0x178, 0x180, 0x189, 0x191, 0x19a, 0x1a1, 0x1a6, 
       0x1ab, 0x1b0, 0x1b7, 0x1be, 0x1c4, 0x1d7, 0x1dd, 0x1e2, 0x1eb, 0x1f2, 
       0x1f6, 0x1fb, 0x1ff, 0x202, 0x209, 0x20e, 0x212, 0x216, 0x21b, 0x221, 
       0x228, 0x22e, 0x23f, 0x245, 0x24a, 0x250, 0x25e, 0x264, 0x269, 0x26c, 
       0x273, 0x282, 0x28e, 0x291, 0x293, 0x29b, 0x29f, 0x2a9, 0x2ad, 0x2b1, 
       0x2b7, 0x2ba, 0x2c1, 0x2c3, 0x2c8, 0x2cc, 0x2d1, 0x2d6, 0x2dd, 0x2e5, 
       0x2e7, 0x2ee, 0x2f3, 0x2f7, 0x2fd, 0x300, 0x309, 0x30e, 0x311, 0x317, 
       0x327, 0x32d, 0x330, 0x335, 0x338, 0x33f, 0x352, 0x358, 0x35b, 0x35d, 
       0x366, 0x36a, 0x36d, 0x372, 0x377, 0x380, 0x388, 0x391, 0x3a4, 0x3a7, 
       0x3af, 0x3b2, 0x3b6, 0x3bb, 0x3c8, 0x3cc, 0x3d3, 0x3d7, 0x3da, 0x3e5, 
       0x3ed, 0x403, 0x407, 0x409, 0x40d, 0x411, 0x415, 0x41c, 0x424, 0x428, 
       0x42d, 0x434, 0x439, 0x43c, 0x440, 0x447, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CParser::Initializer CParser::_init;
