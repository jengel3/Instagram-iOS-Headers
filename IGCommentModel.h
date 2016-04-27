
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDKDiffable.h>

@protocol NSObject;
@class NSString, IGPost, IGUser, IGDate;

@interface IGCommentModel : NSObject <NSCoding, IGDKDiffable> {

	id<NSObject> _diffIdentifier;
	char _wasMarkedAsSpam;
	char _didReportAsSpam;
	NSString* _pk;
	IGPost* _post;
	IGUser* _user;
	NSString* _text;
	int _type;
	IGDate* _createdAt;
	int _postedState;
	NSString* _idempotenceToken;
	NSString* _failureReason;

}

@property (nonatomic,copy) NSString * pk;                              //@synthesize pk=_pk - In the implementation block
@property (assign,nonatomic,__weak) IGPost * post;                     //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) IGUser * user;                            //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IGDate * createdAt;                       //@synthesize createdAt=_createdAt - In the implementation block
@property (assign,nonatomic) int postedState;                          //@synthesize postedState=_postedState - In the implementation block
@property (assign,nonatomic) char wasMarkedAsSpam;                     //@synthesize wasMarkedAsSpam=_wasMarkedAsSpam - In the implementation block
@property (assign,nonatomic) char didReportAsSpam;                     //@synthesize didReportAsSpam=_didReportAsSpam - In the implementation block
@property (nonatomic,readonly) char canDelete; 
@property (nonatomic,retain) NSString * idempotenceToken;              //@synthesize idempotenceToken=_idempotenceToken - In the implementation block
@property (nonatomic,copy) NSString * failureReason;                   //@synthesize failureReason=_failureReason - In the implementation block
+(id)postCommentWithText:(id)arg1 forPost:(id)arg2 ;
+(id)defaultTruncationTokenString;
+(id)moreTruncationTokenString;
-(id)diffIdentifier;
-(void)setPk:(NSString *)arg1 ;
-(NSString *)pk;
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(id)buildStyledStringWithNewline:(char)arg1 ;
-(void)postComment;
-(int)postedState;
-(void)setPostedState:(int)arg1 ;
-(NSString *)idempotenceToken;
-(void)forceRemoveAndReportWithReason:(int)arg1 ;
-(void)setFailureReason:(NSString *)arg1 ;
-(void)onCommentDeleted;
-(void)setDidReportAsSpam:(char)arg1 ;
-(void)reportInappropriateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)buildStyledStringWithNewline:(char)arg1 width:(float)arg2 maximumUntruncatedNumberOfLines:(int)arg3 truncatedToNumberOfLines:(int)arg4 truncationToken:(id)arg5 ;
-(char)wasMarkedAsSpam;
-(char)didReportAsSpam;
-(void)removeAndReportWithReason:(int)arg1 ;
-(id)styledStringForWidth:(float)arg1 feedItem:(id)arg2 shouldCollapseCaption:(char)arg3 ;
-(void)reportWithReason:(int)arg1 ;
-(void)setWasMarkedAsSpam:(char)arg1 ;
-(void)setIdempotenceToken:(NSString *)arg1 ;
-(id)stringWithCollapsedEmptyLines:(id)arg1 ;
-(id)initWithText:(id)arg1 post:(id)arg2 user:(id)arg3 ;
-(id)buildStyledStringWithNewline:(char)arg1 width:(float)arg2 numberOfLines:(int)arg3 truncationToken:(id)arg4 ;
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
-(char)canDelete;
-(void)setCreatedAt:(IGDate *)arg1 ;
-(NSString *)failureReason;
-(IGDate *)createdAt;
@end

