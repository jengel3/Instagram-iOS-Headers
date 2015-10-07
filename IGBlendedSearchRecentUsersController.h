/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGBlendedSearchRecentItemController.h>

@class NSArray, NSString;

@interface IGBlendedSearchRecentUsersController : NSObject <IGBlendedSearchRecentItemController> {

	NSArray* _recentUsers;

}

@property (nonatomic,retain) NSArray * recentUsers;                 //@synthesize recentUsers=_recentUsers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)recentUsers;
-(char)canHandleItem:(id)arg1 ;
-(id)restoreItemUsingIdentifier:(id)arg1 ;
-(id)identifierForItem:(id)arg1 ;
-(void)setRecentUsers:(NSArray *)arg1 ;
-(id)itemType;
@end

