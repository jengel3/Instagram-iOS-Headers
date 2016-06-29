

@protocol IGThreadStoreProtocol <NSObject>
@required
-(id)storedThreadWithID:(id)arg1;
-(id)updateThreadWithThread:(id)arg1 mergeOption:(unsigned)arg2;
-(void)addContent:(id)arg1 forThreadId:(id)arg2;
-(id)updateThreadWithDictionary:(id)arg1 mergeOption:(unsigned)arg2;

@end

