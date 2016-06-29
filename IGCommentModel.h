
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDKDiffable.h>

@protocol NSObject;
@class NSString, IGPost, IGUser, IGDate;

@interface IGCommentModel : NSObject <NSCoding, IGDKDiffable> {

	id<NSObject> _diffIdentifier;
	char _wasMarkedAsSpam;
	char _didReportAsSpam;
	char _showTranslation;
	char _hasTranslation;
	char _isLastCommentInSection;
	NSString* _pk;
	IGPost* _post;
	IGUser* _user;
	NSString* _text;
	int _type;
	IGDate* _createdAt;
	int _postedState;
	NSString* _idempotenceToken;
	NSString* _failureReason;
	NSString* _titleForHeaderView;
	NSString* _translation;

}

@property (nonatomic,retain) NSString * idempotenceToken;                //@synthesize idempotenceToken=_idempotenceToken - In the implementation block
@property (nonatomic,copy) NSString * failureReason;                     //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,copy) NSString * pk;                                //@synthesize pk=_pk - In the implementation block
@property (assign,nonatomic,__weak) IGPost * post;                       //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) IGUser * user;                              //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * text;                              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IGDate * createdAt;                         //@synthesize createdAt=_createdAt - In the implementation block
@property (assign,nonatomic) int postedState;                            //@synthesize postedState=_postedState - In the implementation block
@property (assign,nonatomic) char wasMarkedAsSpam;                       //@synthesize wasMarkedAsSpam=_wasMarkedAsSpam - In the implementation block
@property (assign,nonatomic) char didReportAsSpam;                       //@synthesize didReportAsSpam=_didReportAsSpam - In the implementation block
@property (nonatomic,readonly) char canDelete; 
@property (nonatomic,retain) NSString * titleForHeaderView;              //@synthesize titleForHeaderView=_titleForHeaderView - In the implementation block
@property (assign,nonatomic) char showTranslation;                       //@synthesize showTranslation=_showTranslation - In the implementation block
@property (nonatomic,readonly) char hasTranslation;                      //@synthesize hasTranslation=_hasTranslation - In the implementation block
@property (nonatomic,copy) NSString * translation;                       //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) char isLastCommentInSection;                //@synthesize isLastCommentInSection=_isLastCommentInSection - In the implementation block
+(id)postCommentWithText:(id)arg1 forPost:(id)arg2 ;
+(id)defaultTruncationTokenString;
+(id)moreTruncationTokenStringWithConfiguration:(id)arg1 ;
-(NSString *)pk;
-(void)setPk:(NSString *)arg1 ;
-(id)diffIdentifier;
-(void)setPost:(IGPost *)arg1 ;
-(void)setShowTranslation:(char)arg1 ;
-(char)showTranslation;
-(id)buildStyledStringWithNewline:(char)arg1 configuration:(id)arg2 ;
-(char)isLastCommentInSection;
-(void)reportWithReason:(int)arg1 ;
-(char)didReportAsSpam;
-(NSString *)titleForHeaderView;
-(void)setTitleForHeaderView:(NSString *)arg1 ;
-(void)postComment;
-(int)postedState;
-(void)setIsLastCommentInSection:(char)arg1 ;
-(void)removeComment;
-(void)setFailureReason:(NSString *)arg1 ;
-(void)onCommentDeleted;
-(id)buildStyledStringWithNewline:(char)arg1 width:(float)arg2 maximumUntruncatedNumberOfLines:(int)arg3 truncatedToNumberOfLines:(int)arg4 truncationToken:(id)arg5 configuration:(id)arg6 ;
-(void)setDidReportAsSpam:(char)arg1 ;
-(void)reportInappropriateWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)wasMarkedAsSpam;
-(void)setWasMarkedAsSpam:(char)arg1 ;
-(void)setIdempotenceToken:(NSString *)arg1 ;
-(id)stringWithCollapsedEmptyLines:(id)arg1 ;
-(id)initWithText:(id)arg1 post:(id)arg2 user:(id)arg3 ;
-(id)buildStyledStringWithNewline:(char)arg1 width:(float)arg2 numberOfLines:(int)arg3 truncationToken:(id)arg4 configuration:(id)arg5 ;
-(id)styledStringForWidth:(float)arg1 feedItem:(id)arg2 shouldCollapseCaption:(char)arg3 configuration:(id)arg4 ;
-(IGPost *)post;
-(char)hasTranslation;
-(NSString *)idempotenceToken;
-(void)setPostedState:(int)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)translation;
-(void)setTranslation:(NSString *)arg1 ;
-(char)canDelete;
-(void)setCreatedAt:(IGDate *)arg1 ;
-(NSString *)failureReason;
-(IGDate *)createdAt;
@end

