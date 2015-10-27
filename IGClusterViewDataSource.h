/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFindUsersViewDataSource.h>

@interface IGClusterViewDataSource : IGFindUsersViewDataSource {

	CGSize _thumbnailSize;

}

@property (assign,nonatomic) CGSize thumbnailSize;              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
-(id)initWithThumbnailSize:(CGSize)arg1 ;
-(id)parseListResponse:(id)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(CGSize)thumbnailSize;
@end

