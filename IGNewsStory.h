

@class NSString, IGUser, NSURL, IGStyledString, NSArray;

@interface IGNewsStory : NSObject {

	NSString* _pk;
	int _storyType;
	IGUser* _user;
	NSURL* _profilePictureURL;
	IGStyledString* _styledString;
	NSArray* _mediaDictionaries;
	NSString* _threadID;
	int _requestCount;
	NSString* _payload;
	IGStyledString* _storyStyledString;
	double _timestamp;

}

@property (nonatomic,retain) NSString * pk;                                   //@synthesize pk=_pk - In the implementation block
@property (assign,nonatomic) int storyType;                                   //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,retain) IGUser * user;                                   //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSURL * profilePictureURL;                       //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (nonatomic,retain) IGStyledString * styledString;                   //@synthesize styledString=_styledString - In the implementation block
@property (nonatomic,retain) NSArray * mediaDictionaries;                     //@synthesize mediaDictionaries=_mediaDictionaries - In the implementation block
@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * threadID;                               //@synthesize threadID=_threadID - In the implementation block
@property (assign,nonatomic) int requestCount;                                //@synthesize requestCount=_requestCount - In the implementation block
@property (nonatomic,copy) NSString * payload;                                //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) IGStyledString * storyStyledString;              //@synthesize storyStyledString=_storyStyledString - In the implementation block
+(id)pkForDictionary:(id)arg1 ;
+(int)storyTypeForDictionary:(id)arg1 ;
+(id)userForDictionary:(id)arg1 ;
+(id)profilePictureURLForDictionary:(id)arg1 ;
+(id)storyStyledStringForDictionary:(id)arg1 ;
+(id)mediaForDictionary:(id)arg1 ;
+(int)requestCountForDictionary:(id)arg1 ;
+(id)payloadForDictionary:(id)arg1 ;
+(double)timestampForDictionary:(id)arg1 ;
+(id)threadIDForDictionary:(id)arg1 ;
+(id)followRequestStyledString;
+(id)styledStringForRegularStoryWithText:(id)arg1 links:(id)arg2 ;
+(id)styledStringForTimestamp:(int)arg1 ;
+(id)urlForLinkWithType:(id)arg1 target:(id)arg2 ;
+(char)isLinkBold:(id)arg1 ;
+(id)styledStringForTitle:(id)arg1 andSubtitle:(id)arg2 ;
-(void)setShouldMute:(char)arg1 ;
-(char)shouldMute;
-(IGStyledString *)styledString;
-(void)setStyledString:(IGStyledString *)arg1 ;
-(void)setPk:(NSString *)arg1 ;
-(NSString *)pk;
-(void)setThreadID:(NSString *)arg1 ;
-(int)storyType;
-(NSURL *)profilePictureURL;
-(void)configureWithDictionary:(id)arg1 ;
-(void)setStoryType:(int)arg1 ;
-(void)setStoryStyledString:(IGStyledString *)arg1 ;
-(void)setMediaDictionaries:(NSArray *)arg1 ;
-(IGStyledString *)storyStyledString;
-(NSArray *)mediaDictionaries;
-(void)setProfilePictureURL:(NSURL *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(double)timestamp;
-(NSString *)payload;
-(void)setTimestamp:(double)arg1 ;
-(int)requestCount;
-(void)setPayload:(NSString *)arg1 ;
-(void)setRequestCount:(int)arg1 ;
-(NSString *)threadID;
@end

