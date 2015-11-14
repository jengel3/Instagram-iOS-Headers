/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:56 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFindUsersViewDataSource.h>

@class NSArray;

@interface IGClusterBrowsingSuggestedUsersViewDataSource : IGFindUsersViewDataSource {

	NSArray* _parameters;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) NSArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
-(void)fetchMore;
-(void)fetchList;
-(id)requestWithMaxId:(id)arg1 parameters:(id)arg2 ;
-(id)initWithThumbnailSize:(CGSize)arg1 ;
-(id)parseListResponse:(id)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(CGSize)thumbnailSize;
@end

