

@class NSMutableArray, NSMutableData, NSString, RCTNetworking;

@interface RCTHTTPFormDataHelper : NSObject {

	NSMutableArray* _parts;
	NSMutableData* _multipartBody;
	/*^block*/id _callback;
	NSString* _boundary;
	RCTNetworking* _networker;

}

@property (assign,nonatomic,__weak) RCTNetworking * networker;              //@synthesize networker=_networker - In the implementation block
-(/*^block*/id)handleResult:(id)arg1 error:(id)arg2 ;
-(/*^block*/id)process:(id)arg1 callback:(/*^block*/id)arg2 ;
-(RCTNetworking *)networker;
-(void)setNetworker:(RCTNetworking *)arg1 ;
@end

