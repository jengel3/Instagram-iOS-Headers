

@class NSString, IGUser, NSURL, IGStyledString, NSArray;

@interface IGNewsStory : NSObject {

	char _hideProfile;
	NSString* _pk;
	int _storyType;
	IGUser* _user;
	NSURL* _profilePictureURL;
	IGStyledString* _styledString;
	NSArray* _mediaDictionaries;
	NSString* _threadID;
	NSString* _actionURLString;
	NSString* _destination;
	int _requestCount;
	NSString* _payload;
	IGStyledString* _storyStyledString;
	double _timestamp;

}

@property (nonatomic,retain) IGStyledString * storyStyledString;              //@synthesize storyStyledString=_storyStyledString - In the implementation block
@property (nonatomic,copy) NSString * threadID;                               //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,retain) NSString * pk;                                   //@synthesize pk=_pk - In the implementation block
@property (assign,nonatomic) int storyType;                                   //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,retain) IGUser * user;                                   //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSURL * profilePictureURL;                       //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (nonatomic,retain) IGStyledString * styledString;                   //@synthesize styledString=_styledString - In the implementation block
@property (nonatomic,retain) NSArray * mediaDictionaries;                     //@synthesize mediaDictionaries=_mediaDictionaries - In the implementation block
@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * actionURLString;                        //@synthesize actionURLString=_actionURLString - In the implementation block
@property (nonatomic,copy) NSString * destination;                            //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) int requestCount;                                //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) char hideProfile;                                //@synthesize hideProfile=_hideProfile - In the implementation block
@property (nonatomic,copy) NSString * payload;                                //@synthesize payload=_payload - In the implementation block
+(id)friendRequestStoriesFromDict:(id)arg1 ;
+(id)followRequestStyledStringWithRequestCount:(int)arg1 ;
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
+(id)actionURLStringForDictionary:(id)arg1 ;
+(id)destinationStringForDictionary:(id)arg1 ;
+(id)styledStringForTitle:(id)arg1 andSubtitle:(id)arg2 ;
+(id)followRequestStyledString;
+(id)copyrightRemovalStyledStringWithTitle:(id)arg1 subtitle:(id)arg2 ;
+(id)styledStringForRegularStoryWithText:(id)arg1 links:(id)arg2 ;
+(id)styledStringForTimestamp:(int)arg1 ;
+(id)urlForLinkWithType:(id)arg1 target:(id)arg2 ;
+(void)linkifyStyledString:(id)arg1 link:(id)arg2 targetURL:(id)arg3 ;
+(char)isLinkBold:(id)arg1 ;
-(IGStyledString *)styledString;
-(void)setStyledString:(IGStyledString *)arg1 ;
-(NSString *)pk;
-(void)setPk:(NSString *)arg1 ;
-(void)setThreadID:(NSString *)arg1 ;
-(NSString *)actionURLString;
-(int)storyType;
-(void)configureWithDictionary:(id)arg1 ;
-(void)setStoryType:(int)arg1 ;
-(void)setStoryStyledString:(IGStyledString *)arg1 ;
-(void)setMediaDictionaries:(NSArray *)arg1 ;
-(void)setHideProfile:(char)arg1 ;
-(void)setActionURLString:(NSString *)arg1 ;
-(IGStyledString *)storyStyledString;
-(char)hideProfile;
-(NSArray *)mediaDictionaries;
-(void)setProfilePictureURL:(NSURL *)arg1 ;
-(NSURL *)profilePictureURL;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(double)timestamp;
-(NSString *)payload;
-(void)setTimestamp:(double)arg1 ;
-(int)requestCount;
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(void)setPayload:(NSString *)arg1 ;
-(void)setRequestCount:(int)arg1 ;
-(NSString *)threadID;
@end

