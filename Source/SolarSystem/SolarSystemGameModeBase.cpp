// Fill out your copyright notice in the Description page of Project Settings.

#include "SolarSystemGameModeBase.h"

//
//FString ASolarSystemGameModeBase::ReadXmlParser(const FString &_XmlPath)
//{
//	FXmlFile* _XmlFile = new FXmlFile(_XmlPath);  //creat XmlFile
//
//	FXmlNode* _RootNode = _XmlFile->GetRootNode();  //get the root node
//
//	const TArray<FXmlNode*> _AssetNodes = _RootNode->GetChildrenNodes();  //get all the children nodes
//
//	for (FXmlNode* node : _AssetNodes)  
//	{
//
//		const TArray<FXmlNode*> _ChildNodes = node->GetChildrenNodes();  //get all the children of the children
//
//		FString _AssetContent = node->GetContent();    //get the content
//
//		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, _AssetContent); //print to the screen
//
//		for (FXmlNode* node : _ChildNodes)
//		{
//			FString _ChildContent = node->GetContent();
//			
//			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, _ChildContent);
//		}
//	}
//
//}
//


