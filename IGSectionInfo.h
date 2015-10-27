/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IGSectionInfo : NSObject <NSCopying> {

	NSString* _title;
	id _sectionType;
	NSArray* _rowsInfoArray;

}

@property (nonatomic,retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) id sectionType;                       //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,retain) NSArray * rowsInfoArray;              //@synthesize rowsInfoArray=_rowsInfoArray - In the implementation block
-(NSArray *)rowsInfoArray;
-(void)setRowsInfoArray:(NSArray *)arg1 ;
-(id)sectionType;
-(void)setSectionType:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

