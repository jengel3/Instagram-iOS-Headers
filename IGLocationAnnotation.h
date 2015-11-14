/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:58 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, IGLocation;

@interface IGLocationAnnotation : NSObject <MKAnnotation> {

	IGLocation* _location;

}

@property (nonatomic,readonly) SCD_Struct_IG29 coordinate; 
@property (nonatomic,retain) IGLocation * location;                     //@synthesize location=_location - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(SCD_Struct_IG29)coordinate;
-(NSString *)title;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 ;
@end

