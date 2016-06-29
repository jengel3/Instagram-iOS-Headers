

@interface IGFeedSeenStateProcessor : NSObject
+(id)appendSeenStateToParameters:(id)arg1 isFirstPage:(char)arg2 isPrefetch:(char)arg3 ;
+(void)processSeenStateWithParameters:(id)arg1 posts:(id)arg2 isFirstPage:(char)arg3 ;
+(void)saveToDisk;
+(void)removeFromDisk;
@end

