

@class NSString, NSMutableDictionary;

@interface IGAPIRequestBuilder : NSObject {

	unsigned _HTTPMethod;
	NSString* _path;
	NSMutableDictionary* _parameters;
	NSMutableDictionary* _rawParameters;
	NSMutableDictionary* _fileParameters;
	NSMutableDictionary* _headers;
	char _HTTPShouldHandleCookies;
	double _timeoutInterval;
	char _isSigned;

}
+(id)builderWithHTTPMethod:(unsigned)arg1 path:(id)arg2 ;
+(id)builderWithHTTPMethod:(unsigned)arg1 format:(id)arg2 ;
-(id)setRawValue:(id)arg1 forParameter:(id)arg2 ;
-(id)sign;
-(id)setInteger:(int)arg1 forParameter:(id)arg2 ;
-(id)setDouble:(double)arg1 forParameter:(id)arg2 ;
-(id)appendTopAggregatorOverride;
-(id)addInstalledAppsHeader;
-(id)addAdsHeader;
-(id)addDeviceIDHeader;
-(id)setFile:(id)arg1 forParameter:(id)arg2 ;
-(id)setBool:(char)arg1 forParameter:(id)arg2 ;
-(id)installedAppsDictionary;
-(id)advertisingID;
-(id)commonParametersForPostMethod;
-(id)setValue:(id)arg1 forParameter:(id)arg2 ;
-(id)init;
-(id)description;
-(id)request;
-(id)setHTTPShouldHandleCookies:(char)arg1 ;
-(id)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(id)setTimeoutInterval:(double)arg1 ;
@end

