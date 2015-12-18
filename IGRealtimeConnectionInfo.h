
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSString, NSDate;

@interface IGRealtimeConnectionInfo : NSObject <NSCoding> {

	NSURL* _url;
	NSString* _authToken;
	NSDate* _authTokenExpirationDate;

}

@property (nonatomic,retain) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * authToken;                          //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) NSDate * authTokenExpirationDate;              //@synthesize authTokenExpirationDate=_authTokenExpirationDate - In the implementation block
-(id)initWithUrl:(id)arg1 authToken:(id)arg2 authTokenExpirationDate:(id)arg3 ;
-(NSDate *)authTokenExpirationDate;
-(void)setAuthTokenExpirationDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
@end

