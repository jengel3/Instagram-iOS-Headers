/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/NSCoding.h>
#import <Instagram/NSCopying.h>

@class IGFeedItem, NSMutableSet, NSSet;

@interface IGUsertagGroup : NSObject <NSCoding, NSCopying> {

	IGFeedItem* _feedItem;
	NSMutableSet* _inTagsSet;

}

@property (nonatomic,readonly) NSSet * inTags; 
@property (assign,nonatomic,__weak) IGFeedItem * feedItem;              //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) NSMutableSet * inTagsSet;                  //@synthesize inTagsSet=_inTagsSet - In the implementation block
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(id)currentUserUsertag;
-(void)removeUsertag:(id)arg1 ;
-(NSSet *)inTags;
-(char)currentUserIsTagged;
-(void)setInTagsSet:(NSMutableSet *)arg1 ;
-(void)addUsertag:(id)arg1 ;
-(NSMutableSet *)inTagsSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
-(char)updateWithDictionary:(id)arg1 ;
@end

