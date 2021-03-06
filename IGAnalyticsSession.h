

@class NSString, NSDate, NSMutableArray;

@interface IGAnalyticsSession : NSObject {

	NSString* _sessionID;
	unsigned _sequence;
	NSString* _deviceID;
	NSString* _familyDeviceID;
	NSString* _appID;
	NSString* _userID;
	NSString* _facebookID;
	NSDate* _startTime;
	NSMutableArray* _currentBatch;

}

@property (nonatomic,copy,readonly) NSString * userID;                     //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) NSString * facebookID;                 //@synthesize facebookID=_facebookID - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSMutableArray * currentBatch;              //@synthesize currentBatch=_currentBatch - In the implementation block
+(id)appVersionString;
-(NSString *)facebookID;
-(void)beginNewBatch;
-(id)loggingParametersForCurrentBatchWithTimeStamp:(double)arg1 ;
-(id)initWithAppID:(id)arg1 deviceID:(id)arg2 familyDeviceID:(id)arg3 userID:(id)arg4 facebookID:(id)arg5 ;
-(void)addEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 uuid:(id)arg4 timestamp:(double)arg5 ;
-(void)appendEventsFromSession:(id)arg1 ;
-(id)loggingDataForCurrentBatchWithTimeStamp:(double)arg1 ;
-(id)description;
-(NSDate *)startTime;
-(NSMutableArray *)currentBatch;
-(NSString *)userID;
@end

