

@class NSMutableArray, NSDate, NSString, NSArray;

@interface IGAnalyticsBinarySession : NSObject {

	NSMutableArray* _currentBatch;
	NSDate* _startTime;
	NSString* _sessionID;
	NSString* _deviceID;
	NSString* _appID;
	NSString* _deviceSoftwareVersion;
	NSString* _deviceHardwareVersion;
	NSString* _appVersion;

}

@property (nonatomic,readonly) NSDate * startTime;                            //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSArray * currentBatch; 
@property (nonatomic,readonly) NSString * sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * deviceID;                           //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSString * appID;                              //@synthesize appID=_appID - In the implementation block
@property (nonatomic,readonly) NSString * deviceSoftwareVersion;              //@synthesize deviceSoftwareVersion=_deviceSoftwareVersion - In the implementation block
@property (nonatomic,readonly) NSString * deviceHardwareVersion;              //@synthesize deviceHardwareVersion=_deviceHardwareVersion - In the implementation block
@property (nonatomic,readonly) NSString * appVersion;                         //@synthesize appVersion=_appVersion - In the implementation block
-(id)initWithAppID:(id)arg1 appVersion:(id)arg2 deviceID:(id)arg3 deviceSoftwareVersion:(id)arg4 deviceHardwareVersion:(id)arg5 ;
-(void)beginNewBatch;
-(id)loggingDataForCurrentBatch;
-(void)addEvent:(id)arg1 ;
-(NSDate *)startTime;
-(NSString *)deviceSoftwareVersion;
-(NSString *)deviceHardwareVersion;
-(NSArray *)currentBatch;
-(NSString *)sessionID;
-(NSString *)deviceID;
-(NSString *)appVersion;
-(NSString *)appID;
@end

