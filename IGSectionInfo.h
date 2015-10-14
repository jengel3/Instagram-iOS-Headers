/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:01 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/NSCopying.h>

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

