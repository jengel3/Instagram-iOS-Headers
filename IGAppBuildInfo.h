

@class NSURL;

@interface IGAppBuildInfo : NSObject {

	NSURL* _buildURL;
	int _buildNumber;
	int _clientAction;

}

@property (nonatomic,copy,readonly) NSURL * buildURL;              //@synthesize buildURL=_buildURL - In the implementation block
@property (nonatomic,readonly) int buildNumber;                    //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,readonly) int clientAction;                   //@synthesize clientAction=_clientAction - In the implementation block
-(id)initWithBuildURL:(id)arg1 buildNumber:(int)arg2 clientAction:(int)arg3 ;
-(NSURL *)buildURL;
-(int)clientAction;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(int)buildNumber;
@end

