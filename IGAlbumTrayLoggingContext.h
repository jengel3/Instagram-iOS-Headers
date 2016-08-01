

@class NSString, NSArray, NSMutableSet;

@interface IGAlbumTrayLoggingContext : NSObject {

	NSString* _moduleName;
	double _startTimestamp;
	NSArray* _albums;
	NSMutableSet* _seenItems;
	NSString* _sessionID;

}

@property (nonatomic,readonly) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
-(void)logTrayRefreshWithRefreshType:(int)arg1 wasSuccessful:(char)arg2 duration:(double)arg3 ;
-(void)logTrayImpressionOfAlbum:(id)arg1 ;
-(id)extraCommonDict;
-(void)logEvent:(id)arg1 withExtraDict:(id)arg2 ;
-(id)initWithModuleName:(id)arg1 ;
-(void)notifyRefreshWithRefreshType:(int)arg1 albums:(id)arg2 refreshDuration:(double)arg3 ;
-(void)notifyTrayRefreshFailureWithRefreshType:(int)arg1 albums:(id)arg2 refreshDuration:(double)arg3 ;
-(void)notifyImpressionOfAlbum:(id)arg1 ;
-(NSString *)sessionID;
@end

