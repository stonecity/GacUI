﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
Parser::GuiInstanceQuery_Parser.parser.txt

This file is generated by: Vczh Parser Generator
***********************************************************************/

#include "../../../Import/Vlpp.h"
#include "GuiInstanceQuery_Ast.h"

namespace vl
{
	namespace presentation
	{
/***********************************************************************
Visitor Pattern Implementation
***********************************************************************/

		void GuiIqPrimaryQuery::Accept(GuiIqQuery::IVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void GuiIqCascadeQuery::Accept(GuiIqQuery::IVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void GuiIqSetQuery::Accept(GuiIqQuery::IVisitor* visitor)
		{
			visitor->Visit(this);
		}

	}
}
namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			using namespace vl::presentation;

#define PARSING_TOKEN_FIELD(NAME)\
			CLASS_MEMBER_EXTERNALMETHOD_TEMPLATE(get_##NAME, NO_PARAMETER, vl::WString(ClassType::*)(), [](ClassType* node) { return node->NAME.value; }, L"*", L"*")\
			CLASS_MEMBER_EXTERNALMETHOD_TEMPLATE(set_##NAME, { L"value" }, void(ClassType::*)(const vl::WString&), [](ClassType* node, const vl::WString& value) { node->NAME.value = value; }, L"*", L"*")\
			CLASS_MEMBER_PROPERTY_REFERENCETEMPLATE(NAME, get_##NAME, set_##NAME, L"$This->$Name.value")\

			IMPL_TYPE_INFO_RENAME(vl::presentation::GuiIqQuery, presentation::GuiIqQuery)
			IMPL_TYPE_INFO_RENAME(vl::presentation::GuiIqNameOption, presentation::GuiIqNameOption)
			IMPL_TYPE_INFO_RENAME(vl::presentation::GuiIqChildOption, presentation::GuiIqChildOption)
			IMPL_TYPE_INFO_RENAME(vl::presentation::GuiIqPrimaryQuery, presentation::GuiIqPrimaryQuery)
			IMPL_TYPE_INFO_RENAME(vl::presentation::GuiIqCascadeQuery, presentation::GuiIqCascadeQuery)
			IMPL_TYPE_INFO_RENAME(vl::presentation::GuiIqBinaryOperator, presentation::GuiIqBinaryOperator)
			IMPL_TYPE_INFO_RENAME(vl::presentation::GuiIqSetQuery, presentation::GuiIqSetQuery)
			IMPL_TYPE_INFO_RENAME(vl::presentation::GuiIqQuery::IVisitor, presentation::GuiIqQuery::IVisitor)

			BEGIN_CLASS_MEMBER(GuiIqQuery)
				CLASS_MEMBER_METHOD_OVERLOAD(Accept, {L"visitor"}, void(GuiIqQuery::*)(GuiIqQuery::IVisitor* visitor))
			END_CLASS_MEMBER(GuiIqQuery)

			BEGIN_ENUM_ITEM(GuiIqNameOption)
				ENUM_ITEM_NAMESPACE(GuiIqNameOption)
				ENUM_NAMESPACE_ITEM(Specified)
				ENUM_NAMESPACE_ITEM(Any)
			END_ENUM_ITEM(GuiIqNameOption)

			BEGIN_ENUM_ITEM(GuiIqChildOption)
				ENUM_ITEM_NAMESPACE(GuiIqChildOption)
				ENUM_NAMESPACE_ITEM(Direct)
				ENUM_NAMESPACE_ITEM(Indirect)
			END_ENUM_ITEM(GuiIqChildOption)

			BEGIN_CLASS_MEMBER(GuiIqPrimaryQuery)
				CLASS_MEMBER_BASE(GuiIqQuery)

				CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<GuiIqPrimaryQuery>(), NO_PARAMETER)

				CLASS_MEMBER_FIELD(childOption)
				CLASS_MEMBER_FIELD(attributeNameOption)
				PARSING_TOKEN_FIELD(attributeName)
				CLASS_MEMBER_FIELD(typeNameOption)
				PARSING_TOKEN_FIELD(typeName)
				PARSING_TOKEN_FIELD(referenceName)
			END_CLASS_MEMBER(GuiIqPrimaryQuery)

			BEGIN_CLASS_MEMBER(GuiIqCascadeQuery)
				CLASS_MEMBER_BASE(GuiIqQuery)

				CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<GuiIqCascadeQuery>(), NO_PARAMETER)

				CLASS_MEMBER_FIELD(parent)
				CLASS_MEMBER_FIELD(child)
			END_CLASS_MEMBER(GuiIqCascadeQuery)

			BEGIN_ENUM_ITEM(GuiIqBinaryOperator)
				ENUM_ITEM_NAMESPACE(GuiIqBinaryOperator)
				ENUM_NAMESPACE_ITEM(ExclusiveOr)
				ENUM_NAMESPACE_ITEM(Intersect)
				ENUM_NAMESPACE_ITEM(Union)
				ENUM_NAMESPACE_ITEM(Substract)
			END_ENUM_ITEM(GuiIqBinaryOperator)

			BEGIN_CLASS_MEMBER(GuiIqSetQuery)
				CLASS_MEMBER_BASE(GuiIqQuery)

				CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<GuiIqSetQuery>(), NO_PARAMETER)

				CLASS_MEMBER_FIELD(first)
				CLASS_MEMBER_FIELD(second)
				CLASS_MEMBER_FIELD(op)
			END_CLASS_MEMBER(GuiIqSetQuery)

			BEGIN_INTERFACE_MEMBER(GuiIqQuery::IVisitor)
				CLASS_MEMBER_METHOD_OVERLOAD(Visit, {L"node"}, void(GuiIqQuery::IVisitor::*)(GuiIqPrimaryQuery* node))
				CLASS_MEMBER_METHOD_OVERLOAD(Visit, {L"node"}, void(GuiIqQuery::IVisitor::*)(GuiIqCascadeQuery* node))
				CLASS_MEMBER_METHOD_OVERLOAD(Visit, {L"node"}, void(GuiIqQuery::IVisitor::*)(GuiIqSetQuery* node))
			END_INTERFACE_MEMBER(GuiIqQuery)

#undef PARSING_TOKEN_FIELD

			class GuiIqTypeLoader : public vl::Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(vl::presentation::GuiIqQuery)
					ADD_TYPE_INFO(vl::presentation::GuiIqNameOption)
					ADD_TYPE_INFO(vl::presentation::GuiIqChildOption)
					ADD_TYPE_INFO(vl::presentation::GuiIqPrimaryQuery)
					ADD_TYPE_INFO(vl::presentation::GuiIqCascadeQuery)
					ADD_TYPE_INFO(vl::presentation::GuiIqBinaryOperator)
					ADD_TYPE_INFO(vl::presentation::GuiIqSetQuery)
					ADD_TYPE_INFO(vl::presentation::GuiIqQuery::IVisitor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool GuiIqLoadTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				ITypeManager* manager=GetGlobalTypeManager();
				if(manager)
				{
					Ptr<ITypeLoader> loader=new GuiIqTypeLoader;
					return manager->AddTypeLoader(loader);
				}
#endif
				return false;
			}
		}
	}
}
