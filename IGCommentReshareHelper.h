

@protocol IGCommentReshareHelperDelegate;
@class NSString, NSArray, IGFeedItem;

@interface IGCommentReshareHelper : NSObject {

	char _allUsernamesAreLeading;
	char _didTapReplyToUser;
	char _containsOnlyAtSign;
	char _isUserAlsoThePoster;
	char _hasLoggedReshareImpression;
	id<IGCommentReshareHelperDelegate> _delegate;
	NSString* _text;
	int _userPreference;
	NSArray* _usernames;
	IGFeedItem* _feedItem;
	NSString* _textToSend;
	float _ratio;
	int _minActionCount;

}

@property (assign,nonatomic,__weak) id<IGCommentReshareHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char didTapReplyToUser;                                          //@synthesize didTapReplyToUser=_didTapReplyToUser - In the implementation block
@property (nonatomic,copy) NSString * text;                                                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int userPreference;                                              //@synthesize userPreference=_userPreference - In the implementation block
@property (nonatomic,copy) NSArray * usernames;                                               //@synthesize usernames=_usernames - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) IGFeedItem * feedItem;                                         //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,copy) NSString * textToSend;                                             //@synthesize textToSend=_textToSend - In the implementation block
@property (assign,nonatomic) char containsOnlyAtSign;                                         //@synthesize containsOnlyAtSign=_containsOnlyAtSign - In the implementation block
@property (nonatomic,readonly) char isUserAlsoThePoster;                                      //@synthesize isUserAlsoThePoster=_isUserAlsoThePoster - In the implementation block
@property (assign,nonatomic) char hasLoggedReshareImpression;                                 //@synthesize hasLoggedReshareImpression=_hasLoggedReshareImpression - In the implementation block
@property (nonatomic,readonly) float ratio;                                                   //@synthesize ratio=_ratio - In the implementation block
@property (nonatomic,readonly) int minActionCount;                                            //@synthesize minActionCount=_minActionCount - In the implementation block
+(id)recipientFromUsernames:(id)arg1 ;
+(id)usernamesFromText:(id)arg1 ;
+(id)textByTrimmingLeadingUsernames:(id)arg1 text:(id)arg2 allUsernamesAreLeading:(char*)arg3 ;
+(char)isActiveDismisserForDismissCount:(int)arg1 sendCount:(int)arg2 definedRatio:(float)arg3 minActionCount:(int)arg4 ;
+(id)usernamesRegex;
-(IGFeedItem *)feedItem;
-(void)setUserPreference:(int)arg1 ;
-(NSArray *)usernames;
-(NSString *)textToSend;
-(void)setContainsOnlyAtSign:(char)arg1 ;
-(void)setUsernames:(NSArray *)arg1 ;
-(void)setTextToSend:(NSString *)arg1 ;
-(void)notifyStatusChangeIfNeededFromOldStatus:(int)arg1 ;
-(char)hasLoggedReshareImpression;
-(void)setHasLoggedReshareImpression:(char)arg1 ;
-(int)userPreference;
-(char)isUserAlsoThePoster;
-(char)didTapReplyToUser;
-(int)minActionCount;
-(char)containsOnlyAtSign;
-(char)isAnyUsernameOnCommentOnlyList;
-(id)initWithFeedItem:(id)arg1 currentUser:(id)arg2 ;
-(void)reshareWithCompletion:(/*^block*/id)arg1 ;
-(id)updatedTextForReshareModeWithOriginalText:(id)arg1 ;
-(void)setDidTapReplyToUser:(char)arg1 ;
-(float)ratio;
-(void)setDelegate:(id<IGCommentReshareHelperDelegate>)arg1 ;
-(id<IGCommentReshareHelperDelegate>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)status;
@end

