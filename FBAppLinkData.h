

@class NSURL, NSArray, NSString, NSDictionary;

@interface FBAppLinkData : NSObject {

	NSURL* _targetURL;
	NSArray* _actionTypes;
	NSArray* _actionIDs;
	NSString* _ref;
	NSString* _userAgent;
	NSDictionary* _refererData;
	NSDictionary* _originalQueryParameters;
	NSURL* _originalURL;
	NSDictionary* _arguments;

}

@property (retain) NSURL * targetURL;                                 //@synthesize targetURL=_targetURL - In the implementation block
@property (copy) NSArray * actionTypes;                               //@synthesize actionTypes=_actionTypes - In the implementation block
@property (copy) NSArray * actionIDs;                                 //@synthesize actionIDs=_actionIDs - In the implementation block
@property (copy) NSString * ref;                                      //@synthesize ref=_ref - In the implementation block
@property (copy) NSString * userAgent;                                //@synthesize userAgent=_userAgent - In the implementation block
@property (copy) NSDictionary * refererData;                          //@synthesize refererData=_refererData - In the implementation block
@property (copy) NSDictionary * originalQueryParameters;              //@synthesize originalQueryParameters=_originalQueryParameters - In the implementation block
@property (retain) NSURL * originalURL;                               //@synthesize originalURL=_originalURL - In the implementation block
@property (copy) NSDictionary * arguments;                            //@synthesize arguments=_arguments - In the implementation block
+(id)createFromURL:(id)arg1 ;
-(NSArray *)actionTypes;
-(id)initWithURL:(id)arg1 targetURL:(id)arg2 originalParams:(id)arg3 arguments:(id)arg4 ;
-(void)setActionIDs:(NSArray *)arg1 ;
-(void)setActionTypes:(NSArray *)arg1 ;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(void)setRefererData:(NSDictionary *)arg1 ;
-(void)setOriginalQueryParameters:(NSDictionary *)arg1 ;
-(NSArray *)actionIDs;
-(id)initWithURL:(id)arg1 targetURL:(id)arg2 ref:(id)arg3 userAgent:(id)arg4 refererData:(id)arg5 originalParams:(id)arg6 ;
-(NSDictionary *)refererData;
-(NSDictionary *)originalQueryParameters;
-(void)setArguments:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isValid;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)originalURL;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSDictionary *)arguments;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
-(void)setTargetURL:(NSURL *)arg1 ;
-(NSURL *)targetURL;
@end

