

@class IGLRUCache;

@interface IGGraphQLCache : NSObject {

	IGLRUCache* _cache;

}

@property (nonatomic,readonly) IGLRUCache * cache;              //@synthesize cache=_cache - In the implementation block
-(void)setCachedResponseForRequest:(id)arg1 response:(id)arg2 ;
-(void)getCachedResponseForRequest:(id)arg1 hitCompletionHandler:(/*^block*/id)arg2 missCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(IGLRUCache *)cache;
@end

