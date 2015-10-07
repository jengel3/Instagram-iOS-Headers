/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:08 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/MKAnnotation.h>

@class NSString, IGLocation;

@interface IGLocationAnnotation : NSObject <MKAnnotation> {

	IGLocation* _location;

}

@property (nonatomic,readonly) SCD_Struct_IG39 coordinate; 
@property (nonatomic,retain) IGLocation * location;                     //@synthesize location=_location - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)initWithLocation:(id)arg1 ;
-(NSString *)title;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(SCD_Struct_IG39)coordinate;
@end

