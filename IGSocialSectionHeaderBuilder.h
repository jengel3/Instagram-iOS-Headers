/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface IGSocialSectionHeaderBuilder : NSObject {

	float _superviewWidth;
	NSSet* _socialPosts;

}

@property (assign,nonatomic) float superviewWidth;               //@synthesize superviewWidth=_superviewWidth - In the implementation block
@property (nonatomic,readonly) NSSet * socialPosts;              //@synthesize socialPosts=_socialPosts - In the implementation block
-(float)superviewWidth;
-(NSSet *)socialPosts;
-(void)configurePeopleYouFollowView:(id)arg1 withFeedItem:(id)arg2 ;
-(id)initWithSuperviewWidth:(float)arg1 socialPosts:(id)arg2 ;
-(id)buildSocialSectionHeader;
-(void)setSuperviewWidth:(float)arg1 ;
@end

