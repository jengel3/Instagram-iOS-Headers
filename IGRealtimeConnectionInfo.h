
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSString, NSDate;

@interface IGRealtimeConnectionInfo : NSObject <NSCoding> {

	NSURL* _url;
	NSString* _authToken;
	NSDate* _authTokenExpirationDate;
	NSString* _deviceId;
	NSString* _appId;
	int _sequenceId;

}

@property (nonatomic,readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * authToken;                            //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,readonly) NSDate * authTokenExpirationDate;              //@synthesize authTokenExpirationDate=_authTokenExpirationDate - In the implementation block
@property (nonatomic,readonly) NSString * deviceId;                           //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,readonly) NSString * appId;                              //@synthesize appId=_appId - In the implementation block
@property (nonatomic,readonly) int sequenceId;                                //@synthesize sequenceId=_sequenceId - In the implementation block
-(id)initWithDictionary:(id)arg1 deviceId:(id)arg2 appId:(id)arg3 sequenceId:(int)arg4 ;
-(id)initWithUrl:(id)arg1 authToken:(id)arg2 authTokenExpirationDate:(id)arg3 deviceId:(id)arg4 appId:(id)arg5 sequenceId:(int)arg6 ;
-(NSDate *)authTokenExpirationDate;
-(int)sequenceId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(NSString *)deviceId;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)appId;
@end

