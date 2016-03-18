

@protocol IGCommentReshareHelperDelegate;
@class NSString, NSArray, NSSet;

@interface IGCommentReshareHelper : NSObject {

	char _allUsernamesAreLeading;
	char _shouldAvoidAutoPrompting;
	char _containsOnlyAtSign;
	id<IGCommentReshareHelperDelegate> _delegate;
	NSString* _text;
	int _userPreference;
	NSArray* _usernames;
	NSString* _textToSend;
	float _ratio;
	int _minActionCount;
	NSSet* _commentOnlyUsernames;

}

@property (assign,nonatomic,__weak) id<IGCommentReshareHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int userPreference;                                              //@synthesize userPreference=_userPreference - In the implementation block
@property (assign,nonatomic) char shouldAvoidAutoPrompting;                                   //@synthesize shouldAvoidAutoPrompting=_shouldAvoidAutoPrompting - In the implementation block
@property (nonatomic,copy) NSArray * usernames;                                               //@synthesize usernames=_usernames - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,copy) NSString * textToSend;                                             //@synthesize textToSend=_textToSend - In the implementation block
@property (assign,nonatomic) char containsOnlyAtSign;                                         //@synthesize containsOnlyAtSign=_containsOnlyAtSign - In the implementation block
@property (nonatomic,readonly) float ratio;                                                   //@synthesize ratio=_ratio - In the implementation block
@property (nonatomic,readonly) int minActionCount;                                            //@synthesize minActionCount=_minActionCount - In the implementation block
@property (nonatomic,copy) NSSet * commentOnlyUsernames;                                      //@synthesize commentOnlyUsernames=_commentOnlyUsernames - In the implementation block
+(id)recipientFromUsernames:(id)arg1 ;
+(id)usernamesFromText:(id)arg1 ;
+(id)textByTrimmingLeadingUsernames:(id)arg1 text:(id)arg2 allUsernamesAreLeading:(char*)arg3 ;
+(char)isActiveDismisserForDismissCount:(int)arg1 sendCount:(int)arg2 definedRatio:(float)arg3 minActionCount:(int)arg4 ;
+(id)usernamesRegex;
-(NSArray *)usernames;
-(NSString *)textToSend;
-(void)setCommentOnlyUsernames:(NSSet *)arg1 ;
-(void)setContainsOnlyAtSign:(char)arg1 ;
-(void)setUsernames:(NSArray *)arg1 ;
-(void)setTextToSend:(NSString *)arg1 ;
-(void)notifyStatusChangeIfNeededFromOldStatus:(int)arg1 ;
-(NSSet *)commentOnlyUsernames;
-(int)userPreference;
-(char)shouldAvoidAutoPrompting;
-(int)minActionCount;
-(char)containsOnlyAtSign;
-(char)isAnyUsernameOnCommentOnlyList;
-(void)resharePost:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateCommentOnlylistUsernamesFromCommentModels:(id)arg1 ;
-(id)updatedTextForReshareModeWithOriginalText:(id)arg1 ;
-(void)setUserPreference:(int)arg1 ;
-(void)setShouldAvoidAutoPrompting:(char)arg1 ;
-(float)ratio;
-(void)setDelegate:(id<IGCommentReshareHelperDelegate>)arg1 ;
-(id)init;
-(id<IGCommentReshareHelperDelegate>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)status;
@end

