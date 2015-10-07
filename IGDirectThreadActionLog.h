/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:03 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGDirectContent.h>

@class NSString, NSArray;

@interface IGDirectThreadActionLog : IGDirectContent {

	NSString* _title;
	NSArray* _boldInfo;

}

@property (nonatomic,copy) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * boldInfo;              //@synthesize boldInfo=_boldInfo - In the implementation block
-(NSArray *)boldInfo;
-(void)setBoldInfo:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(id)digestDescription;
@end

