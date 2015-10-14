/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:59 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface IGClusterData : NSObject {

	NSString* _title;
	int _moreCount;
	NSArray* _users;
	NSString* _clusterKey;
	NSString* _thumbnailURL;

}

@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int moreCount;                      //@synthesize moreCount=_moreCount - In the implementation block
@property (nonatomic,retain) NSArray * users;                    //@synthesize users=_users - In the implementation block
@property (nonatomic,copy) NSString * clusterKey;                //@synthesize clusterKey=_clusterKey - In the implementation block
@property (nonatomic,copy) NSString * thumbnailURL;              //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
+(id)clusterDataForDictionary:(id)arg1 ;
-(NSString *)clusterKey;
-(void)setClusterKey:(NSString *)arg1 ;
-(int)moreCount;
-(void)setMoreCount:(int)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(void)setThumbnailURL:(NSString *)arg1 ;
-(NSString *)thumbnailURL;
@end

