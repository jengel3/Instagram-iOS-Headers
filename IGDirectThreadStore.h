
#import <Instagram/IGUserSessionClearableObject.h>
#import <Instagram/IGDirectCaching.h>

@class NSMapTable, NSString, IGNonCurrentUserDefaults, IGDirectThreadDiskCache, IGDirectThreadMerger, IGDirectThreadService;

@interface IGDirectThreadStore : NSObject <IGUserSessionClearableObject, IGDirectCaching> {

	NSMapTable* _threads;
	unsigned _backgroundTask;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	IGDirectThreadDiskCache* _directThreadDiskCache;
	IGDirectThreadMerger* _threadMerger;
	IGDirectThreadService* _threadService;

}

@property (nonatomic,readonly) NSString * userSessionPK;                                    //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,readonly) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) IGDirectThreadDiskCache * directThreadDiskCache;               //@synthesize directThreadDiskCache=_directThreadDiskCache - In the implementation block
@property (nonatomic,retain) IGDirectThreadMerger * threadMerger;                           //@synthesize threadMerger=_threadMerger - In the implementation block
@property (nonatomic,readonly) IGDirectThreadService * threadService;                       //@synthesize threadService=_threadService - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSString *)userSessionPK;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)onBackground;
-(IGDirectThreadDiskCache *)directThreadDiskCache;
-(id)storedThreadWithID:(id)arg1 ;
-(IGDirectThreadMerger *)threadMerger;
-(void)storeThread:(id)arg1 ;
-(void)cacheThreadsToDisk:(id)arg1 ;
-(void)fetchThreadsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)cacheThreadToDisk:(id)arg1 withAdditionalContent:(char)arg2 ;
-(id)threadsWithOptions:(id)arg1 ;
-(id)updateThreadWithThread:(id)arg1 mergeOption:(unsigned)arg2 ;
-(IGDirectThreadService *)threadService;
-(id)storedThreadWithUsers:(id)arg1 ;
-(id)allPendingMessages;
-(void)removePendingMessage:(id)arg1 ;
-(void)removeAllPendingMessages;
-(void)updateOrAddPendingMessage:(id)arg1 ;
-(id)updateThreadWithDictionary:(id)arg1 mergeOption:(unsigned)arg2 ;
-(void)replaceContent:(id)arg1 forThreadId:(id)arg2 needsForceUpdate:(char)arg3 ;
-(void)removeThreadWithId:(id)arg1 ;
-(void)addContent:(id)arg1 forThreadId:(id)arg2 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(void)setDirectThreadDiskCache:(IGDirectThreadDiskCache *)arg1 ;
-(void)setThreadMerger:(IGDirectThreadMerger *)arg1 ;
-(void)dealloc;
@end

