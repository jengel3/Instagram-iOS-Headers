/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, IGTimestampContainer;

@interface IGImpressionTracker : NSObject {

	NSString* _cachePath;
	IGTimestampContainer* _impressionTimestamps;
	IGTimestampContainer* _impressionViewedTimestamps;
	IGTimestampContainer* _deliveryTimestamps;
	IGTimestampContainer* _viewingStartTimestamps;

}
-(id)initWithCacheFilePrefix:(id)arg1 ;
-(double)timestampForKey:(id)arg1 withType:(int)arg2 ;
-(void)updateTimestampForKey:(id)arg1 withType:(int)arg2 ;
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

