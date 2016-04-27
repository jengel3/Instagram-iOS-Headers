
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class IGUser, IGNonCurrentUserDefaults, NSString;

@interface IGUserSession : NSObject <IGUserSessionClearableObject> {

	unordered_map<Class<IGUserSessionObject>, std::__1::shared_future<Value>, std::__1::hash<Class<IGUserSessionObject> >, std::__1::equal_to<Class<IGUserSessionObject> >, std::__1::allocator<std::__1::pair<const Class<IGUserSessionObject>, std::__1::shared_future<Value> > > >* _objectMap;
	Mutex _objectsLock;
	IGUser* _user;
	IGNonCurrentUserDefaults* _nonCurrentUserDefaults;
	unsigned _backgroundTask;

}

@property (nonatomic,retain) IGUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * nonCurrentUserDefaults;              //@synthesize nonCurrentUserDefaults=_nonCurrentUserDefaults - In the implementation block
@property (assign,nonatomic) unsigned backgroundTask;                                        //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)classesWhereWillSwitchUsersShouldRunInForeground;
+(id)storesThatCacheUserData;
+(id)storesToClearAfterApplicationCrash;
+(id)inMemoryStoresThatCacheUserData;
-(unsigned)backgroundTask;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)albumSeenStateStore;
-(id)autocompleteUsersStore;
-(id)autocompleteHashtagsStore;
-(id)blendedSearchRecentItemsOrderStore;
-(id)flaggedCommentLedger;
-(id)directRecipientManager;
-(id)directThreadStore;
-(id)publicThreadStore;
-(id)mediaUploadManager;
-(id)autocompletePlacesStore;
-(id)albumCreationManager;
-(id)inAppBadgeManager;
-(id)webViewProcessPoolContainer;
-(id)userExperimentSet;
-(id)realtimeClient;
-(id)recentHiddenSearchItemStore;
-(id)frequentHiddenSearchItemStore;
-(void)willLogOutPrivate:(id)arg1 ;
-(void)archiveInBackground;
-(id)valueForClass:(Class)arg1 withInitializer:(/*^block*/id)arg2 ;
-(IGNonCurrentUserDefaults *)nonCurrentUserDefaults;
-(void)setNonCurrentUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)videoRenderQueue;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)dealloc;
-(id)initForTesting;
-(void)setBackgroundTask:(unsigned)arg1 ;
-(id)serviceManager;
@end

