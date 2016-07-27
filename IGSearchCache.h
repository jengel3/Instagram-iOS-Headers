

@class NSMutableDictionary;

@interface IGSearchCache : NSObject {

	NSMutableDictionary* _store;

}

@property (retain) NSMutableDictionary * store;              //@synthesize store=_store - In the implementation block
-(id)findOrCreateCacheEntryWithKey:(id)arg1 queryString:(id)arg2 additionalParameters:(id)arg3 ;
-(NSMutableDictionary *)store;
-(void)setStore:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
@end

