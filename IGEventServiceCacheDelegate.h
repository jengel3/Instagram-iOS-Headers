

@protocol IGEventServiceCacheDelegate <NSObject>
@required
-(void)eventService:(id)arg1 didLoadCachedPosts:(id)arg2;
-(void)eventServiceFailedToLoadFromCache:(id)arg1;

@end

