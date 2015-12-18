

@protocol IGCommentReshareHelperDelegate;
@class NSString, NSSet, NSArray;

@interface IGCommentReshareHelper : NSObject {

	char _userDeclinedSendingToDirect;
	char _containsAtSign;
	id<IGCommentReshareHelperDelegate> _delegate;
	NSString* _text;
	NSSet* _commentOnlyUsernames;

}

@property (assign,nonatomic,__weak) id<IGCommentReshareHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * text;                                                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) char userDeclinedSendingToDirect;                                //@synthesize userDeclinedSendingToDirect=_userDeclinedSendingToDirect - In the implementation block
@property (nonatomic,readonly) NSArray * usernames; 
@property (nonatomic,readonly) int status; 
@property (assign,nonatomic) char containsAtSign;                                             //@synthesize containsAtSign=_containsAtSign - In the implementation block
@property (nonatomic,retain) NSSet * commentOnlyUsernames;                                    //@synthesize commentOnlyUsernames=_commentOnlyUsernames - In the implementation block
+(id)recipientFromUsernames:(id)arg1 ;
+(id)textByTrimmingLeadingUsernames:(id)arg1 text:(id)arg2 ;
+(id)usernamesFromText:(id)arg1 ;
+(id)usernamesRegex;
-(NSArray *)usernames;
-(void)setCommentOnlyUsernames:(NSSet *)arg1 ;
-(void)setContainsAtSign:(char)arg1 ;
-(void)notifyStatusChangeIfNeededFromOldStatus:(int)arg1 ;
-(NSSet *)commentOnlyUsernames;
-(char)containsAtSign;
-(char)userDeclinedSendingToDirect;
-(char)isAnyUsernameOnCommentOnlyList;
-(void)resharePost:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateCommentOnlylistUsernamesFromCommentModels:(id)arg1 ;
-(void)setUserDeclinedSendingToDirect:(char)arg1 ;
-(void)setDelegate:(id<IGCommentReshareHelperDelegate>)arg1 ;
-(id<IGCommentReshareHelperDelegate>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)status;
@end

