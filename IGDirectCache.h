
#import <Instagram/IGDirectCaching.h>

@class NSDate, IGDirectInboxMetaData, IGDirectThreadStore, NSString;

@interface IGDirectCache : NSObject <IGDirectCaching> {

	NSDate* _timeInboxLastCached;
	IGDirectInboxMetaData* _inbox;

}

@property (nonatomic,readonly) IGDirectThreadStore * threadStore; 
@property (nonatomic,copy) IGDirectInboxMetaData * inbox;                      //@synthesize inbox=_inbox - In the implementation block
@property (nonatomic,retain) NSDate * timeInboxLastCached;                     //@synthesize timeInboxLastCached=_timeInboxLastCached - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(id)threadsWithOptions:(id)arg1 ;
-(void)saveInbox:(id)arg1 ;
-(void)setTimeInboxLastCached:(NSDate *)arg1 ;
-(IGDirectInboxMetaData *)inbox;
-(void)setInbox:(IGDirectInboxMetaData *)arg1 ;
-(id)inboxCacheFileURL;
-(void)saveThreads:(id)arg1 mergeOption:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchThreadPageFromCursor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(IGDirectThreadStore *)threadStore;
-(void)fetchThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)timeInboxLastCached;
-(void)fetchInboxCompletion:(/*^block*/id)arg1 ;
-(void)readInboxFromDisk:(/*^block*/id)arg1 ;
-(void)saveInbox:(id)arg1 threads:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeThreadWithId:(id)arg1 ;
-(void)clearInboxData;
-(void)fetchThreadsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeThread:(id)arg1 ;
-(id)updateThreadWithThread:(id)arg1 mergeOption:(unsigned)arg2 ;
-(void)replaceContent:(id)arg1 forThreadId:(id)arg2 needsForceUpdate:(char)arg3 ;
-(id)updateThreadWithDictionary:(id)arg1 mergeOption:(unsigned)arg2 ;
-(id)storedThreadWithUsers:(id)arg1 ;
-(void)updateThreadWithUpload:(id)arg1 isNewUpload:(char)arg2 ;
-(unsigned)subscriptionStatus;
@end

