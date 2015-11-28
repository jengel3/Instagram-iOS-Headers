

@interface IGRealtimeStore : NSObject
+(void)patchStoreWithPatches:(id)arg1 ;
+(char)patchStoreWithOperation:(id)arg1 ;
+(char)processAddOperation:(id)arg1 ;
+(char)processRemoveOperation:(id)arg1 ;
+(char)processReplaceOperation:(id)arg1 ;
+(void)markPathAsTombstone:(id)arg1 ;
+(id)operationStore;
+(id)tombstoneStore;
+(void)removeAllObjects;
+(id)operations;
@end

