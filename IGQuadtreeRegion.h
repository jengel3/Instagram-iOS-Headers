/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class QuadtreePoint;

@interface IGQuadtreeRegion : NSObject {

	QuadtreePoint* _northwest;
	QuadtreePoint* _southeast;
	QuadtreePoint* _center;
	QuadtreePoint* _halfDimension;

}

@property (nonatomic,readonly) QuadtreePoint * center;                     //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) QuadtreePoint * halfDimension;              //@synthesize halfDimension=_halfDimension - In the implementation block
+(SCD_Struct_IG32)regionAroundCoordinate:(SCD_Struct_IG30)arg1 withDistanceToBoundary:(double)arg2 ;
+(id)globalRegion;
+(SCD_Struct_IG32)regionAroundPoint:(id)arg1 withDistanceToBoundary:(double)arg2 ;
-(id)initWithMKCoordinateRegion:(SCD_Struct_IG32)arg1 ;
-(SCD_Struct_IG32)toMKCoordinateRegion;
-(char)isEqualToRegion:(id)arg1 ;
-(QuadtreePoint *)halfDimension;
-(id)expandRegion:(double)arg1 ;
-(char)containsRegion:(id)arg1 ;
-(char)isGlobalRegion;
-(id)initWithMKCoordinateRegion:(SCD_Struct_IG32)arg1 expansionFactor:(double)arg2 ;
-(id)init:(id)arg1 halfDimension:(id)arg2 ;
-(id)northwest;
-(id)southeast;
-(char)intersectsRegion:(id)arg1 ;
-(QuadtreePoint *)center;
-(char)containsPoint:(id)arg1 ;
@end

