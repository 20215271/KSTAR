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
            // 공백 기준으로 라인 분리
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

        //// 샘플링한 좌표를 저장할 배열
        //FilteredPositions.Add(Positions[0]);
        //FVector LastPoint = Positions[0];

        //// 서로 일정 거리 이상 떨어진 좌표만 배열에 저장
        //for (int32 i = 1; i < Positions.Num(); i++) {
        //    if (FVector::Dist(LastPoint, Positions[i]) > 50) { // 정수값 조절을 통해서 제어 가능
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