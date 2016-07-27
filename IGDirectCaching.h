

@protocol IGDirectCaching <NSObject>
@required
-(id)storedThreadWithID:(id)arg1;
-(void)storeThread:(id)arg1;
-(void)fetchThreadsWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(id)threadsWithOptions:(id)arg1;
-(id)updateThreadWithThread:(id)arg1 mergeOption:(unsigned)arg2;
-(void)replaceContent:(id)arg1 forThreadId:(id)arg2 needsForceUpdate:(char)arg3;
-(id)updateThreadWithDictionary:(id)arg1 mergeOption:(unsigned)arg2;
-(id)storedThreadWithUsers:(id)arg1;
-(id)allPendingMessages;
-(void)removePendingMessage:(id)arg1;
-(void)removeAllPendingMessages;
-(void)updateOrAddPendingMessage:(id)arg1;
-(void)removeThreadWithId:(id)arg1;
-(unsigned)subscriptionStatus;

@end

