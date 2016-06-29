

@protocol IGDirectCaching <NSObject>
@required
-(id)threadsWithOptions:(id)arg1;
-(void)removeThreadWithId:(id)arg1;
-(void)fetchThreadsWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)storeThread:(id)arg1;
-(id)updateThreadWithThread:(id)arg1 mergeOption:(unsigned)arg2;
-(void)replaceContent:(id)arg1 forThreadId:(id)arg2 needsForceUpdate:(char)arg3;
-(id)updateThreadWithDictionary:(id)arg1 mergeOption:(unsigned)arg2;
-(id)storedThreadWithUsers:(id)arg1;
-(void)updateThreadWithUpload:(id)arg1 isNewUpload:(char)arg2;
-(unsigned)subscriptionStatus;

@end

