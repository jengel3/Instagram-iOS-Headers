/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/NSCoding.h>

@class IGPostItem, NSArray, NSString;

@interface IGExploreTrendingItem : NSObject <NSCoding> {

	IGPostItem* _topPostItem;
	NSArray* _postItems;
	NSString* _title;
	NSString* _subtitle;
	NSString* _key;

}

@property (nonatomic,readonly) IGPostItem * topPostItem;              //@synthesize topPostItem=_topPostItem - In the implementation block
@property (nonatomic,copy,readonly) NSArray * postItems;              //@synthesize postItems=_postItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * key;                        //@synthesize key=_key - In the implementation block
-(IGPostItem *)topPostItem;
-(id)imageURLsWithWidth:(float)arg1 ;
-(id)videoIconsVisible;
-(id)initWithPostItems:(id)arg1 title:(id)arg2 subtitle:(id)arg3 key:(id)arg4 ;
-(NSArray *)postItems;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)key;
-(NSString *)title;
-(NSString *)subtitle;
@end

