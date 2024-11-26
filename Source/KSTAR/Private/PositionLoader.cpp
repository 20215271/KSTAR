// Fill out your copyright notice in the Description page of Project Settings.


#include "PositionLoader.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"

PositionLoader::PositionLoader()
{
}

PositionLoader::~PositionLoader()
{
}

TArray<FVector> PositionLoader::LoadPositions(const FString& FilePath) {
	TArray<FVector> Positions;
    TArray<FString> FileLines;
    TArray<FVector> FilteredPositions;

    // Load the file into a string array
    if (FFileHelper::LoadFileToStringArray(FileLines, *FilePath))
    {
        for (int i = 2; i < FileLines.Num(); i++)
        {
            // ���� �������� ���� �и�
            TArray<FString> ParsedValues;
            FileLines[i].ParseIntoArray(ParsedValues, TEXT(" "), true);

            if (ParsedValues.Num() == 3)
            {
                // Convert string values to floats
                double X = FCString::Atod(*ParsedValues[0]) * 1000;
                double Y = FCString::Atod(*ParsedValues[1]) * 1000;
                double Z = FCString::Atod(*ParsedValues[2]) * 1000;

                Positions.Add(FVector3d(X, Y, Z));
            }
        }

        //// ���ø��� ��ǥ�� ������ �迭
        //FilteredPositions.Add(Positions[0]);
        //FVector LastPoint = Positions[0];

        //// ���� ���� �Ÿ� �̻� ������ ��ǥ�� �迭�� ����
        //for (int32 i = 1; i < Positions.Num(); i++) {
        //    if (FVector::Dist(LastPoint, Positions[i]) > 50) { // ������ ������ ���ؼ� ���� ����
        //        FilteredPositions.Add(Positions[i]);
        //        LastPoint = Positions[i];
        //    }
        //}

        //Positions = FilteredPositions;

        UE_LOG(LogTemp, Error, TEXT("Successfully load file: %s"), *FilePath);
        UE_LOG(LogTemp, Warning, TEXT("Number of Positions: %d"), Positions.Num());
    }
    else {
        UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s"), *FilePath);
    }

    return Positions;
}