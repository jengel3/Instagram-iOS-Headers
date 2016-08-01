
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
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSString *)userSessionPK;
-(void)addRecentItem:(id)arg1 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(void)archiveIfNeeded;
-(NSMutableOrderedSet *)mutableRecentItems;
-(void)setNeedsToBeArchived:(char)arg1 ;
-(id)restoreRecentItems;
-(id)itemControllerForItemType:(id)arg1 ;
-(id)itemControllerForItem:(id)arg1 ;
-(char)needsToBeArchived;
-(void)saveRecentItems:(id)arg1 ;
-(NSArray *)itemControllers;
-(id)recentItems;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)dealloc;
-(void)clearHistory;
-(void)didEnterBackground:(id)arg1 ;
@end

