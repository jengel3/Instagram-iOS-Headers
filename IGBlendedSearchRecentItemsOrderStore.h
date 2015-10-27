/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGUserSessionClearableObject.h>

@class NSMutableOrderedSet, NSString, IGNonCurrentUserDefaults, NSArray;

@interface IGBlendedSearchRecentItemsOrderStore : NSObject <IGUserSessionClearableObject> {

	char _needsToBeArchived;
	NSMutableOrderedSet* _mutableRecentItems;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSArray* _itemControllers;

}

@property (nonatomic,retain) NSString * userSessionPK;                                    //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,readonly) NSArray * itemControllers;                                 //@synthesize itemControllers=_itemControllers - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * mutableRecentItems;                  //@synthesize mutableRecentItems=_mutableRecentItems - In the implementation block
@property (assign,nonatomic) char needsToBeArchived;                                      //@synthesize needsToBeArchived=_needsToBeArchived - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(NSString *)userSessionPK;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)addRecentItem:(id)arg1 ;
-(void)archiveIfNeeded;
-(NSMutableOrderedSet *)mutableRecentItems;
-(void)setNeedsToBeArchived:(char)arg1 ;
-(id)restoreRecentItems;
-(id)itemControllerForItemType:(id)arg1 ;
-(id)itemControllerForItem:(id)arg1 ;
-(char)needsToBeArchived;
-(void)saveRecentItems:(id)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(id)recentItems;
-(NSArray *)itemControllers;
-(void)archive;
-(void)dealloc;
-(void)clearHistory;
-(void)didEnterBackground:(id)arg1 ;
@end

