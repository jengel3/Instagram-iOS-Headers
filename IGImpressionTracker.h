

@class NSString, IGTimestampContainer;

@interface IGImpressionTracker : NSObject {

	NSString* _cachePath;
	IGTimestampContainer* _impressionTimestamps;
	IGTimestampContainer* _impressionViewedTimestamps;
	IGTimestampContainer* _viewingStartTimestamps;

}
-(id)initWithCacheFilePrefix:(id)arg1 ;
-(void)updateTimestampForKey:(id)arg1 withType:(int)arg2 ;
-(double)timestampForKey:(id)arg1 withType:(int)arg2 ;
-(double)timeIntervalSinceLastUpdateForKey:(id)arg1 withType:(int)arg2 ;
-(void)removeTimestampForKey:(id)arg1 withType:(int)arg2 ;
-(void)migrateExistingUserDefaultsCacheToFile;
-(void)migratePreviousFileFormatWithPrefix:(id)arg1 ;
-(void)writeImpressionTimestampsToDisk;
-(void)updateTimestampForKey:(id)arg1 withType:(int)arg2 date:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)reset;
@end

