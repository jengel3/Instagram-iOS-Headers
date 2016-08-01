
#import <Instagram/IGDirectCaching.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class NSDate, IGDirectInboxMetaData, IGDirectInboxPendingRequests, NSString, IGDirectThreadStore;

@interface IGDirectCache : NSObject <IGDirectCaching, IGUserSessionClearableObject> {

	NSDate* _timeInboxLastCached;
	IGDirectInboxMetaData* _inbox;
	IGDirectInboxPendingRequests* _pendingRequests;
	NSString* _userPK;

}

@property (nonatomic,copy,readonly) NSString * userPK;                                  //@synthesize userPK=_userPK - In the implementation block
@property (nonatomic,readonly) IGDirectThreadStore * threadStore; 
@property (nonatomic,retain) NSDate * timeInboxLastCached;                              //@synthesize timeInboxLastCached=_timeInboxLastCached - In the implementation block
@property (nonatomic,copy) IGDirectInboxMetaData * inbox;                               //@synthesize inbox=_inbox - In the implementation block
@property (nonatomic,copy) IGDirectInboxPendingRequests * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)inboxCacheFileURLForUserPK:(id)arg1 ;
+(id)pendingRequestsCacheFileURLForUserPK:(id)arg1 ;
+(void)clearCacheForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)readInboxFromDisk:(/*^block*/id)arg1 ;
-(void)readPendingRequestsFromDisk:(/*^block*/id)arg1 ;
-(void)saveInboxMetaData:(id)arg1 ;
-(IGDirectThreadStore *)threadStore;
-(void)setTimeInboxLastCached:(NSDate *)arg1 ;
-(void)setInbox:(IGDirectInboxMetaData *)arg1 ;
-(void)archiveObject:(id)arg1 fileURL:(id)arg2 ;
-(void)unarchiveFileURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpCache;
-(void)saveThreads:(id)arg1 mergeOption:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchThreadPageFromCursor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)storedThreadWithID:(id)arg1 ;
-(void)storeThread:(id)arg1 ;
-(void)fetchThreadsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)threadsWithOptions:(id)arg1 ;
-(id)updateThreadWithThread:(id)arg1 mergeOption:(unsigned)arg2 ;
-(id)storedThreadWithUsers:(id)arg1 ;
-(id)allPendingMessages;
-(void)removePendingMessage:(id)arg1 ;
-(void)removeAllPendingMessages;
-(void)updateOrAddPendingMessage:(id)arg1 ;
-(id)updateThreadWithDictionary:(id)arg1 mergeOption:(unsigned)arg2 ;
-(void)replaceContent:(id)arg1 forThreadId:(id)arg2 needsForceUpdate:(char)arg3 ;
-(void)removeThreadWithId:(id)arg1 ;
-(void)addContent:(id)arg1 forThreadId:(id)arg2 ;
-(id)initWithUserPK:(id)arg1 ;
-(void)fetchThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)timeInboxLastCached;
-(void)fetchInboxCompletion:(/*^block*/id)arg1 ;
-(IGDirectInboxMetaData *)inbox;
-(void)savePendingRequests:(id)arg1 ;
-(void)saveInbox:(id)arg1 threads:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)userPK;
-(IGDirectInboxPendingRequests *)pendingRequests;
-(void)setPendingRequests:(IGDirectInboxPendingRequests *)arg1 ;
@end

