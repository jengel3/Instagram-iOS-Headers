

@interface IGRealtimeStore : NSObject
+(char)processAddOperation:(id)arg1 ;
+(char)processRemoveOperation:(id)arg1 ;
+(char)processReplaceOperation:(id)arg1 ;
+(void)markPathAsTombstone:(id)arg1 ;
+(id)operationStore;
+(id)tombstoneStore;
+(char)patchStoreWithOperation:(id)arg1 ;
+(void)patchStoreWithPatches:(id)arg1 ;
+(void)removeAllObjects;
+(id)operations;
@end

